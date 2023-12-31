//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MPPMediaPredicateValue, NSString;

__attribute__((visibility("hidden")))
@interface MPPPropertyPredicate : PBCodable
{
    int _comparisonType;	// 8 = 0x8
    NSString *_property;	// 16 = 0x10
    MPPMediaPredicateValue *_value;	// 24 = 0x18
    struct {
        unsigned int comparisonType:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000250047
@property(nonatomic) int comparisonType; // @synthesize comparisonType=_comparisonType;
@property(retain, nonatomic) MPPMediaPredicateValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
- (unsigned long long)hash;	// IMP=0x000000000024ff78
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024fe96
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024fdd8
- (void)copyTo:(id)arg1;	// IMP=0x000000000024fcde
- (void)writeTo:(id)arg1;	// IMP=0x000000000024fbe4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024fbd7
- (id)dictionaryRepresentation;	// IMP=0x000000000024facd
- (id)description;	// IMP=0x000000000024fa1e
@property(nonatomic) _Bool hasComparisonType;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasProperty;
- (void)dealloc;	// IMP=0x000000000024f958

@end

