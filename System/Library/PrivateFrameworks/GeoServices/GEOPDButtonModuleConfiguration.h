//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDButtonModuleConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_buttonItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b603a3
- (unsigned long long)hash;	// IMP=0x0000000000b60386
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b602ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b6012c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b5ffcd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b5ffbe
- (id)jsonRepresentation;	// IMP=0x0000000000b5fc4e
- (id)dictionaryRepresentation;	// IMP=0x0000000000b5f8ab
- (id)description;	// IMP=0x0000000000b5f7fc

@end

