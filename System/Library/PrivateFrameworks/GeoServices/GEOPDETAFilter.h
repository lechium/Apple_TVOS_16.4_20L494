//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOAutomobileOptions, GEOClientCapabilities, GEOCyclingOptions, GEOTransitOptions, GEOWalkingOptions, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDETAFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _transportTypes;	// 24 = 0x18
    GEOAutomobileOptions *_automobileOptions;	// 48 = 0x30
    GEOClientCapabilities *_clientCapabilities;	// 56 = 0x38
    GEOCyclingOptions *_cyclingOptions;	// 64 = 0x40
    GEOTransitOptions *_transitOptions;	// 72 = 0x48
    GEOWalkingOptions *_walkingOptions;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    _Bool _includeEtaRouteIncidents;	// 100 = 0x64
    _Bool _includeHistoricTravelTime;	// 101 = 0x65
    _Bool _includeRouteTrafficDetail;	// 102 = 0x66
    struct {
        unsigned int has_includeEtaRouteIncidents:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeRouteTrafficDetail:1;
        unsigned int read_unknownFields:1;
        unsigned int read_transportTypes:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_cyclingOptions:1;
        unsigned int read_transitOptions:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 104 = 0x68
}

+ (id)_etaFilterWithTransportTypes:(int *)arg1 transportTypesCount:(unsigned long long)arg2 automobileOptions:(id)arg3 transitOptions:(id)arg4 walkingOptions:(id)arg5 cyclingOptions:(id)arg6;	// IMP=0x0010000000a4387f
+ (id)etaFilterForRouteAttributes:(id)arg1;	// IMP=0x0010000000a4365f
+ (id)etaFilterForTraits:(id)arg1;	// IMP=0x0010000000a43439
- (void).cxx_destruct;	// IMP=0x0000000000c07d2f
- (unsigned long long)hash;	// IMP=0x0000000000c07be4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c07992
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c076c8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c07424
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c07415
- (id)jsonRepresentation;	// IMP=0x0000000000c06b07
- (id)dictionaryRepresentation;	// IMP=0x0000000000c0624b
- (id)description;	// IMP=0x0000000000c0619c
- (void)dealloc;	// IMP=0x0000000000c04e52
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c04df6
- (id)init;	// IMP=0x0000000000c04d9a

@end

