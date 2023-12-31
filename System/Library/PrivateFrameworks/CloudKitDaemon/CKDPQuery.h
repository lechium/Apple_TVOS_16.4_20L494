//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPQuery : PBCodable
{
    NSMutableArray *_filters;	// 8 = 0x8
    int _queryOperator;	// 16 = 0x10
    NSMutableArray *_sorts;	// 24 = 0x18
    NSMutableArray *_types;	// 32 = 0x20
    _Bool _distinct;	// 40 = 0x28
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;	// 44 = 0x2c
}

+ (Class)sortsType;	// IMP=0x001000000017966d
+ (Class)filtersType;	// IMP=0x001000000017959b
+ (Class)typesType;	// IMP=0x00100000001794c9
- (void).cxx_destruct;	// IMP=0x000000000017b302
@property(nonatomic) _Bool distinct; // @synthesize distinct=_distinct;
@property(retain, nonatomic) NSMutableArray *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000017aefe
- (unsigned long long)hash;	// IMP=0x000000000017ae42
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017ace8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017a853
- (void)copyTo:(id)arg1;	// IMP=0x000000000017a63c
- (void)writeTo:(id)arg1;	// IMP=0x000000000017a2f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017a2ec
- (id)dictionaryRepresentation;	// IMP=0x000000000017989a
- (id)description;	// IMP=0x00000000001797eb
- (int)StringAsQueryOperator:(id)arg1;	// IMP=0x0000000000179784
- (id)queryOperatorAsString:(int)arg1;	// IMP=0x000000000017972e
@property(nonatomic) _Bool hasQueryOperator;
@property(nonatomic) int queryOperator; // @synthesize queryOperator=_queryOperator;
@property(nonatomic) _Bool hasDistinct;
- (id)sortsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000179650
- (unsigned long long)sortsCount;	// IMP=0x0000000000179633
- (void)addSorts:(id)arg1;	// IMP=0x00000000001795c9
- (void)clearSorts;	// IMP=0x00000000001795ac
- (id)filtersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017957e
- (unsigned long long)filtersCount;	// IMP=0x0000000000179561
- (void)addFilters:(id)arg1;	// IMP=0x00000000001794f7
- (void)clearFilters;	// IMP=0x00000000001794da
- (id)typesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001794ac
- (unsigned long long)typesCount;	// IMP=0x000000000017948f
- (void)addTypes:(id)arg1;	// IMP=0x0000000000179425
- (void)clearTypes;	// IMP=0x0000000000179408

@end

