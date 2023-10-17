//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSXPCConnection;
@protocol TUFeatureFlags;

@interface CSDXPCClient
{
    _Bool _supportsClientAssertions;	// 8 = 0x8
    int _processIdentifier;	// 12 = 0xc
    NSString *_processName;	// 16 = 0x10
    NSString *_processBundleIdentifier;	// 24 = 0x18
    NSSet *_entitledCapabilities;	// 32 = 0x20
    id <TUFeatureFlags> _featureFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000a619f
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, copy, nonatomic) NSSet *entitledCapabilities; // @synthesize entitledCapabilities=_entitledCapabilities;
@property(nonatomic) _Bool supportsClientAssertions; // @synthesize supportsClientAssertions=_supportsClientAssertions;
- (id)processBundleIdentifier;	// IMP=0x00100000000a614c
- (id)processName;	// IMP=0x00100000000a613b
- (int)processIdentifier;	// IMP=0x00100000000a612b
- (void)invalidate;	// IMP=0x00100000000a60ee
- (id)valueForEntitlement:(id)arg1;	// IMP=0x00100000000a606b
- (_Bool)isEntitledForCapability:(id)arg1;	// IMP=0x00100000000a5ff4
- (void)performBlockAfterCoalescing:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a5ea7
- (id)acquireAssertionIfNecessary;	// IMP=0x00100000000a5e9f
- (id)objectForBlock;	// IMP=0x00100000000a5e4f
- (_Bool)isRemote;	// IMP=0x00100000000a5e47
- (void)dealloc;	// IMP=0x00100000000a5e09
@property(readonly, nonatomic) NSXPCConnection *connection;
- (id)propertiesDescription;	// IMP=0x00100000000a5d48
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000a59fc

@end

