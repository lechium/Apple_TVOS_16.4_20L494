//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValueDictionary : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

+ (Class)pairType;	// IMP=0x001000000005200f
- (void).cxx_destruct;	// IMP=0x0000000000052a96
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005293c
- (unsigned long long)hash;	// IMP=0x000000000005291f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052885
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000526c2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000052603
- (void)writeTo:(id)arg1;	// IMP=0x00000000000524d3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000524c6
- (id)dictionaryRepresentation;	// IMP=0x00000000000520cf
- (id)description;	// IMP=0x0000000000052020
- (id)pairAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000051ff2
- (unsigned long long)pairsCount;	// IMP=0x0000000000051fd5
- (void)addPair:(id)arg1;	// IMP=0x0000000000051f6b
- (void)clearPairs;	// IMP=0x0000000000051f4e
@property(copy, nonatomic) NSDictionary *dictionary;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000050444

@end

