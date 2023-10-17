//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOVectorTile;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadBuilder
{
    struct deque<GEORoadEdge *, std::allocator<GEORoadEdge *>> _edges;	// 128 = 0x80
    GEOVectorTile *_retainedTile;	// 176 = 0xb0
}

- (id).cxx_construct;	// IMP=0x0000000001342099
- (void).cxx_destruct;	// IMP=0x0000000001341f1f
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0000000001341ef6
- (id)_lastTile;	// IMP=0x0000000001341dff
- (id)_firstTile;	// IMP=0x0000000001341d13
- (Matrix_8746f91e)_lastPoint;	// IMP=0x0000000001341c34
- (Matrix_8746f91e)_firstPoint;	// IMP=0x0000000001341b60
- (unsigned long long)_connectionTypeForEdge:(id)arg1 points:(struct GeoCodecsVectorTilePoint *)arg2 connectingTilePoint:(Matrix_8746f91e)arg3;	// IMP=0x0000000001341a6b
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x0000000001341a22
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x00000000013419e4
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x0000000001341081
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x000000000133ffa3
- (void)_buildCompleteEdge;	// IMP=0x000000000133fd8a
- (unsigned long long)_maxTileCount;	// IMP=0x000000000133fd7f
- (void)dealloc;	// IMP=0x000000000133fd3e
- (id)initWithMap:(id)arg1 roadFeature:(id)arg2 shouldFlip:(_Bool)arg3;	// IMP=0x000000000133f898

@end

