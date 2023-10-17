//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, RMActivationEngine, RMSharedLock, RMStatusEngine;
@protocol RMClientDelegate, RMConduit;

@interface RMClient : NSObject
{
    NSObject *_needsSyncingLock;	// 8 = 0x8
    RMSharedLock *_syncLock;	// 16 = 0x10
    _Bool _needsSyncing;	// 24 = 0x18
    id <RMClientDelegate> _delegate;	// 32 = 0x20
    NSString *_managementSourceIdentifier;	// 40 = 0x28
    id <RMConduit> _conduit;	// 48 = 0x30
    RMActivationEngine *_activationEngine;	// 56 = 0x38
    RMStatusEngine *_statusEngine;	// 64 = 0x40
    NSOperationQueue *_operationQueue;	// 72 = 0x48
}

+ (id)_makeConduitWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x002000000000d2e0
- (void).cxx_destruct;	// IMP=0x0020000000010927
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) RMStatusEngine *statusEngine; // @synthesize statusEngine=_statusEngine;
@property(retain, nonatomic) RMActivationEngine *activationEngine; // @synthesize activationEngine=_activationEngine;
@property(retain, nonatomic) id <RMConduit> conduit; // @synthesize conduit=_conduit;
@property(readonly, nonatomic) NSString *managementSourceIdentifier; // @synthesize managementSourceIdentifier=_managementSourceIdentifier;
@property(nonatomic) __weak id <RMClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_syncIfNeeded;	// IMP=0x00100000000107cc
- (void)_setNeedsSyncing:(_Bool)arg1;	// IMP=0x0010000000010580
- (void)statusEngineHasUnacknowledgedSubscription:(id)arg1;	// IMP=0x0010000000010519
- (void)conduitNeedsToSendStatusForKeyPaths:(id)arg1;	// IMP=0x0010000000010456
- (void)conduitNeedsToSync:(id)arg1;	// IMP=0x00100000000103ef
- (void)_processConduitErrorState:(short)arg1;	// IMP=0x0010000000010311
- (void)_handleConduitError;	// IMP=0x001000000001026e
- (_Bool)_haltSyncing;	// IMP=0x0010000000010223
- (void)_sendStatusQueryResultIfNeeded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ffc2
- (void)sendStatusForSubscriptionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fc9b
- (id)queryForStatusSubscriptionsWithIdentifiers:(id)arg1;	// IMP=0x001000000000f8cb
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f541
- (void)updateWithTokensResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f2d5
- (void)updateWithPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f069
- (void)applyNowWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000eff7
- (void)_syncConduitOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ed57
- (void)_syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e2d9
- (void)syncIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e23f
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e1a8
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000df97
- (void)reenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dc02
- (void)enrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d894
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d53f
- (id)initWithConduit:(id)arg1 activationEngine:(id)arg2 statusEngine:(id)arg3 managementSourceIdentifier:(id)arg4;	// IMP=0x001000000000d111
- (id)initWithManagementSourceObjectID:(id)arg1 managementSourceIdentifier:(id)arg2 statusQuerier:(id)arg3 persistentContainer:(id)arg4;	// IMP=0x001000000000ced1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

