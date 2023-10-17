//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

__attribute__((visibility("hidden")))
@interface TVPProgressBarShapeView : UIView
{
    unsigned long long _roundedCorners;	// 8 = 0x8
    UIColor *_fillColor;	// 16 = 0x10
    CAShapeLayer *_borderLayer;	// 24 = 0x18
    CAShapeLayer *_fillLayer;	// 32 = 0x20
    CAShapeLayer *_fillMask;	// 40 = 0x28
    CDStruct_88b945db _fillRange;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009f9e8
@property(readonly, nonatomic) CAShapeLayer *fillMask; // @synthesize fillMask=_fillMask;
@property(readonly, nonatomic) CAShapeLayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) CDStruct_88b945db fillRange; // @synthesize fillRange=_fillRange;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void)_updateMask;	// IMP=0x000000000009f7f9
- (void)_updateShapes;	// IMP=0x000000000009f60b
@property(nonatomic) double borderWidth;
- (void)layoutSubviews;	// IMP=0x000000000009f3fc
- (void)_commonInit;	// IMP=0x000000000009f226
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009f1da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009f17d

@end
