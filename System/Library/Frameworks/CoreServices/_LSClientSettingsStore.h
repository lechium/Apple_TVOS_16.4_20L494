//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSSettingsStore.h"

@class LSSettingsStoreConfiguration, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSClientSettingsStore : LSSettingsStore
{
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    LSSettingsStoreConfiguration *_configuration;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000dd122
- (void).cxx_destruct;	// IMP=0x00000000000de265
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) LSSettingsStoreConfiguration *configuration; // @synthesize configuration=_configuration;
- (_Bool)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ddc6f
- (unsigned char)userElectionForExtensionKey:(id)arg1;	// IMP=0x00000000000dd7e1
- (id)__internalQueue_xpcConnectionWithError:(id *)arg1;	// IMP=0x00000000000dd231
- (void)dealloc;	// IMP=0x00000000000dd1b3
- (id)init;	// IMP=0x00000000000dd12a

@end

