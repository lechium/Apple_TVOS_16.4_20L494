//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PSAttribute : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009c1c5
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000009c118
- (unsigned long long)hash;	// IMP=0x001000000009c0cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009c003
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009bf65
- (void)copyTo:(id)arg1;	// IMP=0x001000000009bf02
- (void)writeTo:(id)arg1;	// IMP=0x001000000009bea5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000009be98
- (id)dictionaryRepresentation;	// IMP=0x001000000009bc80
- (id)description;	// IMP=0x001000000009bbd1
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end
