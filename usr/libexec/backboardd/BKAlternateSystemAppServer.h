//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKAlternateSystemAppManager, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BKAlternateSystemAppServer : NSObject
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    NSXPCConnection *_clientConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    BKAlternateSystemAppManager *_alternateSystemAppManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000066c2f
- (void).cxx_destruct;	// IMP=0x002000000006629c
@property(retain, nonatomic) BKAlternateSystemAppManager *alternateSystemAppManager; // @synthesize alternateSystemAppManager=_alternateSystemAppManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)terminateAlternateSystemAppWithBundleID:(id)arg1;	// IMP=0x0010000000066129
- (void)openAlternateSystemAppWithBundleID:(id)arg1;	// IMP=0x0010000000066022
- (void)unblockSystemAppForAlternateSystemApp;	// IMP=0x0010000000065f82
- (void)blockSystemAppForAlternateSystemApp;	// IMP=0x0010000000065ee2
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000065d53
- (_Bool)_queue_listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000659b0
- (void)_handleInterruptedOrInvalidatedConnection;	// IMP=0x0010000000065965
- (void)run;	// IMP=0x001000000006594f
- (void)dealloc;	// IMP=0x001000000006590d
- (id)init;	// IMP=0x001000000006581f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

