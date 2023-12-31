//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEORouteBuilder : NSObject
{
}

+ (id)_cellularCoverageForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2;	// IMP=0x008000000103033f
+ (id)_visualInfosForGuidanceEvents:(id)arg1 steps:(id)arg2 coordinates:(id)arg3;	// IMP=0x008000000102fe60
+ (_Bool)_isGuidanceEventAtEndOfLeg:(int)arg1;	// IMP=0x008000000102fe51
+ (id)_guidanceEventsForGeoWaypointRoute:(id)arg1 legs:(id)arg2 steps:(id)arg3 coordinates:(id)arg4;	// IMP=0x008000000102f62d
+ (id)buildMapRegionFromPointSections:(id)arg1;	// IMP=0x008000000102f261
+ (unsigned long long)segmentIndexForPointIndex:(unsigned long long)arg1 withSegments:(id)arg2;	// IMP=0x008000000102f058
+ (id)_segmentForStepIndex:(unsigned long long)arg1 withSegments:(id)arg2;	// IMP=0x008000000102eeb9
+ (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1 withSteps:(id)arg2;	// IMP=0x008000000102ecb0
+ (id)segmentForPointIndex:(unsigned long long)arg1 withSegments:(id)arg2 andSteps:(id)arg3;	// IMP=0x008000000102ec07
+ (id)buildPointSectionsWithSteps:(id)arg1 segments:(id)arg2 coordinates:(id)arg3;	// IMP=0x008000000102e406
+ (id)_composedRouteLegForStartStep:(id)arg1 endStep:(id)arg2 custodian:(id)arg3 geoRouteLeg:(id)arg4 legIndex:(unsigned long long)arg5 origin:(id)arg6 destination:(id)arg7 arrivalParameters:(id)arg8 legLength:(double)arg9;	// IMP=0x008000000102e10c
+ (id)_composedRouteSegmentForStartStep:(id)arg1 andEndStep:(id)arg2 andCustodian:(id)arg3;	// IMP=0x008000000102de40
+ (id)_composedRouteStepWithTransportType:(int)arg1 andCustodian:(id)arg2 geoRouteLeg:(id)arg3 forGeoStep:(id)arg4 withStepIndex:(unsigned long long)arg5 stepStartPointIndex:(unsigned long long)arg6 legStartPointIndex:(unsigned long long)arg7;	// IMP=0x008000000102dac0
+ (id)_composedRouteStepWithTransportType:(int)arg1 andCustodian:(id)arg2 geoRouteLeg:(id)arg3 forGeoStep:(id)arg4 withStepIndex:(unsigned long long)arg5 startRouteCoordinate:(struct PolylineCoordinate)arg6 endRouteCoordinate:(struct PolylineCoordinate)arg7 maneuverStartRouteCoordinate:(struct PolylineCoordinate)arg8;	// IMP=0x008000000102d7f1
+ (void)_componentsForGeoWaypointRoute:(id)arg1 initializerData:(id)arg2 coordinates:(id)arg3 custodian:(id)arg4 outLegs:(out id *)arg5 outSegments:(out id *)arg6 outSteps:(out id *)arg7;	// IMP=0x008000000102bb5e
+ (id)_unpackedPointsDataForGeoRoute:(id)arg1;	// IMP=0x008000000102b917
+ (id)_coordinatesForGeoWaypointRoute:(id)arg1;	// IMP=0x008000000102aeb9
+ (id)outputForGeoWaypointRoute:(id)arg1 initializerData:(id)arg2 custodian:(id)arg3;	// IMP=0x008000000102a678

@end

