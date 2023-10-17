//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GEOMapTransitStation;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitHall
{
    id <GEOMapTransitStation> _station;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000034b231
- (id)findStops:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000034b0e5
- (id)findStation:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000034aee6
@property(readonly, nonatomic) unsigned long long stationID;

// Remaining properties
@property(readonly, nonatomic) double boundingRadius;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints;
@property(readonly, nonatomic) long long polygonPointsCount;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long transitID;

@end
