//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMoviePetsFaceResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000022517c
- (void).cxx_destruct;	// IMP=0x000000000005da62
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005d94b
- (unsigned long long)hash;	// IMP=0x000000000005d81b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d73a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d68a
- (void)copyTo:(id)arg1;	// IMP=0x000000000005d607
- (void)writeTo:(id)arg1;	// IMP=0x000000000005d58e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005d581
- (id)dictionaryRepresentation;	// IMP=0x000000000005d1e4
- (id)description;	// IMP=0x000000000005d135
- (id)exportToLegacyDictionary;	// IMP=0x00000000002253f5

@end

