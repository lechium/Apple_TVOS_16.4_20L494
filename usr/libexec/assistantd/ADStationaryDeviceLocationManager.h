//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation;

@interface ADStationaryDeviceLocationManager
{
    CLLocation *_stationaryDeviceCachedLocation;	// 72 = 0x48
    struct os_unfair_lock_s _stationaryDeviceCachedLocationLock;	// 80 = 0x50
    unsigned long long *_stationaryDeviceLocationMonitoringRefCount;	// 88 = 0x58
    unsigned long long *_stationaryDeviceLocationAssertionRefCount;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000259164
- (id)_atomicCopySetStationaryDeviceCachedLocation:(id)arg1;	// IMP=0x00100000002590d1
- (id)_atomicCopyStationaryDeviceCachedLocation;	// IMP=0x0010000000259086
- (_Bool)_isStationaryDeviceCachedLocationAvailable;	// IMP=0x0010000000258fbe
- (void)_scheduleLocationTimerWithTimeout:(double)arg1;	// IMP=0x0010000000258f4d
- (id)_locationManager;	// IMP=0x0010000000258ebb
- (id)lastLocation;	// IMP=0x0010000000258dce
- (void)_processUpdatedLocation:(id)arg1;	// IMP=0x0010000000258caf
- (void)releaseLocationInUseAssertionForReason:(id)arg1;	// IMP=0x0010000000258b28
- (void)acquireLocationInUseAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002588c0
- (void)_stopMonitoringLocation;	// IMP=0x0010000000258827
- (void)_startMonitoringLocationWithDesiredAccuracy:(double)arg1;	// IMP=0x00100000002586a0
- (id)_bestCachedLocation;	// IMP=0x0010000000258551
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x001000000025850f

@end

