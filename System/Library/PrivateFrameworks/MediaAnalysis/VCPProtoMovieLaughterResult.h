//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieLaughterResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002729b8
- (void).cxx_destruct;	// IMP=0x00000000000031a2
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000030ea
- (unsigned long long)hash;	// IMP=0x0000000000002fe3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002f34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002eaa
- (void)copyTo:(id)arg1;	// IMP=0x0000000000002e4c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000002deb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000002dde
- (id)dictionaryRepresentation;	// IMP=0x0000000000002adf
- (id)description;	// IMP=0x0000000000002a30
- (id)exportToLegacyDictionary;	// IMP=0x0000000000272b2e

@end

