//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, DMDConfigurationEngine, DMDDeviceStateObserver, DMFOSStateHandler, NSDictionary, NSString;

@interface DMDTaskServerDelegate : NSObject
{
    CATOperationQueue *_concurrentOperationQueue;	// 8 = 0x8
    NSDictionary *_serialOperationQueuesByGroup;	// 16 = 0x10
    DMDDeviceStateObserver *_deviceStateObserver;	// 24 = 0x18
    DMDConfigurationEngine *_configurationEngine;	// 32 = 0x20
    DMFOSStateHandler *_stateHandler;	// 40 = 0x28
}

+ (id)_specialCasedRequestNamesToOperationNames;	// IMP=0x002000000006fa36
- (void).cxx_destruct;	// IMP=0x002000000006fb25
@property(readonly, nonatomic) DMFOSStateHandler *stateHandler; // @synthesize stateHandler=_stateHandler;
@property(readonly, nonatomic) DMDConfigurationEngine *configurationEngine; // @synthesize configurationEngine=_configurationEngine;
@property(readonly, nonatomic) DMDDeviceStateObserver *deviceStateObserver; // @synthesize deviceStateObserver=_deviceStateObserver;
@property(readonly, nonatomic) NSDictionary *serialOperationQueuesByGroup; // @synthesize serialOperationQueuesByGroup=_serialOperationQueuesByGroup;
@property(readonly, nonatomic) CATOperationQueue *concurrentOperationQueue; // @synthesize concurrentOperationQueue=_concurrentOperationQueue;
- (id)_nameForOperationGroup:(unsigned long long)arg1;	// IMP=0x001000000006fad7
- (void)_currentLocaleDidChange:(id)arg1;	// IMP=0x001000000006fa86
- (void)configurationEngineWillSuspend:(id)arg1;	// IMP=0x001000000006f9ea
- (void)configurationEngineDidResume:(id)arg1;	// IMP=0x001000000006f99e
- (void)server:(id)arg1 clientSession:(id)arg2 enqueueOperation:(id)arg3;	// IMP=0x001000000006f705
- (void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4;	// IMP=0x001000000006f668
- (void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;	// IMP=0x001000000006f597
- (void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2;	// IMP=0x001000000006f51e
- (void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;	// IMP=0x001000000006f4a5
- (void)server:(id)arg1 clientSessionDidConnect:(id)arg2;	// IMP=0x001000000006f42c
- (id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006f0ce
- (void)prepareToRunOperation:(id)arg1 withContext:(id)arg2 withDatabase:(id)arg3;	// IMP=0x001000000006efb7
- (Class)operationClassForRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006ec76
- (id)operationForRequest:(id)arg1 targetUID:(unsigned int)arg2 appleID:(id)arg3 transport:(id)arg4 error:(id *)arg5;	// IMP=0x001000000006e7db
@property(readonly, copy) NSString *description;
- (void)run;	// IMP=0x001000000006e457
- (id)initWithPolicyPersistence:(id)arg1 activationManager:(id)arg2;	// IMP=0x001000000006dfaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
