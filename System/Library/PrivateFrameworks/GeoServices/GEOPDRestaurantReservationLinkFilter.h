//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRestaurantReservationLinkFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cb3834
- (unsigned long long)hash;	// IMP=0x0000000000cb382c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb37e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb378c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb376f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb3760
- (id)jsonRepresentation;	// IMP=0x0000000000cb364e
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb34e3
- (id)description;	// IMP=0x0000000000cb3434

@end

