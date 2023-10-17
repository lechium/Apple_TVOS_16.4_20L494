//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, SharingBTLESuggestedItem, UAActivityReplay, UACornerActionManager, UANetworkReplayRendevousHandler, UAPingController;

@interface ActivityManagerDebuggingManager : NSObject
{
    _Bool _supportNetworkPeers;	// 8 = 0x8
    _Bool _disableAdminEntitlmentChecking;	// 9 = 0x9
    UACornerActionManager *manager;	// 16 = 0x10
    SharingBTLESuggestedItem *fakeBTLEInjectedItem;	// 24 = 0x18
    NSXPCListener *listener;	// 32 = 0x20
    UAActivityReplay *_replayManager;	// 40 = 0x28
    UAPingController *_pingController;	// 48 = 0x30
    UANetworkReplayRendevousHandler *_networkConnectionHandler;	// 56 = 0x38
    unsigned long long _recentActionsStateHandler;	// 64 = 0x40
    struct timeval _ignoredRTimeVal;	// 72 = 0x48
}

+ (id)actionStrs:(long long)arg1 maximumInternal:(double)arg2 clear:(_Bool)arg3;	// IMP=0x0020000000093dd8
+ (void)appendRecentAction:(id)arg1;	// IMP=0x0010000000093c90
+ (void)log:(int)arg1 format:(id)arg2;	// IMP=0x001000000009383d
+ (void)log:(int)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000093789
- (void).cxx_destruct;	// IMP=0x002000000009a516
@property unsigned long long recentActionsStateHandler; // @synthesize recentActionsStateHandler=_recentActionsStateHandler;
@property(readonly) struct timeval ignoredRTimeVal; // @synthesize ignoredRTimeVal=_ignoredRTimeVal;
@property(retain) UANetworkReplayRendevousHandler *networkConnectionHandler; // @synthesize networkConnectionHandler=_networkConnectionHandler;
@property(retain) UAPingController *pingController; // @synthesize pingController=_pingController;
@property(retain) UAActivityReplay *replayManager; // @synthesize replayManager=_replayManager;
@property _Bool disableAdminEntitlmentChecking; // @synthesize disableAdminEntitlmentChecking=_disableAdminEntitlmentChecking;
@property(retain) NSXPCListener *listener; // @synthesize listener;
@property(retain) SharingBTLESuggestedItem *fakeBTLEInjectedItem; // @synthesize fakeBTLEInjectedItem;
@property(retain) UACornerActionManager *manager; // @synthesize manager;
- (void)doGetPairedDevices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a09e
- (void)doGetSFActivityAdvertisement:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000099d47
- (void)doGetLoggingFileForClient:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000099cb0
- (void)doSetLocalPasteboardReflection:(_Bool)arg1;	// IMP=0x0010000000099c1c
- (void)doSetRemotePasteboardAvailable:(_Bool)arg1;	// IMP=0x0010000000099b86
- (void)doSetDefaults:(id)arg1 archivedValue:(id)arg2;	// IMP=0x0010000000099976
- (void)doCopyDefaults:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000998c0
- (void)doReplayCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000996d6
- (void)doGetSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000992b1
- (void)stopAdvertisingPing;	// IMP=0x00100000000991ec
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;	// IMP=0x00100000000990ed
- (void)doSetupRendevous:(id)arg1 domain:(id)arg2 activate:(_Bool)arg3;	// IMP=0x0010000000099045
- (void)doSetupNetworkedPairs:(id)arg1 port:(long long)arg2;	// IMP=0x0010000000098f17
- (void)doDidSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098a75
- (void)doWillSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098622
- (void)doTerminateServer;	// IMP=0x00100000000985f3
- (void)doInjectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 webPageURL:(id)arg6 remoteModel:(id)arg7 duration:(double)arg8 payloadDelay:(double)arg9;	// IMP=0x00100000000979a9
- (void)doGetCurrentAdvertisedItemUUID:(CDUnknownBlockType)arg1;	// IMP=0x00100000000978ae
- (void)doCopySimulatorStatusString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000097803
- (void)doCopyRecentActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000976da
- (void)doFetchMoreAppSuggestions;	// IMP=0x00100000000976c4
- (void)doCopyStatusString:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000096f8f
- (void)doCopyDynamicUserActivitiesString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000096efb
- (void)doCopyDebuggingInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000096e77
- (void)doCopyEnabledUUIDsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096de8
- (void)doCopyAdvertisedUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096cc2
- (void)doCopyAllUUIDsOfType:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000096a98
- (void)doFindMatchingUserActivityForString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000095a60
- (void)doSetDebugOption:(id)arg1 value:(id)arg2;	// IMP=0x0010000000094d21
- (void)doNOP:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000094c1e
- (void)receivePing:(id)arg1;	// IMP=0x0010000000094b5d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000947a1
- (double)currentPerfTime;	// IMP=0x0010000000094757
- (id)perfSummaryString;	// IMP=0x00100000000946c4
@property _Bool supportNetworkPeers; // @synthesize supportNetworkPeers=_supportNetworkPeers;
- (void)setDebugging:(_Bool)arg1;	// IMP=0x0010000000093c22
- (void)resume;	// IMP=0x0010000000093bb5
- (void)suspend;	// IMP=0x0010000000093b48
- (id)initWithManager:(id)arg1;	// IMP=0x00100000000938d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
