//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCollectionIds : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_collectionIds;	// 16 = 0x10
}

+ (id)collectionIdComponentForPlaceData:(id)arg1;	// IMP=0x0010000000a41941
- (void).cxx_destruct;	// IMP=0x0000000000b79ddb
- (unsigned long long)hash;	// IMP=0x0000000000b79dbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b79d24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b79b64
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b79a05
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b799f6
- (id)jsonRepresentation;	// IMP=0x0000000000b79686
- (id)dictionaryRepresentation;	// IMP=0x0000000000b792e3
- (id)description;	// IMP=0x0000000000b79234

@end

