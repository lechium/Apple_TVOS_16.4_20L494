//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GEOMapTransitStop;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitLink
{
    shared_ptr_24ebf3c0 _transitEdge;	// 56 = 0x38
    struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> _coords;	// 72 = 0x48
    id <GEOMapTransitStop> _stopFrom;	// 96 = 0x60
    id <GEOMapTransitStop> _stopTo;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x000000000034c588
- (void).cxx_destruct;	// IMP=0x000000000034c52e
@property(readonly, nonatomic) id <GEOMapTransitStop> stopTo; // @synthesize stopTo=_stopTo;
@property(readonly, nonatomic) id <GEOMapTransitStop> stopFrom; // @synthesize stopFrom=_stopFrom;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1 outClosestCoordinateOnLine:(CDStruct_c3b9c2ee *)arg2;	// IMP=0x000000000034c2c5
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int minimumTravelTime;
@property(readonly, nonatomic) NSString *internalLineName;
@property(readonly, nonatomic) unsigned long long transitLineID;
- (id)initWithMap:(id)arg1 transitEdge:(shared_ptr_24ebf3c0)arg2;	// IMP=0x000000000034bdf3

// Remaining properties
@property(readonly, nonatomic) unsigned long long coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double length;
@property(readonly) Class superclass;

@end

