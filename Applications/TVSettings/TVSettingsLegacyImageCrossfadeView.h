//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIImageView, _TVSettingsImageLoaderQueue;

@interface TVSettingsLegacyImageCrossfadeView : UIView
{
    NSArray *_imageProxies;	// 8 = 0x8
    double _crossfadePeriod;	// 16 = 0x10
    double _crossfadeDuration;	// 24 = 0x18
    double _rotationAngleDegrees;	// 32 = 0x20
    _TVSettingsImageLoaderQueue *_loaderQueue;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    NSTimer *_crossfadeTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000012c6d
@property(retain, nonatomic) NSTimer *crossfadeTimer; // @synthesize crossfadeTimer=_crossfadeTimer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) _TVSettingsImageLoaderQueue *loaderQueue; // @synthesize loaderQueue=_loaderQueue;
@property(nonatomic) double rotationAngleDegrees; // @synthesize rotationAngleDegrees=_rotationAngleDegrees;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double crossfadePeriod; // @synthesize crossfadePeriod=_crossfadePeriod;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void)_crossfadeToImage:(id)arg1;	// IMP=0x001000000001299c
- (void)_loadNextImage:(id)arg1;	// IMP=0x00100000000128f5
- (void)_startTimer;	// IMP=0x001000000001284c
- (struct CGSize)_maximumImageSize;	// IMP=0x00100000000127ed
- (void)layoutSubviews;	// IMP=0x0010000000011ed8
- (void)didMoveToSuperview;	// IMP=0x0010000000011e75
- (void)dealloc;	// IMP=0x0010000000011e2c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000011d43

@end

