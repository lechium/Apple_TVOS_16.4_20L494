//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVPImageRepresentation : NSObject
{
    _Bool _fixedFrame;	// 8 = 0x8
    struct CGRect _sourceRect;	// 16 = 0x10
    struct CGRect _destinationRect;	// 48 = 0x30
}

+ (id)_loadingQueue;	// IMP=0x006000000009a3c0
+ (id)imageRepresentationWithNamedLayerImage:(id)arg1;	// IMP=0x006000000009a055
+ (id)imageRepresentationWithImageProxy:(id)arg1;	// IMP=0x006000000009a008
+ (id)imageRepresentationWithImage:(id)arg1;	// IMP=0x0060000000099fbb
+ (id)imageRepresentationWithURL:(id)arg1;	// IMP=0x0060000000099f04
+ (id)imageRepresentationWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x0060000000099e6f
@property(nonatomic, getter=isFixedFrame) _Bool fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (id)_originalImageCacheKey;	// IMP=0x000000000009a3b8
- (struct CGImage *)_originalImage;	// IMP=0x000000000009a3b0
- (struct CGImage *)_imageForOriginalImage:(struct CGImage *)arg1;	// IMP=0x000000000009a2e8
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a1f6
- (struct CGImage *)newImage;	// IMP=0x000000000009a1ad
@property(readonly, nonatomic) NSString *cacheKey;

@end

