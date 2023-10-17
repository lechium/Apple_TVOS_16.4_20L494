//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSHashTable, NSMutableDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MNNavigationSessionLogger : NSObject
{
    NSUUID *_lastGuidanceSignID;	// 8 = 0x8
    NSArray *_lastARInfos;	// 16 = 0x10
    NSError *_previousSuppressedRerouteError;	// 24 = 0x18
    NSMutableDictionary *_displayETALookup;	// 32 = 0x20
    NSHashTable *_activeCameraInfos;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000dc91a
- (id)_stringForStyleAttributeKey:(unsigned int)arg1;	// IMP=0x00000000000dc8cc
- (void)_updateCameraStyleAttributesForLocation:(id)arg1;	// IMP=0x00000000000dbf5b
- (id)_stringForLocationType:(unsigned long long)arg1;	// IMP=0x00000000000dbf3c
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dbe89
- (void)navigationSession:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x00000000000dbd2e
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00000000000dbb71
- (void)navigationSession:(id)arg1 didRemoveWaypoint:(id)arg2;	// IMP=0x00000000000dba9a
- (void)navigationSession:(id)arg1 didInsertWaypoint:(id)arg2;	// IMP=0x00000000000db9c3
- (void)navigationSession:(id)arg1 didRerouteWithWaypoints:(id)arg2;	// IMP=0x00000000000db793
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;	// IMP=0x00000000000db6bc
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x00000000000db2f7
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x00000000000db23e
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x00000000000db066
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x00000000000dae94
- (void)navigationSessionDidCancelReroute:(id)arg1;	// IMP=0x00000000000dae2a
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;	// IMP=0x00000000000daca9
- (void)navigationSessionWillReroute:(id)arg1;	// IMP=0x00000000000dac3f
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x00000000000dab01
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00000000000da8de
- (void)navigationSessionDidArrive:(id)arg1;	// IMP=0x00000000000da874
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;	// IMP=0x00000000000da80a
- (void)navigationSession:(id)arg1 didUpdateTargetLegIndex:(unsigned long long)arg2;	// IMP=0x00000000000da76e
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x00000000000da6a1
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000da605
- (void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000da569
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00000000000da4bb
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00000000000d9fa0
- (void)navigationSession:(id)arg1 didStopWithReason:(unsigned long long)arg2;	// IMP=0x00000000000d9ee5
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x00000000000d9dec
- (void)navigationSession:(id)arg1 didStartWithRoute:(id)arg2 navigationType:(long long)arg3 isResumingMultipointRoute:(_Bool)arg4 isReconnecting:(_Bool)arg5;	// IMP=0x00000000000d99e2
- (id)init;	// IMP=0x00000000000d9994

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

