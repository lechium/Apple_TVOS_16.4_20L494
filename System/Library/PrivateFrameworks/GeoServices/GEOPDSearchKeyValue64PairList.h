//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValue64PairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003ed457
- (unsigned long long)hash;	// IMP=0x00000000003ed43a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ed3a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ed203
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ed0d3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ececa
- (id)jsonRepresentation;	// IMP=0x00000000003ecebb
- (id)dictionaryRepresentation;	// IMP=0x00000000003ecc4c
- (id)description;	// IMP=0x00000000003ecb9d

@end

