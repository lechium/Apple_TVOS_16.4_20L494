//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchMerchantLookupBrandResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_merchantLookupBrandResults;	// 16 = 0x10
    int _statusCode;	// 24 = 0x18
    CDStruct_ade9d5f7 _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000509816
- (unsigned long long)hash;	// IMP=0x00000000005097c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000509704
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000509523
- (void)writeTo:(id)arg1;	// IMP=0x000000000050939f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000509390
- (id)jsonRepresentation;	// IMP=0x0000000000508c38
- (id)dictionaryRepresentation;	// IMP=0x000000000050876f
- (id)description;	// IMP=0x00000000005086c0

@end
