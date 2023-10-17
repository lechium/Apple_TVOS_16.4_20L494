//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallProviderManager, CSDClientManager, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface CSDCallProviderManagerXPCServer : NSObject
{
    CSDClientManager *_clientManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    MISSING_TYPE *_providerManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006932c
@property(readonly, nonatomic) CSDCallProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x001000000006914e
- (void)unregisterClient:(id)arg1;	// IMP=0x001000000006904c
- (void)registerClient:(id)arg1;	// IMP=0x0010000000068f4a
- (oneway void)launchAppForDialRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068e18
- (oneway void)donateUserIntentForProviderWithIdentifier:(id)arg1;	// IMP=0x0010000000068d07
- (oneway void)providersByIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0010000000068bd7
- (id)pairedHostDeviceProvidersByIdentifierForClient:(id)arg1;	// IMP=0x0010000000068b1d
- (id)localProvidersByIdentifierForClient:(id)arg1;	// IMP=0x0010000000068a63
- (id)providersByIdentifierForClient:(id)arg1;	// IMP=0x00100000000689a9
- (void)invalidate;	// IMP=0x00100000000688f7
- (id)initWithProviderManager:(id)arg1;	// IMP=0x0010000000068372

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
