//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface _LSDService : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    struct unfair_lock_mutex _clientMapMutex;	// 16 = 0x10
    NSMapTable *_clientMap;	// 24 = 0x18
}

+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;	// IMP=0x00100000000ca33d
+ (id)XPCConnectionToService;	// IMP=0x00100000000c9533
+ (id)XPCInterface;	// IMP=0x00100000000ca9a6
+ (Class)clientClass;	// IMP=0x00100000000ca909
+ (unsigned short)connectionType;	// IMP=0x00100000000ca86c
+ (id)dispatchQueue;	// IMP=0x00100000000caa53
+ (_Bool)XPCConnectionIsAlwaysPrivileged;	// IMP=0x00100000000caa4b
+ (_Bool)isEnabled;	// IMP=0x00100000000caa43
- (id).cxx_construct;	// IMP=0x00000000000ca50e
- (void).cxx_destruct;	// IMP=0x00000000000ca4e8
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000000000ca431
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;	// IMP=0x00000000000ca424
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000ca007
- (id)clientForConnection:(id)arg1;	// IMP=0x00000000000c9f9f
- (void)connectionWasInvalidated:(id)arg1;	// IMP=0x00000000000c9f4a
- (void)clientBorn:(id)arg1 forNewConnection:(id)arg2;	// IMP=0x00000000000c9ef0
- (id)initWithXPCListener:(id)arg1;	// IMP=0x00000000000c9e56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

