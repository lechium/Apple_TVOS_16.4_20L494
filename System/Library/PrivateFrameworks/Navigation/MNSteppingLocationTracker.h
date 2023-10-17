//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MNLocationTracker.h"

@class GEORouteMatcher, MNArrivalUpdater, NSString;

__attribute__((visibility("hidden")))
@interface MNSteppingLocationTracker : MNLocationTracker
{
    GEORouteMatcher *_routeMatcher;	// 8 = 0x8
    MNArrivalUpdater *_arrivalUpdater;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004ee0f
- (void)arrivalUpdaterDidArrive:(id)arg1 atEndOfLegAtIndex:(unsigned long long)arg2;	// IMP=0x000000000004edc3
- (void)updateLocation:(id)arg1;	// IMP=0x000000000004ed57
- (id)_matchedLocationForLocation:(id)arg1;	// IMP=0x000000000004eb78
- (void)stopTracking;	// IMP=0x000000000004eb03
- (void)startTrackingWithInitialLocation:(id)arg1 targetLegIndex:(unsigned long long)arg2;	// IMP=0x000000000004e9d5
- (id)matchedLocationForLocation:(id)arg1;	// IMP=0x000000000004e900
- (void)resetForTracePlayerAtLocation:(id)arg1;	// IMP=0x000000000004e8ee
- (int)transportType;	// IMP=0x000000000004e859
- (id)initWithNavigationSession:(id)arg1;	// IMP=0x000000000004e764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

