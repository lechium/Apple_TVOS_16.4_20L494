//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteLeg, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MNDepartureUpdater : NSObject
{
    NSArray *_conditions;	// 8 = 0x8
    NSMutableDictionary *_conditionScores;	// 16 = 0x10
    GEOComposedRoute *_route;	// 24 = 0x18
    GEOComposedRouteLeg *_arrivalLeg;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d8ce3
@property(readonly, nonatomic) GEOComposedRouteLeg *arrivalLeg; // @synthesize arrivalLeg=_arrivalLeg;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id)_arrivalRegionsDepartureConditions;	// IMP=0x00000000000d8ae5
- (id)_defaultDepartureConditions;	// IMP=0x00000000000d86d7
- (void)_initConditions;	// IMP=0x00000000000d849b
- (_Bool)allowDepartureForLocation:(id)arg1;	// IMP=0x00000000000d7ea1
@property(readonly, nonatomic) unsigned long long arrivalWaypointLegIndex;
- (id)initWithRoute:(id)arg1 arrivalLegIndex:(unsigned long long)arg2;	// IMP=0x00000000000d7d8b

@end

