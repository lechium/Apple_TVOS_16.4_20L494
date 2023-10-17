//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface HBUIPhotoLibraryImageLoader : NSObject
{
    NSOperationQueue *_imageLoaderQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00100000000264c7
- (void).cxx_destruct;	// IMP=0x000000000002723c
@property(readonly, nonatomic) NSOperationQueue *imageLoaderQueue; // @synthesize imageLoaderQueue=_imageLoaderQueue;
- (struct CGRect)_faceAreaRectForAsset:(id)arg1;	// IMP=0x000000000002712d
- (struct CGRect)_bestCropRectForAsset:(id)arg1;	// IMP=0x0000000000026f57
- (void)_createMemoryFullScreenImageForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026a2b
- (void)cancelLoad:(id)arg1;	// IMP=0x00000000000269df
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000265cc
- (id)imageKeyForObject:(id)arg1;	// IMP=0x0000000000026582
- (id)_init;	// IMP=0x000000000002652c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
