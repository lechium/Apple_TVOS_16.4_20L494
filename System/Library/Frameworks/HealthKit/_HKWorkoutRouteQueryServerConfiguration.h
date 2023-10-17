//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKWorkoutRoute, NSDateInterval, NSUUID;

__attribute__((visibility("hidden")))
@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration
{
    HKWorkoutRoute *_workoutRoute;	// 8 = 0x8
    NSUUID *_workoutUUID;	// 16 = 0x10
    NSDateInterval *_dateInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000ba47a
- (void).cxx_destruct;	// IMP=0x00000000000ba6d3
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(retain, nonatomic) NSUUID *workoutUUID; // @synthesize workoutUUID=_workoutUUID;
@property(retain, nonatomic) HKWorkoutRoute *workoutRoute; // @synthesize workoutRoute=_workoutRoute;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ba5aa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ba482
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ba3ec

@end

