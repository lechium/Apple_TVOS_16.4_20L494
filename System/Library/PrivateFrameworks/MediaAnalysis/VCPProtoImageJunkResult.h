//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageJunkResult : PBCodable
{
    float _confidence;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000ba9a3
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021fa27
- (unsigned long long)hash;	// IMP=0x000000000021f947
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021f8da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f885
- (void)copyTo:(id)arg1;	// IMP=0x000000000021f86e
- (void)writeTo:(id)arg1;	// IMP=0x000000000021f850
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021f843
- (id)dictionaryRepresentation;	// IMP=0x000000000021f61c
- (id)description;	// IMP=0x000000000021f56d
- (id)exportToLegacyDictionary;	// IMP=0x00000000000baa8b

@end

