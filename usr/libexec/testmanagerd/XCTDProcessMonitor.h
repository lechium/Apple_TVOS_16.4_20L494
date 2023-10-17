//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, XCTDProcessMonitorDelegate, XCTDRBSProcessMonitor;

@interface XCTDProcessMonitor : NSObject
{
    _Bool _valid;	// 8 = 0x8
    NSMutableSet *_monitoredBundleIDs;	// 16 = 0x10
    id <XCTDProcessMonitorDelegate> _delegate;	// 24 = 0x18
    id <XCTDRBSProcessMonitor> _processMonitor;	// 32 = 0x20
    Class _processHandleClass;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_applicationDidUpdateStateQueue;	// 48 = 0x30
}

+ (id)processStateDescriptor;	// IMP=0x002000000001fd88
+ (id)predicatesForBundleIDs:(id)arg1;	// IMP=0x001000000001fbbb
+ (id)stateSnapshotFromRBSState:(id)arg1 forRBSBundle:(id)arg2 pid:(int)arg3;	// IMP=0x001000000001f8f2
- (void).cxx_destruct;	// IMP=0x0020000000020fee
@property(readonly) NSObject<OS_dispatch_queue> *applicationDidUpdateStateQueue; // @synthesize applicationDidUpdateStateQueue=_applicationDidUpdateStateQueue;
@property(readonly) Class processHandleClass; // @synthesize processHandleClass=_processHandleClass;
@property(readonly) id <XCTDRBSProcessMonitor> processMonitor; // @synthesize processMonitor=_processMonitor;
@property __weak id <XCTDProcessMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bundleIDForPID:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000020ed6
- (id)processSpecifierForPID:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000020e8a
- (void)startMonitoringApplicationWithBundleID:(id)arg1 path:(id)arg2;	// IMP=0x001000000001fe26
- (void)guardIsValid:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f87d
- (void)invalidate;	// IMP=0x001000000001f78e
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000001f71b
- (id)initWithDelegate:(id)arg1 processMonitor:(id)arg2 processHandleClass:(Class)arg3;	// IMP=0x001000000001f618

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

