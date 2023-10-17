//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSceneprintResult : PBCodable
{
    NSData *_sceneprintBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000024ef5d
- (void).cxx_destruct;	// IMP=0x0000000000198a4d
@property(retain, nonatomic) NSData *sceneprintBlob; // @synthesize sceneprintBlob=_sceneprintBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000198986
- (unsigned long long)hash;	// IMP=0x0000000000198939
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000198871
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001987d3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000198762
- (void)writeTo:(id)arg1;	// IMP=0x0000000000198703
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001986f6
- (id)dictionaryRepresentation;	// IMP=0x0000000000198458
- (id)description;	// IMP=0x00000000001983a9
- (id)exportToLegacyDictionary;	// IMP=0x000000000024f113

@end
