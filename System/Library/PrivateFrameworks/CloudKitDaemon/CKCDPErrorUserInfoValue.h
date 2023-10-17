//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CKCDPErrorUserInfoValue : PBCodable
{
    double _doubleValue;	// 8 = 0x8
    long long _int64Value;	// 16 = 0x10
    NSData *_bytesValue;	// 24 = 0x18
    NSString *_stringValue;	// 32 = 0x20
    int _value;	// 40 = 0x28
    _Bool _boolValue;	// 44 = 0x2c
    struct {
        unsigned int doubleValue:1;
        unsigned int int64Value:1;
        unsigned int value:1;
        unsigned int boolValue:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000027a027
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000279ef7
- (unsigned long long)hash;	// IMP=0x0000000000279d53
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000279bc6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000279aaa
- (void)copyTo:(id)arg1;	// IMP=0x00000000002799cf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000279901
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002798f4
- (id)dictionaryRepresentation;	// IMP=0x000000000027925a
- (id)description;	// IMP=0x00000000002791ab
- (void)clearOneofValuesForValue;	// IMP=0x000000000027911e
- (int)StringAsValue:(id)arg1;	// IMP=0x000000000027902f
- (id)valueAsString:(int)arg1;	// IMP=0x0000000000278fe6
@property(nonatomic) _Bool hasValue;
@property(nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) _Bool hasBytesValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasBoolValue;
@property(nonatomic) _Bool hasInt64Value;
@property(nonatomic) _Bool hasDoubleValue;

@end
