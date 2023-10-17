//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class APSConnection, NSString, UIWindow;

@interface HBAppDelegate : UIResponder
{
    APSConnection *_apsConnection;	// 8 = 0x8
}

+ (_Bool)isiCloudHomeScreenSyncEnabled;	// IMP=0x0020000000002e8f
+ (id)sharedApplicationDelegate;	// IMP=0x001000000000297a
- (void).cxx_destruct;	// IMP=0x0010000000003931
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0010000000003756
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0010000000003648
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x00100000000035fc
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x0010000000003559
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x00100000000034ce
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;	// IMP=0x0010000000003455
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000003069
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000002ff0
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000002f53
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000002eda
- (long long)overrideAssetLibraryCacheDeleteUrgency;	// IMP=0x0010000000002e84
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000002e0a
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000002ae7
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000000029d1
- (void)_navigateToDockIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000634b
- (void)_navigateToTopShelfFromDockIndex:(unsigned long long)arg1 appGridView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005e68
- (void)_performTestCommands:(id)arg1 withTestName:(id)arg2;	// IMP=0x0010000000005d18
- (_Bool)runTestName:(id)arg1 options:(id)arg2 context:(id)arg3;	// IMP=0x0010000000003de1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

