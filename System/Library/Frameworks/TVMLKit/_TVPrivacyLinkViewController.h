//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class IKViewElement, OBPrivacyLinkController;

__attribute__((visibility("hidden")))
@interface _TVPrivacyLinkViewController : UIViewController
{
    IKViewElement *_viewElement;	// 8 = 0x8
    OBPrivacyLinkController *_impl;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000124ee5
@property(retain, nonatomic) OBPrivacyLinkController *impl; // @synthesize impl=_impl;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void)loadView;	// IMP=0x0000000000124d55
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000124a5d

@end

