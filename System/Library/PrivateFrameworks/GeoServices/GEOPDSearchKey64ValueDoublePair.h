//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValueDoublePair : PBCodable
{
    unsigned long long _key;	// 8 = 0x8
    double _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x00000000003e7977
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e78be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e783b
- (void)writeTo:(id)arg1;	// IMP=0x00000000003e77c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003e77ba
- (id)jsonRepresentation;	// IMP=0x00000000003e74dd
- (id)dictionaryRepresentation;	// IMP=0x00000000003e73cf
- (id)description;	// IMP=0x00000000003e7320

@end

