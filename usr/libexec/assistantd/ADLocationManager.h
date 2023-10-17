//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADGreenTeaLogger, ADPeerLocationConnection, CLInUseAssertion, CLLocation, CLLocationManager, GEOLocationShifter, NSString, SAGetRequestOrigin;
@protocol ADLocationManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADLocationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    SAGetRequestOrigin *_requestOriginCommand;	// 24 = 0x18
    CDUnknownBlockType _updateCompletion;	// 32 = 0x20
    CLLocation *_lastLocation;	// 40 = 0x28
    struct os_unfair_lock_s _lastLocationLock;	// 48 = 0x30
    CLInUseAssertion *_locationInUseAssertion;	// 56 = 0x38
    unsigned long long _locationInUseAssertionRefCount;	// 64 = 0x40
    id <ADLocationManagerDelegate> _delegate;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_externalQueue;	// 80 = 0x50
    _Bool _needsToSendLocation;	// 88 = 0x58
    _Bool _isNavigating;	// 89 = 0x59
    int _lastLocationAuthorizationStatus;	// 92 = 0x5c
    _Bool _lastLocationServicesIsEnabled;	// 96 = 0x60
    _Bool _lastPreciseLocationIsEnabled;	// 97 = 0x61
    _Bool _haveLastAuthorizationAndEnabledValues;	// 98 = 0x62
    ADPeerLocationConnection *_peerLocationConnection;	// 104 = 0x68
    _Bool _haveVisibleAssistantUI;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_locationTimerSource;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_locationSLATimerSource;	// 128 = 0x80
    GEOLocationShifter *_locationShifter;	// 136 = 0x88
    CLLocation *_lastPeerLocation;	// 144 = 0x90
    ADGreenTeaLogger *_greenTeaLogger;	// 152 = 0x98
}

+ (void)prepareForAssistantEnablementInBackground;	// IMP=0x0020000000137e6a
+ (void)getLocationIsRestricted:(CDUnknownBlockType)arg1;	// IMP=0x001000000013248c
+ (_Bool)_shouldUseOneshotLocationRequest;	// IMP=0x0010000000132482
- (void).cxx_destruct;	// IMP=0x00200000001380dd
@property(nonatomic) _Bool needsToSendLocation; // @synthesize needsToSendLocation=_needsToSendLocation;
@property(nonatomic) __weak id <ADLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000013808c
- (void)releaseLocationInUseAssertionForReason:(id)arg1;	// IMP=0x0010000000137dc2
- (void)_releaseLocationInUseAssertionForReason:(id)arg1;	// IMP=0x0010000000137c66
- (void)acquireLocationInUseAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000137b8e
- (void)_acquireLocationInUseAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000137a0c
- (void)dismissedAllVisibleAssistantUIForReason:(id)arg1;	// IMP=0x001000000013781a
- (void)showingVisibleAssistantUIForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001375e5
- (void)stopLocationUpdates;	// IMP=0x001000000013756f
- (void)updateLocationForCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000136dec
- (void)updateLocationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001367c1
- (void)updateWithLocation:(id)arg1 locationStatus:(id)arg2;	// IMP=0x00100000001363ea
- (void)_setAuthorizationStatusToAuthorizedAndEnabled;	// IMP=0x00100000001363d5
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0010000000135c12
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000135877
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000001355b0
- (void)peerLocationConnectionSuggestsClearingCachedLocation:(id)arg1;	// IMP=0x00100000001354c9
- (void)peerLocationConnection:(id)arg1 didReceiveUnsolicitedLocation:(id)arg2;	// IMP=0x001000000013525a
- (double)_preferredPlatformLocationAccuracy;	// IMP=0x0010000000135213
- (void)_processUpdatedLocation:(id)arg1;	// IMP=0x0010000000134f44
- (_Bool)_locationUpdateIsCapableOfSucceeding;	// IMP=0x0010000000134f3c
- (id)_bestCachedLocation;	// IMP=0x0010000000134e2c
- (void)_requestLocationForGetRequestOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134d26
- (void)_requestLocationWithBestAccuracy;	// IMP=0x0010000000134a47
- (_Bool)_shouldSendLocationUpdate:(id)arg1 fromLocation:(id)arg2 forCommand:(id)arg3;	// IMP=0x00100000001347d0
- (void)_startMonitoringLocationForGetRequestOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134663
- (void)_startMonitoringLocationWithDesiredAccuracy:(double)arg1;	// IMP=0x00100000001344c4
- (void)_scheduleLocationTimerWithTimeout:(double)arg1;	// IMP=0x001000000013410b
- (void)_cancelLocationTimer;	// IMP=0x001000000013405d
- (void)_scheduleLocationSLATimer;	// IMP=0x0010000000133e0f
- (void)_triggerLocationABCForSubtype:(id)arg1;	// IMP=0x0010000000133d1c
- (void)_cancelLocationSLATimer;	// IMP=0x0010000000133c62
- (void)_clearCompletionState;	// IMP=0x0010000000133c29
- (void)_stopMonitoringLocation;	// IMP=0x0010000000133b57
- (void)_generateLocationUnknownResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000133b38
- (void)_generateLocationTimedOutResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000133b19
- (void)_generateLocationWiFiOffResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000133afa
- (void)_generateLocationDeniedResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000133adb
- (void)_generateLocationDisabledResponseForGetRequestOriginCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000133abc
- (void)_generateResponseForGetRequestOriginCommand:(id)arg1 withStatus:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013396a
- (id)_shiftedLocationForGeoCoordinate2D:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 originalLocation:(id)arg3;	// IMP=0x0010000000133894
- (void)_generateResponseForGetRequestOriginCommand:(id)arg1 withUnshiftedLocation:(id)arg2 forceCachedShifting:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000132c92
- (void)navStatusChanged:(id)arg1;	// IMP=0x0010000000132c2b
- (id)_locationShifter;	// IMP=0x0010000000132be4
- (id)_peerLocationConnection;	// IMP=0x0010000000132b96
- (id)_locationManager;	// IMP=0x001000000013294d
- (_Bool)_locationServicesIsEnabled;	// IMP=0x0010000000132944
- (void)_setLastLocation:(id)arg1;	// IMP=0x00100000001328da
- (id)lastLocation;	// IMP=0x001000000013289c
- (void)dealloc;	// IMP=0x00100000001327fd
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x001000000013251a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
