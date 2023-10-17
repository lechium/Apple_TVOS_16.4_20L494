//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions, GEOWalkingOptions, MKDirections, MKMapItem, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _MKRouteETAFetcher : NSObject
{
    NSMutableDictionary *_etaResults;	// 8 = 0x8
    struct CLLocationCoordinate2D _lastUpdatedETAOriginCoordinate;	// 16 = 0x10
    double _lastUpdatedETATime;	// 32 = 0x20
    double _lastRequestTime;	// 40 = 0x28
    MKDirections *_inProgressETAUpdate;	// 48 = 0x30
    _Bool _lastETAUpdateHadError;	// 56 = 0x38
    double _staleDistance;	// 64 = 0x40
    double _staleTimeInterval;	// 72 = 0x48
    _Bool _optionsHaveChangedSinceLastUpdate;	// 80 = 0x50
    MKMapItem *_mapItem;	// 88 = 0x58
    MKMapItem *_originMapItem;	// 96 = 0x60
    GEOAutomobileOptions *_automobileOptions;	// 104 = 0x68
    GEOWalkingOptions *_walkingOptions;	// 112 = 0x70
    GEOTransitOptions *_transitOptions;	// 120 = 0x78
    GEOCyclingOptions *_cyclingOptions;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000011ede7
@property(copy, nonatomic) GEOCyclingOptions *cyclingOptions; // @synthesize cyclingOptions=_cyclingOptions;
@property(copy, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(copy, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(copy, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) MKMapItem *originMapItem; // @synthesize originMapItem=_originMapItem;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) NSMutableDictionary *etaResults; // @synthesize etaResults=_etaResults;
- (void)_didUpdateETAResult;	// IMP=0x000000000011ed68
- (void)invalidateETAForTransportType:(unsigned long long)arg1;	// IMP=0x000000000011ed14
- (_Bool)isValidETA:(id)arg1;	// IMP=0x000000000011ec6b
- (void)expireETAsIfNoLongerValid;	// IMP=0x000000000011e9e0
- (_Bool)shouldUpdateEstimatedTravelTimeForNewOrigin:(struct CLLocationCoordinate2D)arg1;	// IMP=0x000000000011e8ea
@property(readonly, nonatomic) struct CLLocationCoordinate2D destinationCoordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D originCoordinate;
- (_Bool)isUsingCurrentLocationForOrigin;	// IMP=0x000000000011e6a4
- (void)requestNewETAForTransportType:(unsigned long long)arg1 additionalTransportTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000011dfde
- (id)routeETAForTransportType:(unsigned long long)arg1;	// IMP=0x000000000011df77
- (void)_resetState;	// IMP=0x000000000011df0a
- (void)dealloc;	// IMP=0x000000000011dc03
- (id)init;	// IMP=0x000000000011db3e

@end

