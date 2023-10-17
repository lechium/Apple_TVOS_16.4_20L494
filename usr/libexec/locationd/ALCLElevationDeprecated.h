//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLElevationDeprecated : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    unsigned int _elevationDescended;	// 12 = 0xc
    int _gradeType;	// 16 = 0x10
    float _verticalSpeed;	// 20 = 0x14
    struct {
        unsigned int elevationDescended:1;
        unsigned int gradeType:1;
        unsigned int verticalSpeed:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) float verticalSpeed; // @synthesize verticalSpeed=_verticalSpeed;
@property(nonatomic) unsigned int elevationDescended; // @synthesize elevationDescended=_elevationDescended;
@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000005b998f
- (unsigned long long)hash;	// IMP=0x00100000005b9842
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005b9787
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005b96e0
- (void)copyTo:(id)arg1;	// IMP=0x00100000005b9677
- (void)writeTo:(id)arg1;	// IMP=0x00100000005b95d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000005b95c8
- (id)dictionaryRepresentation;	// IMP=0x00100000005b90f4
- (id)description;	// IMP=0x00100000005b907d
@property(nonatomic) _Bool hasVerticalSpeed;
- (int)StringAsGradeType:(id)arg1;	// IMP=0x00100000005b8faa
- (id)gradeTypeAsString:(int)arg1;	// IMP=0x00100000005b8f71
@property(nonatomic) _Bool hasGradeType;
@property(nonatomic) int gradeType; // @synthesize gradeType=_gradeType;
@property(nonatomic) _Bool hasElevationDescended;

@end

