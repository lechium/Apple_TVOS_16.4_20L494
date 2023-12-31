//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CXCallSource.h"

@class NSSet, NSString, NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CXXPCCallSource : CXCallSource
{
    _Bool _hasVoIPBackgroundMode;	// 8 = 0x8
    struct os_unfair_lock_s _accessorLock;	// 12 = 0xc
    NSXPCConnection *_connection;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSURL *_bundleURL;	// 32 = 0x20
    NSString *_localizedName;	// 40 = 0x28
    NSSet *_capabilities;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000121fc
@property(readonly, nonatomic) _Bool hasVoIPBackgroundMode; // @synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode;
@property(readonly, copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
- (id)localizedName;	// IMP=0x00000000000121ba
- (id)bundleURL;	// IMP=0x00000000000121a9
- (id)bundleIdentifier;	// IMP=0x0000000000012198
- (id)vendorProtocolDelegate;	// IMP=0x0000000000012148
- (_Bool)isPermittedToUseBluetoothAccessories;	// IMP=0x0000000000012074
- (_Bool)isPermittedToUsePrivateAPI;	// IMP=0x0000000000012029
- (_Bool)isPermittedToUsePublicAPI;	// IMP=0x0000000000011ff0
- (CDStruct_6ad76789)auditToken;	// IMP=0x0000000000011f92
- (int)processIdentifier;	// IMP=0x0000000000011f4e
- (_Bool)isConnected;	// IMP=0x0000000000011f1b
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x0000000000011e21
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000001157f
- (id)init;	// IMP=0x0000000000011571

@end

