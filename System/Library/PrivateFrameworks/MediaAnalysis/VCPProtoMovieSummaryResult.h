//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange, VCPProtoVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSummaryResult : PBCodable
{
    float _curationScore;	// 8 = 0x8
    VCPProtoVideoKeyFrame *_keyFrame;	// 16 = 0x10
    VCPProtoBounds *_playbackCrop;	// 24 = 0x18
    VCPProtoTimeRange *_timeRange;	// 32 = 0x20
    _Bool _autoPlayable;	// 40 = 0x28
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000afabe
- (void).cxx_destruct;	// IMP=0x00000000002402c2
@property(retain, nonatomic) VCPProtoBounds *playbackCrop; // @synthesize playbackCrop=_playbackCrop;
@property(nonatomic) _Bool autoPlayable; // @synthesize autoPlayable=_autoPlayable;
@property(retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000024011e
- (unsigned long long)hash;	// IMP=0x000000000023ffbd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023fe91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023fdad
- (void)copyTo:(id)arg1;	// IMP=0x000000000023fd0f
- (void)writeTo:(id)arg1;	// IMP=0x000000000023fc69
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023fc5c
- (id)dictionaryRepresentation;	// IMP=0x000000000023f755
- (id)description;	// IMP=0x000000000023f6a6
@property(readonly, nonatomic) _Bool hasPlaybackCrop;
@property(readonly, nonatomic) _Bool hasKeyFrame;
- (id)exportToLegacyDictionary;	// IMP=0x00000000000aff30

@end

