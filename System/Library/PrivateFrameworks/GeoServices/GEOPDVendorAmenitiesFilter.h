//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorAmenitiesFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d01c0a
- (unsigned long long)hash;	// IMP=0x0000000000d01c02
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d01bbd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d01b62
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d01b45
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d01b36
- (id)jsonRepresentation;	// IMP=0x0000000000d01a24
- (id)dictionaryRepresentation;	// IMP=0x0000000000d018b9
- (id)description;	// IMP=0x0000000000d0180a

@end

