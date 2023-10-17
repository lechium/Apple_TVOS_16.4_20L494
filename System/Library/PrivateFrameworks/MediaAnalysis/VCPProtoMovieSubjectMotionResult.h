//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSubjectMotionResult : PBCodable
{
    VCPProtoTimeRange *_timeRange;	// 8 = 0x8
    _Bool _hasAction;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000001f7253
- (void).cxx_destruct;	// IMP=0x000000000019a19d
@property(nonatomic) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019a0ed
- (unsigned long long)hash;	// IMP=0x000000000019a0ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000199ffa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000199f74
- (void)copyTo:(id)arg1;	// IMP=0x0000000000199f1a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000199eba
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000199ead
- (id)dictionaryRepresentation;	// IMP=0x0000000000199b6f
- (id)description;	// IMP=0x0000000000199ac0
- (id)exportToLegacyDictionary;	// IMP=0x00000000001f73d1

@end
