//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPathComputationOptions : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _pathComputationMethod;	// 16 = 0x10
    struct {
        unsigned int has_pathComputationMethod:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000147247c
- (unsigned long long)hash;	// IMP=0x0000000001472451
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014723bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000147233f
- (void)writeTo:(id)arg1;	// IMP=0x00000000014722dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014722ce
- (id)jsonRepresentation;	// IMP=0x00000000014721bc
- (id)dictionaryRepresentation;	// IMP=0x0000000001471fcd
- (id)description;	// IMP=0x0000000001471f1e

@end
