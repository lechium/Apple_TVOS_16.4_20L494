//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieClassificationResult : PBCodable
{
    NSMutableArray *_classifications;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (Class)classificationType;	// IMP=0x00100000000806ef
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000b3a61
- (void).cxx_destruct;	// IMP=0x0000000000081341
@property(retain, nonatomic) NSMutableArray *classifications; // @synthesize classifications=_classifications;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000081163
- (unsigned long long)hash;	// IMP=0x0000000000081116
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008104e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080e75
- (void)copyTo:(id)arg1;	// IMP=0x0000000000080d93
- (void)writeTo:(id)arg1;	// IMP=0x0000000000080c4b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000080c3e
- (id)dictionaryRepresentation;	// IMP=0x00000000000807af
- (id)description;	// IMP=0x0000000000080700
- (id)classificationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000806d2
- (unsigned long long)classificationsCount;	// IMP=0x00000000000806b5
- (void)addClassification:(id)arg1;	// IMP=0x000000000008064b
- (void)clearClassifications;	// IMP=0x000000000008062e
- (id)exportToLegacyDictionary;	// IMP=0x00000000000b3d15

@end
