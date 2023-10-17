//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NLPOIEntryImpl : PBCodable
{
    NSString *_category;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    float _score;	// 32 = 0x20
    struct {
        unsigned int score:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) float score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000551a6
- (unsigned long long)hash;	// IMP=0x0000000000055031
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054f36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054e4e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000054db8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000054d25
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000054d18
- (id)dictionaryRepresentation;	// IMP=0x000000000005499b
- (id)description;	// IMP=0x0000000000054924
@property(nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasDomain;
@property(readonly, nonatomic) _Bool hasName;
- (void)dealloc;	// IMP=0x0000000000054838

@end
