//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocatedInsideInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _muid;	// 16 = 0x10
    int _featureType;	// 24 = 0x18
    struct {
        unsigned int has_muid:1;
        unsigned int has_featureType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000003ff266
- (unsigned long long)hash;	// IMP=0x00000000003ff220
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ff16d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ff0cf
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ff042
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ff033
- (id)jsonRepresentation;	// IMP=0x00000000003febc9
- (id)dictionaryRepresentation;	// IMP=0x00000000003fe97d
- (id)description;	// IMP=0x00000000003fe8ce

@end
