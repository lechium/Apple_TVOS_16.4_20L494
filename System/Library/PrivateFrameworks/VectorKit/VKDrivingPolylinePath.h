//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKDrivingPolylinePath
{
    struct GradientTraffic _standardModeTraffic;	// 128 = 0x80
    struct vector<float, std::allocator<float>> _laneHalfWidths;	// 136 = 0x88
    struct vector<double, std::allocator<double>> _distances;	// 160 = 0xa0
    struct vector<md::GradientTraffic, std::allocator<md::GradientTraffic>> _gradientTraffics;	// 184 = 0xb8
}

+ (void)updateDistances:(void *)arg1 forPath:(id)arg2 snap:(_Bool)arg3;	// IMP=0x00600000003c1c08
- (id).cxx_construct;	// IMP=0x00000000003c3466
- (void).cxx_destruct;	// IMP=0x00000000003c3402
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(void *)arg2 shouldSnap:(_Bool)arg3 isGradientTraffic:(_Bool)arg4;	// IMP=0x00000000003c33f0
- (void)splitGradientTrafficSegmentationAndAddTo:(id)arg1 with:(void *)arg2 shouldSnap:(_Bool)arg3;	// IMP=0x00000000003c2460
- (void)assignPoints:(void *)arg1 laneHalfWidths:(float *)arg2 gradientTraffics:(struct GradientTraffic *)arg3 polylineCoordinates:(struct PolylineCoordinate *)arg4 count:(unsigned long long)arg5;	// IMP=0x00000000003c2235
- (void)assignPoints:(void *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000003c21f8
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment *)arg2;	// IMP=0x00000000003c2183
- (const struct GradientTraffic *)gradientTrafficAtIndex:(unsigned int)arg1;	// IMP=0x00000000003c1bd7
- (void)setTrafficSpeed:(unsigned char)arg1;	// IMP=0x00000000003c1bb5
- (float)laneHalfWidthAtIndex:(unsigned int)arg1;	// IMP=0x00000000003c1b8c
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4 matchedPathSegments:(id)arg5;	// IMP=0x00000000003c1a76

@end

