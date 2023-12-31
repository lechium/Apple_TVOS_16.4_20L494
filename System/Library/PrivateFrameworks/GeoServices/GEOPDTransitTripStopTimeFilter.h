//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDDeparturePredicate, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStopTimeFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDDeparturePredicate *_departurePredicateCountdown;	// 24 = 0x18
    GEOPDDeparturePredicate *_departurePredicateStamp;	// 32 = 0x20
    struct GEOPDTimeRange _operatingHoursRange;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 52 = 0x34
    unsigned int _readerMarkLength;	// 56 = 0x38
    struct os_unfair_lock_s _readerLock;	// 60 = 0x3c
    _Bool _includeRealTimeDepartures;	// 64 = 0x40
    CDStruct_dc7e0232 _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000cff140
- (unsigned long long)hash;	// IMP=0x0000000000cff095
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cfef47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cfed2b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cfeb22
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cfeb13
- (id)jsonRepresentation;	// IMP=0x0000000000cfea01
- (id)dictionaryRepresentation;	// IMP=0x0000000000cfe566
- (id)description;	// IMP=0x0000000000cfe4b7
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cfdc50
- (id)init;	// IMP=0x0000000000cfdbf4

@end

