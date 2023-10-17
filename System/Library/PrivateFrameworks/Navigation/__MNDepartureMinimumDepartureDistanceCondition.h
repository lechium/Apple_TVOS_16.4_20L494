//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNDepartureUpdater, NSArray;

__attribute__((visibility("hidden")))
@interface __MNDepartureMinimumDepartureDistanceCondition : NSObject
{
    MNDepartureUpdater *_updater;	// 8 = 0x8
    NSArray *_arrivalPoints;	// 16 = 0x10
    double _closestDistanceToWaypoint;	// 24 = 0x18
    double _threshold;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d76c4
- (double)scoreForLocation:(id)arg1;	// IMP=0x00000000000d7084
- (id)initWithUpdater:(id)arg1 distanceThreshold:(double)arg2;	// IMP=0x00000000000d7070
- (id)initWithUpdater:(id)arg1 arrivalPoints:(id)arg2 distanceThreshold:(double)arg3;	// IMP=0x00000000000d6fc0

@end

