//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection, RPStatusDaemon, RPStatusProvider, RPStatusSubscriber;
@protocol OS_dispatch_queue;

@interface RPStatusUpdatableXPCConnection : NSObject
{
    _Bool _entitled;	// 8 = 0x8
    RPStatusDaemon *_daemon;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    RPStatusProvider *_provider;	// 32 = 0x20
    RPStatusSubscriber *_subscriber;	// 40 = 0x28
    NSXPCConnection *_xpcCnx;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000006bd44
@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) RPStatusSubscriber *subscriber; // @synthesize subscriber=_subscriber;
@property(retain, nonatomic) RPStatusProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) RPStatusDaemon *daemon; // @synthesize daemon=_daemon;
- (void)xpcStatusSubscriberActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006bae0
- (void)xpcStatusProviderActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b8ea
- (void)xpcStatusUpdatableUnsubscribeToStatus:(id)arg1;	// IMP=0x001000000006b873
- (void)xpcStatusUpdatableSubscribeToStatus:(id)arg1;	// IMP=0x001000000006b7fc
- (void)xpcStatusUpdatableCancelProvideStatus:(id)arg1;	// IMP=0x001000000006b785
- (void)xpcStatusUpdatableProvideStatus:(id)arg1 statusInfo:(id)arg2;	// IMP=0x001000000006b6e8
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x001000000006b5c3
- (void)connectionInvalidated;	// IMP=0x001000000006b4ed
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x001000000006b445

@end

