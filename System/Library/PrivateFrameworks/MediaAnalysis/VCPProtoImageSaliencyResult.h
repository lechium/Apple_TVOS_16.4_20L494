//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000005eb4f
- (void).cxx_destruct;	// IMP=0x00000000000a580c
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a5754
- (unsigned long long)hash;	// IMP=0x00000000000a5650
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a55a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a5517
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a54e3
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a547d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a5470
- (id)dictionaryRepresentation;	// IMP=0x00000000000a517b
- (id)description;	// IMP=0x00000000000a50cc
- (id)exportToLegacyDictionary;	// IMP=0x000000000005ecfb

@end

