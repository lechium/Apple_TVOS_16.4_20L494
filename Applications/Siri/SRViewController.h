//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SRSiriViewController;

@interface SRViewController : UIViewController
{
    SRSiriViewController *_siriVC;	// 8 = 0x8
    int _expectedTeardownCounter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000078b05
- (void)willEnterForegroundHandler;	// IMP=0x0010000000078ae8
- (void)willResignActiveHandler;	// IMP=0x0010000000078acb
- (void)didBecomeActiveHandler;	// IMP=0x0010000000078aae
- (void)tearDownViews;	// IMP=0x00100000000787f9
- (void)_cleanupAllViews;	// IMP=0x0010000000078424
- (void)setUpViews;	// IMP=0x0010000000078090
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000078086
- (id)preferredFocusEnvironments;	// IMP=0x0010000000077fe0
- (void)viewDidLoad;	// IMP=0x0010000000077f49

@end

