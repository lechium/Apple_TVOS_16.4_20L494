//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol LAServiceManager;

@interface Daemon : NSObject
{
    id <LAServiceManager> _serviceManager;	// 8 = 0x8
    NSHashTable *_notifications;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0020000000007fa3
- (void).cxx_destruct;	// IMP=0x002000000000a2b7
@property(readonly, nonatomic) NSHashTable *notifications; // @synthesize notifications=_notifications;
- (void)_clearNotification:(id)arg1 fromPendingNotifications:(id)arg2 finally:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a1d1
- (void)postNotificationOfClassNamed:(id)arg1 newValue:(id)arg2 oldValue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009837
- (void)addNotificationObserver:(id)arg1 className:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009665
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000094dc
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000093a4
- (void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000938e
- (id)_proxyWithContext:(id)arg1 callback:(id)arg2 clientId:(unsigned long long)arg3 request:(id)arg4;	// IMP=0x00100000000090a3
- (void)connectToContextWithUUID:(id)arg1 callback:(id)arg2 clientId:(unsigned long long)arg3 token:(id)arg4 senderAuditTokenData:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000008cee
- (void)connectToExistingContext:(id)arg1 userId:(unsigned int)arg2 connection:(id)arg3 checkEntitlementBlock:(CDUnknownBlockType)arg4 callback:(id)arg5 clientId:(unsigned long long)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000008a43
- (void)connectToExistingContext:(id)arg1 callback:(id)arg2 clientId:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008890
- (void)_connectToExistingContext:(id)arg1 callback:(id)arg2 clientId:(unsigned long long)arg3 processId:(int)arg4 userId:(unsigned int)arg5 auditSessionId:(int)arg6 auditToken:(CDStruct_4c969caf)arg7 cApiOrigin:(_Bool)arg8 checkEntitlementBlock:(CDUnknownBlockType)arg9 invalidationBlock:(CDUnknownBlockType)arg10 connectionHash:(unsigned long long)arg11 reply:(CDUnknownBlockType)arg12;	// IMP=0x00100000000080a6
- (id)init;	// IMP=0x0010000000007ff8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
