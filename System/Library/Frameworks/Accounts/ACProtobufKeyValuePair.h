//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufKeyValuePair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004f3f0
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004f343
- (unsigned long long)hash;	// IMP=0x000000000004f2f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004f22e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f190
- (void)copyTo:(id)arg1;	// IMP=0x000000000004f11f
- (void)writeTo:(id)arg1;	// IMP=0x000000000004f0c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004f0b3
- (id)dictionaryRepresentation;	// IMP=0x000000000004ee9b
- (id)description;	// IMP=0x000000000004edec
- (id)initWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000004fe57

@end

