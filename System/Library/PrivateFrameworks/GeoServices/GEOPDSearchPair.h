//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchPair : PBCodable
{
    int _key;	// 8 = 0x8
    float _val;	// 12 = 0xc
}

- (unsigned long long)hash;	// IMP=0x0000000000ab6687
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ab65f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ab6593
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ab6532
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ab6523
- (id)jsonRepresentation;	// IMP=0x0000000000ab5f61
- (id)dictionaryRepresentation;	// IMP=0x0000000000ab5e6e
- (id)description;	// IMP=0x0000000000ab5dbf

@end
