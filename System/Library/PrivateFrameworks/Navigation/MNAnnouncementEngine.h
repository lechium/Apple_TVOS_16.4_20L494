//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNAnnouncementPlan, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MNAnnouncementEngine : NSObject
{
    NSArray *_events;	// 8 = 0x8
    double _distance;	// 16 = 0x10
    double _speed;	// 24 = 0x18
    NSDictionary *_durations;	// 32 = 0x20
    MNAnnouncementPlan *_plan;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000009a86
@property(retain, nonatomic) MNAnnouncementPlan *plan; // @synthesize plan=_plan;
- (void)_dropToResolveConflict:(id)arg1;	// IMP=0x00000000000095ff
- (_Bool)_compressToResolveConflict:(id)arg1;	// IMP=0x0000000000008e6a
- (double)_canDelayEvent:(id)arg1;	// IMP=0x0000000000008ae3
- (_Bool)_delayToResolveConflict:(id)arg1;	// IMP=0x0000000000008461
- (double)_canAdvanceEvent:(id)arg1;	// IMP=0x0000000000008198
- (_Bool)_advanceToResolveConflict:(id)arg1;	// IMP=0x0000000000007f96
- (id)nextEvent;	// IMP=0x0000000000007dbd
- (void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5 durations:(id)arg6;	// IMP=0x0000000000007948

@end

