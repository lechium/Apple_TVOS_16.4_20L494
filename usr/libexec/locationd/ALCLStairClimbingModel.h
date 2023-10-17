//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLStairClimbingModel : PBCodable
{
    float _machineFrequency;	// 8 = 0x8
}

@property(nonatomic) float machineFrequency; // @synthesize machineFrequency=_machineFrequency;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000003d4054
- (unsigned long long)hash;	// IMP=0x00100000003d3f74
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003d3f28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003d3ed3
- (void)copyTo:(id)arg1;	// IMP=0x00100000003d3ebc
- (void)writeTo:(id)arg1;	// IMP=0x00100000003d3e9e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000003d3e91
- (id)dictionaryRepresentation;	// IMP=0x00100000003d3c89
- (id)description;	// IMP=0x00100000003d3c12

@end
