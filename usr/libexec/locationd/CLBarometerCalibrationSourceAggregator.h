//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol CLBarometerCalibrationAggregatorClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationSourceAggregator : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    void *_dataBuffers;	// 16 = 0x10
    struct map<unsigned int, CLBarometerCalibrationSource *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, CLBarometerCalibrationSource *>>> _sources;	// 24 = 0x18
    NSMutableSet *_clientsForSource[9];	// 48 = 0x30
    double _lastTimestampPressureBuffer;	// 120 = 0x78
    _Bool _currentWetState;	// 128 = 0x80
    struct CLBarometerCalibrationSurfaceCalData _prevSurfCalLocation;	// 136 = 0x88
    struct CLBarometerCalibrationSurfaceCalData _prevSurfCalMotion;	// 160 = 0xa0
    _Bool _inOutdoorWorkout;	// 184 = 0xb8
    double _lastAltitude;	// 192 = 0xc0
    double _lastAltitudeTime;	// 200 = 0xc8
    double _lastAltitudeAccuracy;	// 208 = 0xd0
    id <CLBarometerCalibrationAggregatorClient> _delegate;	// 216 = 0xd8
}

+ (_Bool)isLocationUsefulForCalibration:(struct NotificationData)arg1;	// IMP=0x002000000082efda
- (id).cxx_construct;	// IMP=0x002000000082f3a6
- (void).cxx_destruct;	// IMP=0x001000000082f394
@property(nonatomic) id <CLBarometerCalibrationAggregatorClient> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=getLastAltitudeAccuracy) double lastAltitudeAccuracy; // @synthesize lastAltitudeAccuracy=_lastAltitudeAccuracy;
@property(nonatomic, getter=getLastAltitudeTime) double lastAltitudeTime; // @synthesize lastAltitudeTime=_lastAltitudeTime;
@property(nonatomic, getter=getLastAltitude) double lastAltitude; // @synthesize lastAltitude=_lastAltitude;
@property(nonatomic, getter=isInOutdoorWorkout) _Bool inOutdoorWorkout; // @synthesize inOutdoorWorkout=_inOutdoorWorkout;
- (_Bool)goodSurfaceCalibration:(float)arg1;	// IMP=0x001000000082f0e6
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x001000000082f0ca
- (array_c343414b)copyDataBuffersForTrack:(unsigned long long)arg1;	// IMP=0x001000000082eeb7
- (void)didUpdateSource:(unsigned long long)arg1 withData:(shared_ptr_16a5184d)arg2;	// IMP=0x001000000082d2b2
- (void)disableSources:(id)arg1 forContext:(id)arg2;	// IMP=0x001000000082d0bc
- (void)enableSources:(id)arg1 forContext:(id)arg2;	// IMP=0x001000000082cec6
- (void)dealloc;	// IMP=0x001000000082ce0e
- (id)initWithUniverse:(id)arg1 buffers:(void *)arg2;	// IMP=0x001000000082cb4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

