//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, TVArchivedLayeredImageProxy;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TVPImageStack : NSObject
{
    int _blendMode;	// 8 = 0x8
    double _flatImageCornerRadius;	// 16 = 0x10
    NSArray *_imageRepresentations;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_layeredImageLoadingQueue;	// 32 = 0x20
    TVArchivedLayeredImageProxy *_layeredImageProxy;	// 40 = 0x28
    NSArray *_imageProxies;	// 48 = 0x30
    NSMutableSet *_loadingOperations;	// 56 = 0x38
    struct CGSize _naturalSize;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    _Bool _topLayerIsFixedFrame;	// 88 = 0x58
    _Bool _legacy;	// 89 = 0x59
    id _placeholderImage;	// 96 = 0x60
    id _flatImage;	// 104 = 0x68
}

+ (struct CGSize)_naturalSizeForImageStackSpecification:(id)arg1;	// IMP=0x0010000000025fc6
+ (id)_loadingOperationQueue;	// IMP=0x0010000000025eed
+ (id)_imageRepresentationsForImageStackSpecification:(id)arg1 fromURL:(id)arg2;	// IMP=0x00100000000251cd
+ (id)_imageRepresentationsForUIImage:(id)arg1 outFlatImage:(out id *)arg2 outFlatImageCornerRadius:(out double *)arg3;	// IMP=0x0010000000024e63
- (void).cxx_destruct;	// IMP=0x00000000000275e0
@property(nonatomic) _Bool legacy; // @synthesize legacy=_legacy;
@property(retain, nonatomic) id flatImage; // @synthesize flatImage=_flatImage;
@property(retain, nonatomic) id placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void)_loadImagesAtSize:(struct CGSize)arg1 scaledSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026400
- (void)_loadLayeredImageProxy;	// IMP=0x0000000000026155
- (void)loadImagesAtSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024e48
- (void)setTopLayerIsFixedFrame:(_Bool)arg1;	// IMP=0x0000000000024e3f
- (_Bool)topLayerIsFixedFrame;	// IMP=0x0000000000024e36
- (void)setBlendMode:(int)arg1;	// IMP=0x0000000000024e2d
- (int)blendMode;	// IMP=0x0000000000024e24
- (void)setFlatImageCornerRadius:(double)arg1;	// IMP=0x0000000000024e19
- (struct CGSize)naturalSize;	// IMP=0x0000000000024e09
- (double)flatImageCornerRadius;	// IMP=0x0000000000024dfe
- (id)imageProxies;	// IMP=0x0000000000024df0
- (id)layeredImageProxy;	// IMP=0x0000000000024de2
- (void)cancel;	// IMP=0x0000000000024d55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024cd1
- (id)initWithArchivedLayeredImageProxy:(id)arg1;	// IMP=0x0000000000024c55
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000024a9d
- (id)initWithImageProxies:(id)arg1;	// IMP=0x0000000000024878
- (id)initWithImages:(id)arg1;	// IMP=0x00000000000244ff
- (id)initWithImageURLs:(id)arg1;	// IMP=0x000000000002425c
- (id)init;	// IMP=0x00000000000241c8

@end

