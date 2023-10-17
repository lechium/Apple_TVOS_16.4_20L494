//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteMatch;

__attribute__((visibility("hidden")))
@interface VKPuckAnimatorLocationProjector : NSObject
{
    GEORouteMatch *_routeMatch;	// 8 = 0x8
    GEORouteMatch *_projectedRouteMatch;	// 16 = 0x10
    Matrix_6e1d3589 _projectedPosition;	// 24 = 0x18
    _Bool _isProjectedPositionBehind;	// 48 = 0x30
    optional_fcefa02e _elevationInProjectedPosition;	// 56 = 0x38
    double _projectedCourse;	// 72 = 0x48
    optional_89639096 _currentSnappedSegment;	// 80 = 0x50
    _Bool _alwaysUseGoodRouteMatch;	// 136 = 0x88
    struct PolylineCoordinate _maxTravelledCoordinate;	// 140 = 0x8c
}

- (id).cxx_construct;	// IMP=0x00000000006c9c86
- (void).cxx_destruct;	// IMP=0x00000000006c9c5e
@property(nonatomic) _Bool alwaysUseGoodRouteMatch; // @synthesize alwaysUseGoodRouteMatch=_alwaysUseGoodRouteMatch;
@property(readonly, nonatomic) _Bool isProjectedPositionBehind; // @synthesize isProjectedPositionBehind=_isProjectedPositionBehind;
@property(readonly, nonatomic) optional_89639096 currentSnappedSegment; // @synthesize currentSnappedSegment=_currentSnappedSegment;
@property(readonly, nonatomic) double projectedCourse; // @synthesize projectedCourse=_projectedCourse;
@property(readonly, nonatomic) optional_e65ed27b elevationInProjectedPostion; // @synthesize elevationInProjectedPostion=_elevationInProjectedPosition;
@property(readonly, nonatomic) Matrix_6e1d3589 projectedPosition; // @synthesize projectedPosition=_projectedPosition;
@property(retain, nonatomic) GEORouteMatch *projectedRouteMatch; // @synthesize projectedRouteMatch=_projectedRouteMatch;
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
- (id)detailedDescription;	// IMP=0x00000000006c9a7a
@property(readonly, nonatomic) _Bool projectedLocationOnRoute;
@property(readonly, nonatomic) CDStruct_c3b9c2ee projectedLocation;
- (void)projectFromLocation:(id)arg1 routeMatch:(id)arg2 speedMultiplier:(double)arg3 routeLine:(id)arg4;	// IMP=0x00000000006c929e
- (void)_updateCourseAndPositionFromRouteMatch:(id)arg1;	// IMP=0x00000000006c901e
- (void)reset;	// IMP=0x00000000006c8fc2
- (void)dealloc;	// IMP=0x00000000006c8f4f
- (id)init;	// IMP=0x00000000006c8ed3

@end

