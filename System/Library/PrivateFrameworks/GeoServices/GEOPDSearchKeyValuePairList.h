//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValuePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003f39f3
- (unsigned long long)hash;	// IMP=0x00000000003f38b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f381d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f3680
- (void)writeTo:(id)arg1;	// IMP=0x00000000003f3550
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003f3541
- (id)jsonRepresentation;	// IMP=0x00000000003f2bf6
- (id)dictionaryRepresentation;	// IMP=0x00000000003f2987
- (id)description;	// IMP=0x00000000003f28d8

@end
