//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKAccelerometerClientBKSAccelerometer
{
}

- (void)handleOrientationEvent:(long long)arg1 orientationLocked:(_Bool)arg2;	// IMP=0x00400000000265be
- (void)handleAccelerometerEventWithTimestamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 samplingInterval:(double)arg5;	// IMP=0x00100000000264dd
- (void)_queue_invalidate;	// IMP=0x00100000000264ae
- (_Bool)_deathBySendRight;	// IMP=0x00100000000264a6
- (_Bool)_deathByPid;	// IMP=0x001000000002649e

@end
