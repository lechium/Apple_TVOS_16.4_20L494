//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AMPMusicFeature : PBCodable
{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _values;	// 8 = 0x8
    NSString *_key;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006fb8f
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006fac4
- (unsigned long long)hash;	// IMP=0x001000000006fa88
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006f9d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006f94b
- (void)copyTo:(id)arg1;	// IMP=0x001000000006f888
- (void)writeTo:(id)arg1;	// IMP=0x001000000006f80f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006f802
- (id)dictionaryRepresentation;	// IMP=0x001000000006f761
- (id)description;	// IMP=0x001000000006f6b2
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000006f69b
- (float)valueAtIndex:(unsigned long long)arg1;	// IMP=0x001000000006f5cc
- (void)addValue:(float)arg1;	// IMP=0x001000000006f5bb
- (void)clearValues;	// IMP=0x001000000006f5aa
@property(readonly, nonatomic) float *values;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(readonly, nonatomic) _Bool hasKey;
- (void)dealloc;	// IMP=0x001000000006f532

@end

