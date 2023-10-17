//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2BandwidthSettings : PBCodable
{
    unsigned int _cap2G;	// 8 = 0x8
    unsigned int _cap3G;	// 12 = 0xc
    unsigned int _cap5G;	// 16 = 0x10
    unsigned int _capLTE;	// 20 = 0x14
    unsigned int _capWifi;	// 24 = 0x18
    struct {
        unsigned int cap2G:1;
        unsigned int cap3G:1;
        unsigned int cap5G:1;
        unsigned int capLTE:1;
        unsigned int capWifi:1;
    } _has;	// 28 = 0x1c
}

+ (id)filteredSetForOperatingMode:(int)arg1 bandwidthConfigurations:(id)arg2;	// IMP=0x0010000000163de1
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002c13a0
- (unsigned long long)hash;	// IMP=0x00000000002c1309
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c1216
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c114e
- (void)copyTo:(id)arg1;	// IMP=0x00000000002c10c4
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c0ffd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c0ff0
- (id)dictionaryRepresentation;	// IMP=0x00000000002c0a33
- (id)description;	// IMP=0x00000000002c0999
@property(nonatomic) _Bool hasCapWifi;
@property(nonatomic) unsigned int capWifi; // @synthesize capWifi=_capWifi;
@property(nonatomic) _Bool hasCap5G;
@property(nonatomic) unsigned int cap5G; // @synthesize cap5G=_cap5G;
@property(nonatomic) _Bool hasCapLTE;
@property(nonatomic) unsigned int capLTE; // @synthesize capLTE=_capLTE;
@property(nonatomic) _Bool hasCap3G;
@property(nonatomic) unsigned int cap3G; // @synthesize cap3G=_cap3G;
@property(nonatomic) _Bool hasCap2G;
@property(nonatomic) unsigned int cap2G; // @synthesize cap2G=_cap2G;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001640b8
- (_Bool)setupCapForBandwidthConfiguration:(id)arg1;	// IMP=0x000000000016400c
- (void)setupCapWifi:(unsigned int)arg1;	// IMP=0x0000000000163da6
- (void)setupCap5G:(unsigned int)arg1;	// IMP=0x0000000000163d6b
- (void)setupCapLTE:(unsigned int)arg1;	// IMP=0x0000000000163d30
- (void)setupCap3G:(unsigned int)arg1;	// IMP=0x0000000000163cf5
- (void)setupCap2G:(unsigned int)arg1;	// IMP=0x0000000000163cba
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x0000000000163b02
- (_Bool)isDefaultSettings;	// IMP=0x0000000000163ac2
- (id)bandwidthConfigurations;	// IMP=0x00000000001636da
- (id)initWithBandwidthConfigurations:(id)arg1;	// IMP=0x0000000000163484

@end

