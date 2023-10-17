//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCPhysicalInputProfile, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _GCWebKitUserIntentRecognizer : NSObject
{
    GCPhysicalInputProfile *_physicalInputProfile;	// 8 = 0x8
    NSMutableDictionary *_trackedInputs;	// 16 = 0x10
    NSMutableDictionary *_timers;	// 24 = 0x18
    double _slidingWindowTotalDuration;	// 32 = 0x20
    double _slidingWindowSegmentDuration;	// 40 = 0x28
    double _deadzoneSquared;	// 48 = 0x30
    int _distanceThreshold;	// 56 = 0x38
    CDUnknownBlockType _thumbstickUserIntentHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000846d9
@property(readonly, copy, nonatomic) CDUnknownBlockType thumbstickUserIntentHandler; // @synthesize thumbstickUserIntentHandler=_thumbstickUserIntentHandler;
- (void)processChangedElements:(id)arg1 atTimestamp:(unsigned long long)arg2;	// IMP=0x0000000000083d2b
- (id)initWithPhysicalInputProfile:(id)arg1 thumbstickUserIntentHandler:(CDUnknownBlockType)arg2 slidingWindowTotalDuration:(double)arg3 slidingWindowSegmentDuration:(double)arg4 deadzone:(double)arg5 sensitivity:(int)arg6;	// IMP=0x0000000000083b42
- (id)initWithPhysicalInputProfile:(id)arg1 thumbstickUserIntentHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000083b0f

@end
