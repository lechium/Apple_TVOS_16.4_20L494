//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageExposureResult : PBCodable
{
    float _exposure;	// 8 = 0x8
    float _underExpose;	// 12 = 0xc
    struct {
        unsigned int underExpose:1;
    } _has;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000078e03
@property(nonatomic) float underExpose; // @synthesize underExpose=_underExpose;
@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000127610
- (unsigned long long)hash;	// IMP=0x000000000012743c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000127390
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000127319
- (void)copyTo:(id)arg1;	// IMP=0x00000000001272e0
- (void)writeTo:(id)arg1;	// IMP=0x000000000012727e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000127271
- (id)dictionaryRepresentation;	// IMP=0x0000000000126f71
- (id)description;	// IMP=0x0000000000126ec2
@property(nonatomic) _Bool hasUnderExpose;
- (id)exportToLegacyDictionary;	// IMP=0x0000000000078fa2

@end

