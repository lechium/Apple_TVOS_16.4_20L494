//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionItemFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_itemIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c8b215
- (unsigned long long)hash;	// IMP=0x0000000000c8b1f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c8b15e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c8af9e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c8ae3f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c8ae30
- (id)jsonRepresentation;	// IMP=0x0000000000c8ad1e
- (id)dictionaryRepresentation;	// IMP=0x0000000000c8a97b
- (id)description;	// IMP=0x0000000000c8a8cc

@end

