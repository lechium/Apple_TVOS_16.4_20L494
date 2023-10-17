//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOverallFilterReason : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _proxyErrorHttpStatus;	// 16 = 0x10
    int _reasonType;	// 20 = 0x14
    struct {
        unsigned int has_proxyErrorHttpStatus:1;
        unsigned int has_reasonType:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000e03cf2
- (unsigned long long)hash;	// IMP=0x0000000000e03cad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e03bfa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e03b5d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e03ad1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e037a5
- (id)jsonRepresentation;	// IMP=0x0000000000e03693
- (id)dictionaryRepresentation;	// IMP=0x0000000000e03430
- (id)description;	// IMP=0x0000000000e03381

@end

