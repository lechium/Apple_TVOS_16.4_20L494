//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class IKImageElement, IKViewElement;

__attribute__((visibility("hidden")))
@interface _TVLoadingViewController : _TVBgImageLoadingViewController
{
    IKImageElement *_bgImageElement;	// 8 = 0x8
    IKImageElement *_heroImgElement;	// 16 = 0x10
    IKViewElement *_loadingTemplateElement;	// 24 = 0x18
    double _spinnerDelay;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f385e
- (void)setSpinnerDelay:(double)arg1;	// IMP=0x00000000000f3730
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000f35d4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000f33b8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000f3335
- (void)loadView;	// IMP=0x00000000000f3217
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x00000000000f3187
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x00000000000f3123
- (long long)_blurEffectStyle;	// IMP=0x00000000000f30e8
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x00000000000f30c1
- (id)_backgroundImageProxy;	// IMP=0x00000000000f2fa3
- (void)updateWithViewElement:(id)arg1;	// IMP=0x00000000000f28ea
- (void)updateWithLoadingTemplate:(id)arg1;	// IMP=0x00000000000f28d8
- (id)init;	// IMP=0x00000000000f288f

@end

