//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVImageDecorator.h>

@class _UIBackdropViewSettings;

__attribute__((visibility("hidden")))
@interface TVPMusicBackgroundBlurImageDecorator : TVImageDecorator
{
    _UIBackdropViewSettings *_backdropSettings;	// 8 = 0x8
    long long _privateBackdropStyle;	// 16 = 0x10
    double _saturationDeltaFactor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000988c1
@property(nonatomic) double saturationDeltaFactor; // @synthesize saturationDeltaFactor=_saturationDeltaFactor;
@property(nonatomic) long long privateBackdropStyle; // @synthesize privateBackdropStyle=_privateBackdropStyle;
- (struct CGSize)expectedSize;	// IMP=0x0000000000098876
- (_Bool)loaderCropToFit;	// IMP=0x000000000009886e
- (struct CGSize)loaderScaleToSize;	// IMP=0x0000000000098858
- (id)decoratorIdentifier;	// IMP=0x00000000000985e9
- (id)resizeImage:(struct CGImage *)arg1 targetSize:(struct CGSize)arg2 shouldDither:(_Bool)arg3;	// IMP=0x0000000000098445
- (id)blurImageWithImage:(id)arg1 targetSize:(struct CGSize)arg2 scaleSize:(struct CGSize)arg3;	// IMP=0x0000000000098150
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x0000000000097fac
- (void)_setupBackdropSettings;	// IMP=0x0000000000097ed5
@property(nonatomic) double grayscaleTintAlpha;
@property(nonatomic) double blurRadius;
- (id)init;	// IMP=0x0000000000097dbc

@end

