//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MPPMediaQuery : PBCodable
{
    int _entityOrder;	// 8 = 0x8
    NSMutableArray *_filterPredicates;	// 16 = 0x10
    int _groupingType;	// 24 = 0x18
    NSMutableArray *_staticEntityIdentifiers;	// 32 = 0x20
    int _staticEntityType;	// 40 = 0x28
    _Bool _filteringDisabled;	// 44 = 0x2c
    _Bool _includeNonLibraryEntities;	// 45 = 0x2d
    struct {
        unsigned int entityOrder:1;
        unsigned int groupingType:1;
        unsigned int staticEntityType:1;
        unsigned int filteringDisabled:1;
        unsigned int includeNonLibraryEntities:1;
    } _has;	// 48 = 0x30
}

+ (Class)staticEntityIdentifiersType;	// IMP=0x0010000000190076
+ (Class)filterPredicatesType;	// IMP=0x0010000000190065
- (void).cxx_destruct;	// IMP=0x0000000000190034
@property(nonatomic) _Bool includeNonLibraryEntities; // @synthesize includeNonLibraryEntities=_includeNonLibraryEntities;
@property(retain, nonatomic) NSMutableArray *staticEntityIdentifiers; // @synthesize staticEntityIdentifiers=_staticEntityIdentifiers;
@property(nonatomic) _Bool filteringDisabled; // @synthesize filteringDisabled=_filteringDisabled;
@property(retain, nonatomic) NSMutableArray *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018fcf7
- (unsigned long long)hash;	// IMP=0x000000000018fbf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018fa39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018f689
- (void)copyTo:(id)arg1;	// IMP=0x000000000018f4ac
- (void)writeTo:(id)arg1;	// IMP=0x000000000018f1e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018ece0
- (id)dictionaryRepresentation;	// IMP=0x000000000018e5de
- (id)description;	// IMP=0x000000000018e52f
@property(nonatomic) _Bool hasIncludeNonLibraryEntities;
- (int)StringAsStaticEntityType:(id)arg1;	// IMP=0x000000000018e47d
- (id)staticEntityTypeAsString:(int)arg1;	// IMP=0x000000000018e427
@property(nonatomic) _Bool hasStaticEntityType;
@property(nonatomic) int staticEntityType; // @synthesize staticEntityType=_staticEntityType;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018e39d
- (unsigned long long)staticEntityIdentifiersCount;	// IMP=0x000000000018e380
- (void)addStaticEntityIdentifiers:(id)arg1;	// IMP=0x000000000018e316
- (void)clearStaticEntityIdentifiers;	// IMP=0x000000000018e2f9
- (int)StringAsEntityOrder:(id)arg1;	// IMP=0x000000000018e25c
- (id)entityOrderAsString:(int)arg1;	// IMP=0x000000000018e211
@property(nonatomic) _Bool hasEntityOrder;
@property(nonatomic) int entityOrder; // @synthesize entityOrder=_entityOrder;
@property(nonatomic) _Bool hasFilteringDisabled;
- (int)StringAsGroupingType:(id)arg1;	// IMP=0x000000000018df7c
- (id)groupingTypeAsString:(int)arg1;	// IMP=0x000000000018de69
@property(nonatomic) _Bool hasGroupingType;
@property(nonatomic) int groupingType; // @synthesize groupingType=_groupingType;
- (id)filterPredicatesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018dde1
- (unsigned long long)filterPredicatesCount;	// IMP=0x000000000018ddc4
- (void)addFilterPredicates:(id)arg1;	// IMP=0x000000000018dd5a
- (void)clearFilterPredicates;	// IMP=0x000000000018dd3d

@end

