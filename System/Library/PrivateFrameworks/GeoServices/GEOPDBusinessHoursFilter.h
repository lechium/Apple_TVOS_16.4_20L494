//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessHoursFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b5be99
- (unsigned long long)hash;	// IMP=0x0000000000b5be91
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b5be4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b5bdf1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b5bdd4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b5bdc5
- (id)jsonRepresentation;	// IMP=0x0000000000b5bb05
- (id)dictionaryRepresentation;	// IMP=0x0000000000b5b99a
- (id)description;	// IMP=0x0000000000b5b8eb

@end

