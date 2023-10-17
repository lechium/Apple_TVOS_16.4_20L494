//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _TVStackedMediaDocument;
@protocol _TVStackedMediaLoaderDelegate;

__attribute__((visibility("hidden")))
@interface _TVStackedMediaLoader : NSObject
{
    long long _state;	// 8 = 0x8
    id <_TVStackedMediaLoaderDelegate> _delegate;	// 16 = 0x10
    _TVStackedMediaDocument *_document;	// 24 = 0x18
    NSArray *_videoLoaders;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002b7ef
@property(retain, nonatomic) NSArray *videoLoaders; // @synthesize videoLoaders=_videoLoaders;
@property(retain, nonatomic) _TVStackedMediaDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak id <_TVStackedMediaLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)_prettyState:(long long)arg1;	// IMP=0x000000000002b75a
- (id)_prettyEvent:(long long)arg1;	// IMP=0x000000000002b736
- (void)stackedVideoAssetLoader:(id)arg1 completedWithSuccess:(_Bool)arg2 playerLayer:(id)arg3 error:(id)arg4 forEntry:(id)arg5;	// IMP=0x000000000002b60c
- (void)_transitionPreviewToVideo;	// IMP=0x000000000002b5c0
- (void)_transitionVideoToPreview;	// IMP=0x000000000002b574
- (void)_releaseVideoLoaders;	// IMP=0x000000000002b560
- (_Bool)_allLoadersHaveLoaded;	// IMP=0x000000000002b3d9
- (void)_cancelVideoLoaders;	// IMP=0x000000000002b256
- (_Bool)_loadVideoAssets;	// IMP=0x000000000002b09f
- (void)_createVideoLoaders;	// IMP=0x000000000002ad74
- (void)_handleEventPreviewToVideoTransitionCompleted;	// IMP=0x000000000002ac53
- (void)_handleEventVideoToPreviewTransitionCompleted;	// IMP=0x000000000002ab4e
- (void)_handleEventBecomeInactive;	// IMP=0x000000000002aaa6
- (void)_handleEventBecomeActive;	// IMP=0x000000000002aa2c
- (void)_handleEventVideoAssetFailed;	// IMP=0x000000000002a93c
- (void)_handleEventVideoAssetLoaded;	// IMP=0x000000000002a806
- (void)_processEvent:(long long)arg1;	// IMP=0x000000000002a794
- (void)_becomeActive;	// IMP=0x000000000002a77d
- (void)videoToPreviewTransitionCompleted;	// IMP=0x000000000002a766
- (void)previewToVideoTransitionCompleted;	// IMP=0x000000000002a74f
- (void)becomeInactive;	// IMP=0x000000000002a707
- (void)becomeActive;	// IMP=0x000000000002a6e4
- (void)dealloc;	// IMP=0x000000000002a6a6
- (id)initWithDocument:(id)arg1;	// IMP=0x000000000002a614

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
