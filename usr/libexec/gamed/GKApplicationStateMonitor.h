//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, RBSProcessMonitor;
@protocol LSApplicationWorkspaceObserverProtocol;

@interface GKApplicationStateMonitor : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    id <LSApplicationWorkspaceObserverProtocol> _delegate;	// 16 = 0x10
    RBSProcessMonitor *_processMonitor;	// 24 = 0x18
    NSMutableSet *_interestedBundleIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000022711b
@property(retain, nonatomic) NSMutableSet *interestedBundleIDs; // @synthesize interestedBundleIDs=_interestedBundleIDs;
@property(retain, nonatomic) RBSProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property(nonatomic) __weak id <LSApplicationWorkspaceObserverProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x0010000000226ea1
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000226c8e
- (void)startObservingApplicationWorkspaceChanges;	// IMP=0x0010000000226ada
- (void)updateStateObservation;	// IMP=0x00100000002267f0
- (void)stopObservingStateChangesForBundleID:(id)arg1;	// IMP=0x0010000000226771
- (_Bool)startObservingStateChangesForBundleID:(id)arg1;	// IMP=0x00100000002266b7
- (void);	// IMP=0x0010000000226284
- (void)dealloc;	// IMP=0x0010000000225f5e
- (id)init;	// IMP=0x0010000000225ea4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

