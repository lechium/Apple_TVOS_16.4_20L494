//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CPLCKAvailabilityResponse : PBCodable
{
    int _feature;	// 8 = 0x8
    _Bool _allowed;	// 12 = 0xc
    struct {
        unsigned int feature:1;
        unsigned int allowed:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool allowed; // @synthesize allowed=_allowed;
@property(nonatomic) int feature; // @synthesize feature=_feature;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000014636a
- (unsigned long long)hash;	// IMP=0x0010000000146324
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000146261
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001461e4
- (void)copyTo:(id)arg1;	// IMP=0x001000000014618a
- (void)writeTo:(id)arg1;	// IMP=0x0010000000146118
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000014610b
- (id)dictionaryRepresentation;	// IMP=0x0010000000145da2
- (id)description;	// IMP=0x0010000000145cf3
@property(nonatomic) _Bool hasAllowed;
- (int)StringAsFeature:(id)arg1;	// IMP=0x0010000000145c9d
- (id)featureAsString:(int)arg1;	// IMP=0x0010000000145c91
@property(nonatomic) _Bool hasFeature;

@end

