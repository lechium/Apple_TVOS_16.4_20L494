//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIScene, UIWindow;
@protocol SRApplicationDataSource;

@interface SRAppDelegate : UIResponder
{
    UIWindow *_appWindow;	// 8 = 0x8
    UIScene *_currentScene;	// 16 = 0x10
    id <SRApplicationDataSource> _dataSource;	// 24 = 0x18
}

+ (id)sharedDelegate;	// IMP=0x002000000007ce91
+ (id)sharedApplication;	// IMP=0x001000000007ce78
- (void).cxx_destruct;	// IMP=0x002000000007d9d6
@property(nonatomic) __weak id <SRApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIScene *currentScene; // @synthesize currentScene=_currentScene;
@property(retain, nonatomic) UIWindow *appWindow; // @synthesize appWindow=_appWindow;
- (void)willEnterForegroundHandler;	// IMP=0x001000000007d8ea
- (void)willResignActiveHandler;	// IMP=0x001000000007d880
- (void)didBecomeActiveHandler;	// IMP=0x001000000007d816
- (void)tearDownViews;	// IMP=0x001000000007d7ac
- (void)setUpViews;	// IMP=0x001000000007d742
- (void)invalidateKeyboardWindowIfNeeded;	// IMP=0x001000000007d46a
- (void)_updateDeferral;	// IMP=0x001000000007d1c6
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000007d178
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x001000000007d172
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x001000000007d16c
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x001000000007d166
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x001000000007d160
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x001000000007d15a
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000007cf4b
- (void)_windowWillDestroyContext:(id)arg1;	// IMP=0x001000000007cefc
- (void)_windowDidCreateContext:(id)arg1;	// IMP=0x001000000007cead

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
