//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStopTime : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_departureSequences;	// 16 = 0x10
}

+ (id)transitTripStopTimeForPlaceData:(id)arg1;	// IMP=0x0010000000a3a2bb
- (void).cxx_destruct;	// IMP=0x0000000000cfdbc3
- (unsigned long long)hash;	// IMP=0x0000000000cfdba6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cfdb0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cfd94c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cfd7ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cfd7de
- (id)jsonRepresentation;	// IMP=0x0000000000cfd6cc
- (id)dictionaryRepresentation;	// IMP=0x0000000000cfd329
- (id)description;	// IMP=0x0000000000cfd27a

@end

