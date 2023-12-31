//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class _MKMarkerAnnotationBaseImageContent;

__attribute__((visibility("hidden")))
@interface _MKMarkerAnnotationBaseImageView : UIImageView
{
    double _tailLength;	// 8 = 0x8
    _MKMarkerAnnotationBaseImageContent *_baseImageContent;	// 16 = 0x10
}

+ (id)_gradientImageName:(long long)arg1;	// IMP=0x0060000000206cff
+ (const struct CGPath *)_pathForBaseImageType:(long long)arg1 radius:(double)arg2 tailLength:(double)arg3;	// IMP=0x00600000002061ac
- (void).cxx_destruct;	// IMP=0x0000000000206da1
@property(retain, nonatomic, getter=_baseImageContent, setter=_setBaseImageContent:) _MKMarkerAnnotationBaseImageContent *baseImageContent; // @synthesize baseImageContent=_baseImageContent;
- (_Bool)_isFillColorClear;	// IMP=0x0000000000206d1e
- (void)_renderGradientForRectaloon;	// IMP=0x0000000000206974
- (id)_renderBaseImage:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 scale:(double)arg3;	// IMP=0x00000000002067b7
- (void)_strokePath:(const struct CGPath *)arg1 inContext:(struct CGContext *)arg2 scale:(double)arg3;	// IMP=0x00000000002064c6
- (void)_fillPath:(const struct CGPath *)arg1 inContext:(struct CGContext *)arg2 inRect:(struct CGRect)arg3 scale:(double)arg4;	// IMP=0x00000000002063c6
- (void)_renderContentUsingGraphicsPath:(const struct CGPath *)arg1;	// IMP=0x0000000000205ffa
- (void)_renderBaseContent;	// IMP=0x0000000000205ee5
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000205ea7
- (id)initWithOvalInSize:(struct CGSize)arg1;	// IMP=0x0000000000205d86
- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2;	// IMP=0x0000000000205d26
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000205cc7

@end

