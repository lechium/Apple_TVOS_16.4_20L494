//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface SceneDelegate : UIResponder
{
    UIWindow *_window;	// 8 = 0x8
    NSString *_sceneClientIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000004ea0
@property(retain, nonatomic) NSString *sceneClientIdentifier; // @synthesize sceneClientIdentifier=_sceneClientIdentifier;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000004da0
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000004d60
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x0010000000004d20
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x0010000000004ce0
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000048b0
- (_Bool)_isWindowSceneExternalDisplay:(id)arg1;	// IMP=0x0010000000004570
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000003d30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
