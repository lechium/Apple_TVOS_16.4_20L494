//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MPPCompoundPredicate, MPPConditionalPredicate, MPPPersistentIDsPredicate, MPPPropertyPredicate, MPPSearchStringPredicate;

__attribute__((visibility("hidden")))
@interface MPPMediaPredicate : PBCodable
{
    MPPCompoundPredicate *_compoundPredicate;	// 8 = 0x8
    MPPConditionalPredicate *_conditionalPredicate;	// 16 = 0x10
    MPPPersistentIDsPredicate *_persistentIDsPredicate;	// 24 = 0x18
    MPPPropertyPredicate *_propertyPredicate;	// 32 = 0x20
    MPPSearchStringPredicate *_searchStringPredicate;	// 40 = 0x28
    int _type;	// 48 = 0x30
    struct {
        unsigned int type:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000002fae2a
@property(retain, nonatomic) MPPSearchStringPredicate *searchStringPredicate; // @synthesize searchStringPredicate=_searchStringPredicate;
@property(retain, nonatomic) MPPPersistentIDsPredicate *persistentIDsPredicate; // @synthesize persistentIDsPredicate=_persistentIDsPredicate;
@property(retain, nonatomic) MPPConditionalPredicate *conditionalPredicate; // @synthesize conditionalPredicate=_conditionalPredicate;
@property(retain, nonatomic) MPPCompoundPredicate *compoundPredicate; // @synthesize compoundPredicate=_compoundPredicate;
@property(retain, nonatomic) MPPPropertyPredicate *propertyPredicate; // @synthesize propertyPredicate=_propertyPredicate;
@property(nonatomic) int type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x00000000002fac8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fab14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002fa9e2
- (void)copyTo:(id)arg1;	// IMP=0x00000000002fa804
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fa559
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fa54c
- (id)dictionaryRepresentation;	// IMP=0x00000000002fa339
- (id)description;	// IMP=0x00000000002fa28a
@property(readonly, nonatomic) _Bool hasSearchStringPredicate;
@property(readonly, nonatomic) _Bool hasPersistentIDsPredicate;
@property(readonly, nonatomic) _Bool hasConditionalPredicate;
@property(readonly, nonatomic) _Bool hasCompoundPredicate;
@property(readonly, nonatomic) _Bool hasPropertyPredicate;
@property(nonatomic) _Bool hasType;
- (void)dealloc;	// IMP=0x00000000002fa158

@end
