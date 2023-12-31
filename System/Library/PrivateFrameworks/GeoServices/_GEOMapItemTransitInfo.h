//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOPDTransitInfo, GEOPDTransitNearbySchedule, GEOPDTransitSchedule, NSArray, NSDate, NSMapTable, NSString, NSTimeZone;
@protocol GEOTransitNearbySchedule;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitInfo : NSObject
{
    GEOPDTransitInfo *_transitInfo;	// 8 = 0x8
    GEOPDTransitSchedule *_transitSchedule;	// 16 = 0x10
    NSArray *_systems;	// 24 = 0x18
    NSArray *_lines;	// 32 = 0x20
    NSArray *_departureSequences;	// 40 = 0x28
    NSTimeZone *_timeZone;	// 48 = 0x30
    NSArray *_incidents;	// 56 = 0x38
    _Bool _hasTransitIncidentComponent;	// 64 = 0x40
    NSDate *_incidentExpirationDate;	// 72 = 0x48
    NSArray *_connections;	// 80 = 0x50
    NSString *_displayName;	// 88 = 0x58
    NSMapTable *_cachedHeadSignsForLine;	// 96 = 0x60
    CDStruct_2c43369c _coordinate;	// 104 = 0x68
    NSArray *_transitStops;	// 120 = 0x78
    GEOComposedRoute *_composedRoute;	// 128 = 0x80
    GEOPDTransitNearbySchedule *_unprocessedNearbySchedule;	// 136 = 0x88
    id <GEOTransitNearbySchedule> _nearbySchedule;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000001356c30
@property(readonly, nonatomic) _Bool hasTransitIncidentComponent; // @synthesize hasTransitIncidentComponent=_hasTransitIncidentComponent;
@property(readonly, nonatomic) id <GEOTransitNearbySchedule> nearbySchedule;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSArray *transitTripStops;
- (id)headSignsForLine:(id)arg1;	// IMP=0x000000000135678c
- (id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(CDUnknownBlockType)arg2 excludingIncidentEntities:(id)arg3 usingContainers:(_Bool)arg4;	// IMP=0x0000000001356498
- (id)serviceResumesResultForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 usingContainers:(_Bool)arg4;	// IMP=0x0000000001355d4e
- (id)allSequencesForSystem:(id)arg1 container:(id)arg2;	// IMP=0x0000000001355d34
- (id)allSequencesForSystem:(id)arg1 direction:(id)arg2;	// IMP=0x0000000001355d1a
- (id)departureSequenceContainersForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000013556f0
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(CDUnknownBlockType)arg3 hasSequencesWithNoDirection:(out _Bool *)arg4;	// IMP=0x0000000001355471
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 container:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000135545f
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000001355437
- (id)_departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 container:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000001354e00
- (id)_departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 ignoreDirectionFilter:(_Bool)arg3 direction:(id)arg4 validForDateFromBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000013548e5
- (unsigned long long)numAdditionalDeparturesForSequence:(id)arg1;	// IMP=0x00000000013547fc
@property(readonly, nonatomic) NSDate *lastFullScheduleValidDate;
@property(readonly, nonatomic) double timeToLive;
@property(readonly, nonatomic) NSArray *departureSequences;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool isTransitIncidentsTTLExpired;
@property(readonly, nonatomic) NSArray *incidents;
- (id)linesForSystem:(id)arg1;	// IMP=0x0000000001353a96
@property(readonly, nonatomic) unsigned long long linesCount;
@property(readonly, nonatomic) NSArray *lines;
@property(readonly, nonatomic) unsigned long long systemsCount;
@property(readonly, nonatomic) NSArray *systems;
@property(readonly, nonatomic) NSArray *connections;
@property(readonly, nonatomic) NSArray *labelItems;
- (id)initWithTransitInfo:(id)arg1 schedule:(id)arg2 timeZone:(id)arg3 incidents:(id)arg4 hasTransitIncidentComponent:(_Bool)arg5 incidentExpirationDate:(id)arg6 providerID:(int)arg7 coordinate:(CDStruct_c3b9c2ee)arg8 transitStops:(id)arg9 composedRoute:(id)arg10 nearbySchedule:(id)arg11;	// IMP=0x000000000135308e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

