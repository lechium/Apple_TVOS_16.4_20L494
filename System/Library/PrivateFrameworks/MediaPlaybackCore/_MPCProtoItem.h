//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _MPCProtoItemIdentifierSet;

__attribute__((visibility("hidden")))
@interface _MPCProtoItem : PBCodable
{
    _MPCProtoItemIdentifierSet *_identifierSet;	// 8 = 0x8
    int _mediaType;	// 16 = 0x10
    _Bool _excludeFromShuffle;	// 20 = 0x14
    struct {
        unsigned int mediaType:1;
        unsigned int excludeFromShuffle:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001478d7
- (unsigned long long)hash;	// IMP=0x0000000000147860
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000147765
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001476b1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000147624
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000147617
- (id)dictionaryRepresentation;	// IMP=0x00000000001474d5
- (id)description;	// IMP=0x0000000000147426

@end

