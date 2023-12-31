//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, ReplayerViewController, UIWindow;
@protocol GTMTLReplayService;

@interface ReplayerAppDelegate : UIResponder
{
    struct GTMTLReplayClient _context;	// 8 = 0x8
    ReplayerViewController *_replayerViewController;	// 288 = 0x120
    UIWindow *_window;	// 296 = 0x128
    id <GTMTLReplayService> _replayFacility;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x002000000003ec8d
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000003ec78
- (void)_applicationDidFinishLaunching;	// IMP=0x001000000003df94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

