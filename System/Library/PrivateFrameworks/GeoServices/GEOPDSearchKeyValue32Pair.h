//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValue32Pair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    unsigned int _value;	// 16 = 0x10
    CDStruct_38ef1b98 _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000003ebb90
- (unsigned long long)hash;	// IMP=0x00000000003ebb3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003eba7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003eb9e5
- (void)writeTo:(id)arg1;	// IMP=0x00000000003eb981
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003eb974
- (id)jsonRepresentation;	// IMP=0x00000000003eb6e3
- (id)dictionaryRepresentation;	// IMP=0x00000000003eb60c
- (id)description;	// IMP=0x00000000003eb55d

@end
