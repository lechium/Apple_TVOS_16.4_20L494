//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface AppDelegate : UIResponder
{
}

- (void)destroyScene:(id)arg1;	// IMP=0x0020000000002ee0
- (void)requestSceneForSceneClientIdentifier:(id)arg1 scenePreferredLevel:(double)arg2;	// IMP=0x0010000000002980
- (void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;	// IMP=0x0010000000002910
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000002590
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000000024a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

