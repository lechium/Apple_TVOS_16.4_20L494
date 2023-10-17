//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDTransitScheduleGroup, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitNearbyScheduleGroup : NSObject
{
    GEOPDTransitScheduleGroup *_transitScheduleGroup;	// 8 = 0x8
    NSArray *_lineCells;	// 16 = 0x10
    NSArray *_incidents;	// 24 = 0x18
}

+ (id)lineSectionsForNearbyTransitGroup:(id)arg1 departureSequenceContainers:(id)arg2 departureSequences:(id)arg3;	// IMP=0x001000000118e925
- (void).cxx_destruct;	// IMP=0x000000000118ec82
@property(readonly, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
@property(readonly, nonatomic) NSArray *lineCells; // @synthesize lineCells=_lineCells;
@property(readonly, nonatomic) long long groupType;
@property(readonly, nonatomic) NSString *pinnedDisplayName;
@property(readonly, nonatomic) _Bool hasWalkingDetails;
@property(readonly, nonatomic) unsigned long long maxWalkingDistance;
@property(readonly, nonatomic) unsigned long long minWalkingDistance;
@property(readonly, nonatomic) unsigned long long maxWalkingTime;
@property(readonly, nonatomic) unsigned long long minWalkingTime;
@property(readonly, nonatomic) NSString *displayName;
- (id)initWithTransitScheduleGroup:(id)arg1 departureSequenceContainers:(id)arg2 scheduledDepartureSequences:(id)arg3 incidentsMap:(id)arg4;	// IMP=0x000000000118e6f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

