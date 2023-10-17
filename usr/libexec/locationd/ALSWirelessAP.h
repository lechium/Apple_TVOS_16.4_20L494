//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation, NSString;

@interface ALSWirelessAP : PBCodable
{
    unsigned int _channel;	// 8 = 0x8
    ALSLocation *_location;	// 16 = 0x10
    NSString *_macID;	// 24 = 0x18
    unsigned int _numZaxisHarvestTraces;	// 32 = 0x20
    struct {
        unsigned int channel:1;
        unsigned int numZaxisHarvestTraces:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) unsigned int numZaxisHarvestTraces; // @synthesize numZaxisHarvestTraces=_numZaxisHarvestTraces;
@property(nonatomic) unsigned int channel; // @synthesize channel=_channel;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *macID; // @synthesize macID=_macID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000073c211
- (unsigned long long)hash;	// IMP=0x001000000073c177
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000073c08e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000073bfb0
- (void)copyTo:(id)arg1;	// IMP=0x001000000073bf26
- (void)writeTo:(id)arg1;	// IMP=0x001000000073be77
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000073be6a
- (id)dictionaryRepresentation;	// IMP=0x001000000073ba0d
- (id)description;	// IMP=0x001000000073b996
@property(nonatomic) _Bool hasNumZaxisHarvestTraces;
@property(nonatomic) _Bool hasChannel;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)dealloc;	// IMP=0x001000000073b89c

@end

