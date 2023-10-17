//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieOrientationResult : PBCodable
{
    int _orientation;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000001e26e5
- (void).cxx_destruct;	// IMP=0x000000000025567e
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002555ce
- (unsigned long long)hash;	// IMP=0x000000000025558f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002554e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000255461
- (void)copyTo:(id)arg1;	// IMP=0x0000000000255407
- (void)writeTo:(id)arg1;	// IMP=0x00000000002553a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025539b
- (id)dictionaryRepresentation;	// IMP=0x0000000000255061
- (id)description;	// IMP=0x0000000000254fb2
- (id)exportToLegacyDictionary;	// IMP=0x00000000001e289a

@end

