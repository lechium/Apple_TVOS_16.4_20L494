//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSData, NSString, NSXPCConnection, Optional, XPCServiceCatalog, XPCServiceEntitlements;

@interface XPCServiceClient : NSObject
{
    NSData *_auditTokenData;	// 8 = 0x8
    XPCServiceCatalog *_catalog;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    Optional *_enableDiagnostics;	// 32 = 0x20
    XPCServiceEntitlements *_entitlements;	// 40 = 0x28
    _Bool hasSeenAppStore;	// 48 = 0x30
    AMSProcessInfo *_processInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000e1c04
- (_Bool)isDialogObserverAvailable;	// IMP=0x00100000000e1a54
- (void)deliverViewPresentationRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e1954
- (_Bool)hasConnection;	// IMP=0x00100000000e192d
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e186b
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e17a9
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e16a9
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e15a9
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e14a9
- (void)getUpdatesServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1401
- (void)getRestoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1359
- (void)getRepairServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e12b1
- (void)getPurchaseServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1209
- (void)getPurchaseHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1161
- (void)getMetricsServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e10b9
- (void)getOcelotServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1011
- (void)getManagedAppServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0f69
- (void)getCrossfireServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0ec1
- (void)getLibraryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0e19
- (void)getInstallationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0d71
- (void)getIAPHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0cc9
- (void)getFairPlayServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0c21
- (void)getDiagnosticServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0b79
- (void)getArcadeServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0ad1
- (void)getAppStoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e07dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

