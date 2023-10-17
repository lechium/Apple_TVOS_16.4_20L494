//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLBarometerCalibrationSourceAggregator, CLBarometerCalibrationTrack;
@protocol CLBarometerCalibrationContextClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationContextManager : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLBarometerCalibrationContextClient> _delegate;	// 16 = 0x10
    void *fDataBuffers;	// 24 = 0x18
    CLBarometerCalibrationSourceAggregator *_sourceAggregator;	// 32 = 0x20
    CLBarometerCalibrationTrack *_fTrack;	// 40 = 0x28
}

@property(retain, nonatomic) CLBarometerCalibrationTrack *fTrack; // @synthesize fTrack=_fTrack;
- (void)cleanup;	// IMP=0x00100000007269cc
- (void)notificationAcknowledged:(unsigned long long)arg1;	// IMP=0x00100000007269c6
- (void)onCharger:(_Bool)arg1;	// IMP=0x00100000007269c0
- (void)stepCountElevationNotification:(NotificationData_d01a5246)arg1;	// IMP=0x00100000007269ba
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x00100000007269b4
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x00100000007269ae
- (void)clientConnected:(id)arg1 withNotification:(unsigned long long)arg2;	// IMP=0x00100000007269a8
- (void)dealloc;	// IMP=0x001000000072696a
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0010000000726844

@end
