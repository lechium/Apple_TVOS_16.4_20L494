//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo, MNLocation, MNNavigationSessionState, NSArray, NSString, NSTimer;
@protocol MNTimeAndDistanceUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject
{
    id <MNTimeAndDistanceUpdaterDelegate> _delegate;	// 8 = 0x8
    MNLocation *_location;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSTimer *_minuteTimer;	// 32 = 0x20
    MNActiveRouteInfo *_mainRoute;	// 40 = 0x28
    unsigned long long _currentLogType;	// 48 = 0x30
    MNNavigationSessionState *_navigationSessionState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000ac448
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) __weak id <MNTimeAndDistanceUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logDisplayETAInfo:(id)arg1 logType:(unsigned long long)arg2;	// IMP=0x00000000000ac25a
- (void)_startTimerToNextMinute;	// IMP=0x00000000000abe95
- (id)_batteryChargeInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000abb40
- (id)_routeDistanceInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000ab95b
- (id)_displayETAInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000aacbe
- (void)updateDisplayETAForRoute:(id)arg1 notificationType:(unsigned long long)arg2;	// IMP=0x00000000000aa2e2
- (void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(unsigned long long)arg4;	// IMP=0x00000000000aa056
- (void)setLocation:(id)arg1 notificationType:(unsigned long long)arg2;	// IMP=0x00000000000a9cdb
- (void)stopUpdating;	// IMP=0x00000000000a9cc5
- (void)startUpdating;	// IMP=0x00000000000a9cb3
- (void)dealloc;	// IMP=0x00000000000a9c75
- (id)initWithNavigationSessionState:(id)arg1;	// IMP=0x00000000000a9bf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

