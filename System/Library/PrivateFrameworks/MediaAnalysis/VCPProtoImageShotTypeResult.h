//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageShotTypeResult : PBCodable
{
    int _shotType;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000263dd6
@property(nonatomic) int shotType; // @synthesize shotType=_shotType;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ac3cc
- (unsigned long long)hash;	// IMP=0x00000000000ac3b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac355
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ac304
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ac2f1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ac2d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ac2c8
- (id)dictionaryRepresentation;	// IMP=0x00000000000ac078
- (id)description;	// IMP=0x00000000000abfc9
- (id)exportToLegacyDictionary;	// IMP=0x0000000000263ec0

@end

