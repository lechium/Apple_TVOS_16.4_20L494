//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPushHandler, APSConnection, ICDCloudPushNotificationRegistrationState, NSData, NSOperationQueue, NSString;
@protocol ICDAccountManaging, OS_dispatch_queue;

@interface CloudPushNotificationController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSData *_currentAPNSToken;	// 24 = 0x18
    ICDCloudPushNotificationRegistrationState *_currentRegistrationState;	// 32 = 0x20
    AMSPushHandler *_amsPushHandler;	// 40 = 0x28
    _Bool _sagaEnabledOnDevice;	// 48 = 0x30
    id <ICDAccountManaging> _accountManager;	// 56 = 0x38
    NSString *_pushEnvironment;	// 64 = 0x40
    APSConnection *_connection;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000eec56
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *pushEnvironment; // @synthesize pushEnvironment=_pushEnvironment;
@property(nonatomic) _Bool sagaEnabledOnDevice; // @synthesize sagaEnabledOnDevice=_sagaEnabledOnDevice;
@property(nonatomic) __weak id <ICDAccountManaging> accountManager; // @synthesize accountManager=_accountManager;
- (id)_amsPushHandler;	// IMP=0x00100000000eeb2c
- (id)_supportedJaliscoMediaKindsWithSagaEnabled;	// IMP=0x00100000000eeafc
- (id)_supportedJaliscoMediaKinds;	// IMP=0x00100000000eeacc
- (_Bool)_isSupportedJaliscoMediaKind:(id)arg1;	// IMP=0x00100000000eea55
- (void)_handleInAppMessagesUpdatedPushMessage:(id)arg1;	// IMP=0x00100000000ee78a
- (void)_handleMusicSocialPushMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ee778
- (void)_handleITunesStorePushMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ee226
- (void)_handleJaliscoPushMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000edfcd
- (void)_handleSagaPushMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000edd74
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x00100000000edcd0
- (void)_registerMediaKinds:(id)arg1 usingRequestContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000eda8e
- (void)_registerAPNSToken:(id)arg1 usingRequestContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ed8c1
- (void)_updateRegistrationForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ed72b
- (void)_createAPNSConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ed616
- (void)_activeConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ed4d1
- (void)_updatePushNotificationsRegistration;	// IMP=0x00100000000ed486
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x00100000000ed3a1
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000000ed1f5
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000ed10e
- (void)dealloc;	// IMP=0x00100000000ed064
- (id)initWithAccountManager:(id)arg1;	// IMP=0x00100000000ecdf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

