//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b35717
- (unsigned long long)hash;	// IMP=0x0000000000b3570f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b356ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b3566f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b35652
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b35643
- (id)jsonRepresentation;	// IMP=0x0000000000b35383
- (id)dictionaryRepresentation;	// IMP=0x0000000000b35218
- (id)description;	// IMP=0x0000000000b35169

@end
