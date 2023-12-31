//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieObstructionResult : PBCodable
{
    float _obstructionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000263feb
- (void).cxx_destruct;	// IMP=0x00000000001a746a
@property(nonatomic) float obstructionScore; // @synthesize obstructionScore=_obstructionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001a73b2
- (unsigned long long)hash;	// IMP=0x00000000001a72ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a71fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a7172
- (void)copyTo:(id)arg1;	// IMP=0x00000000001a7114
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a70b3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a70a6
- (id)dictionaryRepresentation;	// IMP=0x00000000001a6da7
- (id)description;	// IMP=0x00000000001a6cf8
- (id)exportToLegacyDictionary;	// IMP=0x0000000000264161

@end

