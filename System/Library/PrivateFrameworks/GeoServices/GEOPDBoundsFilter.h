//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBoundsFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b51a54
- (unsigned long long)hash;	// IMP=0x0000000000b51a4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b51a07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b519ac
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b5198f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b51980
- (id)jsonRepresentation;	// IMP=0x0000000000b516c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000b51555
- (id)description;	// IMP=0x0000000000b514a6

@end

