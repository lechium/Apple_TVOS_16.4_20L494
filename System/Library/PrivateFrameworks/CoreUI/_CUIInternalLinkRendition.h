//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class CUIRenditionKey, CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore;

__attribute__((visibility("hidden")))
@interface _CUIInternalLinkRendition : CUIThemeRendition
{
    unsigned int _nimages;	// 216 = 0xd8
    struct CGRect _imageRect[16];	// 224 = 0xe0
    struct CGImage *_image[16];	// 736 = 0x2e0
    struct CGImage *_unslicedImage;	// 864 = 0x360
    CUIRenditionMetrics *_renditionMetrics;	// 872 = 0x368
    CUIRenditionSliceInformation *_sliceInformation;	// 880 = 0x370
    struct CGRect _frame;	// 888 = 0x378
    CUIStructuredThemeStore *_sourceProvider;	// 920 = 0x398
    CUIRenditionKey *_referenceKey;	// 928 = 0x3a0
    struct CGSize _originalUncroppedSize;	// 936 = 0x3a8
    struct CGRect _alphaCroppedFrame;	// 952 = 0x3b8
}

- (void).cxx_destruct;	// IMP=0x000000000007120d
- (struct CGRect)alphaCroppedRect;	// IMP=0x00000000000711ed
- (struct CGSize)originalUncroppedSize;	// IMP=0x00000000000711d5
- (_Bool)edgesOnly;	// IMP=0x000000000007118b
- (_Bool)isTiled;	// IMP=0x00000000000710d0
- (id)maskForSliceIndex:(long long)arg1;	// IMP=0x0000000000070f9a
- (id)imageForSliceIndex:(long long)arg1;	// IMP=0x0000000000070f65
- (id)properties;	// IMP=0x0000000000070e06
- (id)data;	// IMP=0x0000000000070ddb
- (struct CGImage *)unslicedImage;	// IMP=0x0000000000070b75
- (id)_sourceRendition;	// IMP=0x0000000000070b25
- (_Bool)isScaled;	// IMP=0x0000000000070ab4
- (id)metrics;	// IMP=0x0000000000070a96
- (id)sliceInformation;	// IMP=0x0000000000070a85
- (struct CGSize)unslicedSize;	// IMP=0x0000000000070a0e
- (struct CGRect)_destinationFrame;	// IMP=0x00000000000709ee
- (id)linkingToRendition;	// IMP=0x00000000000709dd
- (_Bool)isInternalLink;	// IMP=0x00000000000709d5
- (int)pixelFormat;	// IMP=0x00000000000709aa
- (_Bool)isOpaque;	// IMP=0x000000000007097f
- (int)bitmapEncoding;	// IMP=0x0000000000070954
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000006fe1e
- (void)_setStructuredThemeStore:(id)arg1;	// IMP=0x000000000006fe0a
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000006fdf8
- (void)dealloc;	// IMP=0x000000000006fd4e

@end

