//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStop : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_stopInfos;	// 16 = 0x10
}

+ (id)transitTripStopForPlaceData:(id)arg1;	// IMP=0x0010000000a3a17f
- (void).cxx_destruct;	// IMP=0x0000000000cfcdc2
- (unsigned long long)hash;	// IMP=0x0000000000cfcda5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cfcd0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cfcb4b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cfc9ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cfc9dd
- (id)jsonRepresentation;	// IMP=0x0000000000cfc8cb
- (id)dictionaryRepresentation;	// IMP=0x0000000000cfc528
- (id)description;	// IMP=0x0000000000cfc479

@end
