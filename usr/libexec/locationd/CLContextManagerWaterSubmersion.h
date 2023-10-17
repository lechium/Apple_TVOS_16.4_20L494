//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer, CLWaterTemperatureEstimator;

@interface CLContextManagerWaterSubmersion
{
    double _lastPressureTimestampSaved;	// 160 = 0xa0
    CLWaterTemperatureEstimator *_tempEstimator;	// 168 = 0xa8
    CLTimer *_forceGPSTimer;	// 176 = 0xb0
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertionGPS;	// 184 = 0xb8
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationControllerClient;	// 192 = 0xc0
    _Bool _forcingGPS;	// 200 = 0xc8
    double _calibrationTimeOffset;	// 208 = 0xd0
}

+ (double)calculateDepthFromPressure:(double)arg1 withSurfacePressure:(double)arg2;	// IMP=0x004000000047c54c
- (id).cxx_construct;	// IMP=0x002000000047c5b8
- (void).cxx_destruct;	// IMP=0x001000000047c566
- (void)onEnableEasySubmersion:(_Bool)arg1;	// IMP=0x001000000047c436
- (void)onCharger:(_Bool)arg1;	// IMP=0x001000000047c325
- (void)retrieveCachedSubmersionState;	// IMP=0x001000000047c20c
- (void)retrieveCachedSurfacePressure;	// IMP=0x001000000047bead
- (void)saveCachedSurfacePressure:(shared_ptr_1d90f2b7)arg1;	// IMP=0x001000000047bd03
- (void)setTimerForGPSOff;	// IMP=0x001000000047bcde
- (void)onForcedLocationNotificationSub:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x001000000047bcd8
- (void)forceGPSIfSurfaceCalStale;	// IMP=0x001000000047b866
- (void)sendSurfacePressureToAOP:(shared_ptr_1d90f2b7)arg1;	// IMP=0x001000000047b821
- (float)calculateFilterSurfaceCal:(deque_14119af9)arg1 withSuccess:(_Bool *)arg2;	// IMP=0x001000000047a954
- (void)updateSurfaceCalWithSource:(unsigned long long)arg1 andPressureQueue:(deque_14119af9)arg2;	// IMP=0x001000000047a2b9
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x0010000000479b7e
- (void)setUpGPSSubscriptionForSurfaceCal;	// IMP=0x001000000047993f
- (void)clientConnected:(id)arg1 withNotification:(unsigned long long)arg2;	// IMP=0x00100000004798f1
- (void)dealloc;	// IMP=0x001000000047983e
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x00100000004795d7

@end

