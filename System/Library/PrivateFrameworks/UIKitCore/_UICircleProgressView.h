//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UICircleProgressView : UIView
{
}

+ (Class)layerClass;	// IMP=0x0060000000513279
- (double)progressPresentationValue;	// IMP=0x0000000000513b6f
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000513ae8
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005136eb
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005136d4
@property(nonatomic) double progress;
@property(nonatomic) _Bool showProgressTray;
@property(nonatomic) double progressLineWidth;
@property(readonly, nonatomic) UIColor *progressColor;
- (void)setProgressColor:(id)arg1;	// IMP=0x0000000000513444
@property(nonatomic) long long progressStartPoint;
- (void)layoutSubviews;	// IMP=0x0000000000513385
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000051328a

@end
