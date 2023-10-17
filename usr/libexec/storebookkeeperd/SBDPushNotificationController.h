//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SBDPushNotificationController : NSObject
{
    NSString *_environment;	// 8 = 0x8
    NSMutableDictionary *_temporaryConnectionsByEnvironment;	// 16 = 0x10
    NSURL *_typeRegistrationURL;	// 24 = 0x18
    NSSet *_enabledDomains;	// 32 = 0x20
    _Bool _pushEnabled;	// 40 = 0x28
    _Bool _bagLoaded;	// 41 = 0x29
    _Bool _registrationUpdateScheduled;	// 42 = 0x2a
    id _fakeNotificationObserver;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    APSConnection *_connection;	// 64 = 0x40
    NSMutableDictionary *_weakDomainDelegates;	// 72 = 0x48
    NSMutableDictionary *_pendingAccountRequests;	// 80 = 0x50
    NSMutableDictionary *_registeredAccountsForDomains;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000010626
@property(readonly, nonatomic) NSMutableDictionary *registeredAccountsForDomains; // @synthesize registeredAccountsForDomains=_registeredAccountsForDomains;
@property(readonly, nonatomic) NSMutableDictionary *pendingAccountRequests; // @synthesize pendingAccountRequests=_pendingAccountRequests;
@property(readonly, nonatomic) NSMutableDictionary *weakDomainDelegates; // @synthesize weakDomainDelegates=_weakDomainDelegates;
@property(readonly, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_onQueue_updateStoreBookkeeperNotificationRegistration:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fbdc
- (void)updateStoreBookkeeperNotificationRegistration:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fb4f
- (void)_onQueue_updateStoreBookkeeperNotificationRegistrationForDomain:(id)arg1 optIn:(_Bool)arg2 accountID:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f180
- (id)_registeredAccountIDs;	// IMP=0x001000000000f002
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x001000000000ef63
- (void)_loadURLBagWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000edc4
- (void)_startServiceConnectionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ec84
- (void)updateNotificationRegistrationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ec72
@property(retain, nonatomic) NSSet *enabledDomains;
- (_Bool)isEnabledForDomain:(id)arg1;	// IMP=0x001000000000ea5e
- (void)setDelegate:(id)arg1 forBookkeeperDomain:(id)arg2;	// IMP=0x001000000000e9a6
- (void)_onQueue_updateConnectionTopicsAndStoreRegistrations;	// IMP=0x001000000000e82c
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x001000000000e76d
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x001000000000e698
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x001000000000e594
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;	// IMP=0x001000000000e4af
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000000e3ca
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x001000000000e235
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000000e150
- (void)dealloc;	// IMP=0x001000000000e079
- (id)init;	// IMP=0x001000000000dd33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

