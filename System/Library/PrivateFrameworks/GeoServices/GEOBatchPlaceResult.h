//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPlaceResult;

__attribute__((visibility("hidden")))
@interface GEOBatchPlaceResult : PBCodable
{
    GEOPlaceResult *_placeResult;	// 8 = 0x8
    int _statusCode;	// 16 = 0x10
    CDStruct_ade9d5f7 _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000010b7328
- (unsigned long long)hash;	// IMP=0x00000000010b72db
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010b7216
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010b7186
- (void)writeTo:(id)arg1;	// IMP=0x00000000010b704e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010b703f
- (id)jsonRepresentation;	// IMP=0x00000000010b6d84
- (id)dictionaryRepresentation;	// IMP=0x00000000010b6bac
- (id)description;	// IMP=0x00000000010b6afd

@end

