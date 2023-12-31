//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibraryTransientStateController;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibraryTransientStateController : NSObject
{
    MPModelLibraryTransientStateController *_underlyingLibraryTransientStateController;	// 8 = 0x8
}

+ (id)didChangeNotificationName;	// IMP=0x00400000000042a3
+ (id)sharedLibraryTransientStateController;	// IMP=0x00400000000038ed
- (void).cxx_destruct;	// IMP=0x0000000000004353
- (void)_handleLibraryTransientStateControllerDidChangeNotification:(id)arg1;	// IMP=0x00000000000042b0
- (long long)_underlyingLibraryTransientFavoriteState:(long long)arg1;	// IMP=0x000000000000428c
- (long long)_libraryTransientFavoriteState:(long long)arg1;	// IMP=0x0000000000004275
- (void)performOperation:(id)arg1;	// IMP=0x000000000000425f
- (void)performFavoriteStateChangeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000041e4
- (void)performLibraryKeepLocalChangeWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000040ae
- (void)performLibraryImportChangeWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003f1c
- (void)performDeleteEntityWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003d34
- (void)performAddToPlaylistWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003ca0
- (long long)transientFavoriteStateForModelObject:(id)arg1;	// IMP=0x0000000000003c39
- (void)dealloc;	// IMP=0x0000000000003b9f
- (id)_initWithUnderlyingLibraryTransientStateController:(id)arg1;	// IMP=0x0000000000003a24

@end

