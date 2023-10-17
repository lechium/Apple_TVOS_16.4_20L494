//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class IDSService, NSMutableDictionary, NSMutableSet, NSString, RPCompanionLinkClient;

@interface CLLocationStreamingConnectionManager : CLIntersiloService
{
    _Bool _rapportLinkActive;	// 8 = 0x8
    _Bool _pairIsNearby;	// 9 = 0x9
    RPCompanionLinkClient *_rapportLink;	// 16 = 0x10
    NSMutableDictionary *_unacknowledgedMessages;	// 24 = 0x18
    NSMutableSet *_clients;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
}

+ (_Bool)isSupported;	// IMP=0x00200000001680b9
+ (id)getSilo;	// IMP=0x001000000016805d
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000168044
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000167fe7
@property(nonatomic) _Bool pairIsNearby; // @synthesize pairIsNearby=_pairIsNearby;
@property(retain) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSMutableDictionary *unacknowledgedMessages; // @synthesize unacknowledgedMessages=_unacknowledgedMessages;
@property(nonatomic) _Bool rapportLinkActive; // @synthesize rapportLinkActive=_rapportLinkActive;
@property(retain) RPCompanionLinkClient *rapportLink; // @synthesize rapportLink=_rapportLink;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x001000000016aeb6
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000016a99e
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000016a554
- (void)withClients:(CDUnknownBlockType)arg1;	// IMP=0x001000000016a437
- (void)sendMessage:(id)arg1;	// IMP=0x001000000016a40c
- (void)sendMessageRapport:(id)arg1;	// IMP=0x0010000000169b77
- (void)sendMessageIDS:(id)arg1;	// IMP=0x00100000001696f3
- (id)packageMessage:(id)arg1;	// IMP=0x0010000000169624
- (void)retireClient:(byref id)arg1;	// IMP=0x00100000001695d2
- (void)addClient:(byref id)arg1;	// IMP=0x0010000000169568
- (void)endService;	// IMP=0x00100000001694d9
- (void)beginService;	// IMP=0x00100000001693d9
- (void)setSilo:(id)arg1;	// IMP=0x0010000000169031
- (void)activateRapportLinkIfNecessary;	// IMP=0x0010000000168580
- (void)updateNearbyStatusWithDevices:(id)arg1;	// IMP=0x00100000001682e4
- (void)updateNearbyStatusWithCompanionLinkDevice:(id)arg1 didConnect:(_Bool)arg2;	// IMP=0x001000000016816e
- (id)init;	// IMP=0x0010000000168121

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

