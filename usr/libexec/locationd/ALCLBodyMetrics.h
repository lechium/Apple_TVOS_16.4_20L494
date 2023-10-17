//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLBodyMetrics : PBCodable
{
    float _age;	// 8 = 0x8
    int _gender;	// 12 = 0xc
    float _heightM;	// 16 = 0x10
    float _hrmax;	// 20 = 0x14
    float _hrmin;	// 24 = 0x18
    float _hronset;	// 28 = 0x1c
    float _pal;	// 32 = 0x20
    float _vo2max;	// 36 = 0x24
    float _weightKG;	// 40 = 0x28
}

@property(nonatomic) float pal; // @synthesize pal=_pal;
@property(nonatomic) float hronset; // @synthesize hronset=_hronset;
@property(nonatomic) float hrmax; // @synthesize hrmax=_hrmax;
@property(nonatomic) float hrmin; // @synthesize hrmin=_hrmin;
@property(nonatomic) float age; // @synthesize age=_age;
@property(nonatomic) float vo2max; // @synthesize vo2max=_vo2max;
@property(nonatomic) float weightKG; // @synthesize weightKG=_weightKG;
@property(nonatomic) float heightM; // @synthesize heightM=_heightM;
@property(nonatomic) int gender; // @synthesize gender=_gender;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000106048
- (unsigned long long)hash;	// IMP=0x0010000000105958
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000105851
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000105778
- (void)copyTo:(id)arg1;	// IMP=0x00100000001056dd
- (void)writeTo:(id)arg1;	// IMP=0x00100000001055ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001055e0
- (id)dictionaryRepresentation;	// IMP=0x0010000000104f5d
- (id)description;	// IMP=0x0010000000104ee6
- (int)StringAsGender:(id)arg1;	// IMP=0x0010000000104e9f
- (id)genderAsString:(int)arg1;	// IMP=0x0010000000104e60

@end
