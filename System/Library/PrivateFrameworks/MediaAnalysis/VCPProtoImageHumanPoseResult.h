//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageHumanPoseResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    int _flags;	// 20 = 0x14
    NSMutableArray *_keypoints;	// 24 = 0x18
}

+ (Class)keypointsType;	// IMP=0x00100000000628c9
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002634b8
- (void).cxx_destruct;	// IMP=0x00000000000638b3
@property(retain, nonatomic) NSMutableArray *keypoints; // @synthesize keypoints=_keypoints;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006365d
- (unsigned long long)hash;	// IMP=0x0000000000063516
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063427
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006322e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000063129
- (void)writeTo:(id)arg1;	// IMP=0x0000000000062fad
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000062fa0
- (id)dictionaryRepresentation;	// IMP=0x0000000000062989
- (id)description;	// IMP=0x00000000000628da
- (id)keypointsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000628ac
- (unsigned long long)keypointsCount;	// IMP=0x000000000006288f
- (void)addKeypoints:(id)arg1;	// IMP=0x0000000000062825
- (void)clearKeypoints;	// IMP=0x0000000000062808
- (id)exportToLegacyDictionary;	// IMP=0x000000000026371d

@end
