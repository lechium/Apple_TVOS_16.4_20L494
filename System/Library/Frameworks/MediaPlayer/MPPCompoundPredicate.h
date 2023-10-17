//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MPPCompoundPredicate : PBCodable
{
    NSMutableArray *_predicates;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003c80e
@property(retain, nonatomic) NSMutableArray *predicates; // @synthesize predicates=_predicates;
- (unsigned long long)hash;	// IMP=0x000000000003c7cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003c751
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c58e
- (void)copyTo:(id)arg1;	// IMP=0x000000000003c4cf
- (void)writeTo:(id)arg1;	// IMP=0x000000000003c2df
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003c2d2
- (id)dictionaryRepresentation;	// IMP=0x000000000003c09f
- (id)description;	// IMP=0x000000000003bff0
- (id)predicatesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003bfd3
- (unsigned long long)predicatesCount;	// IMP=0x000000000003bfb6
- (void)addPredicates:(id)arg1;	// IMP=0x000000000003bf4c
- (void)clearPredicates;	// IMP=0x000000000003bf2f
- (void)dealloc;	// IMP=0x000000000003beef

@end

