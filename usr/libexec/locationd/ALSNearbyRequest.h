//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class ALSMeta;

@interface ALSNearbyRequest : PBRequest
{
    CDStruct_95bda58d _wifiBands;	// 8 = 0x8
    long long _latitude;	// 32 = 0x20
    long long _longitude;	// 40 = 0x28
    ALSMeta *_meta;	// 48 = 0x30
    int _numberOfSurroundingWifis;	// 56 = 0x38
    int _radius;	// 60 = 0x3c
    int _technology;	// 64 = 0x40
    int _wifiAltitudeScale;	// 68 = 0x44
    int _wifiGranularity;	// 72 = 0x48
    _Bool _needCellsTowers;	// 76 = 0x4c
    struct {
        unsigned int numberOfSurroundingWifis:1;
        unsigned int radius:1;
        unsigned int technology:1;
        unsigned int wifiAltitudeScale:1;
        unsigned int wifiGranularity:1;
        unsigned int needCellsTowers:1;
    } _has;	// 80 = 0x50
}

@property(retain, nonatomic) ALSMeta *meta; // @synthesize meta=_meta;
@property(nonatomic) int radius; // @synthesize radius=_radius;
@property(nonatomic) int numberOfSurroundingWifis; // @synthesize numberOfSurroundingWifis=_numberOfSurroundingWifis;
@property(nonatomic) _Bool needCellsTowers; // @synthesize needCellsTowers=_needCellsTowers;
@property(nonatomic) long long longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long latitude; // @synthesize latitude=_latitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000072630a
- (unsigned long long)hash;	// IMP=0x00100000007261ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000072600d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000725ec2
- (void)copyTo:(id)arg1;	// IMP=0x0010000000725d49
- (Class)responseClass;	// IMP=0x0010000000725d38
- (unsigned int)requestTypeCode;	// IMP=0x0010000000725d2d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000725bb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000725bac
- (id)dictionaryRepresentation;	// IMP=0x0010000000724f78
- (id)description;	// IMP=0x0010000000724f01
@property(readonly, nonatomic) _Bool hasMeta;
- (int)StringAsWifiAltitudeScale:(id)arg1;	// IMP=0x0010000000724ea0
- (id)wifiAltitudeScaleAsString:(int)arg1;	// IMP=0x0010000000724e60
@property(nonatomic) _Bool hasWifiAltitudeScale;
@property(nonatomic) int wifiAltitudeScale; // @synthesize wifiAltitudeScale=_wifiAltitudeScale;
- (int)StringAsWifiBands:(id)arg1;	// IMP=0x0010000000724da7
- (id)wifiBandsAsString:(int)arg1;	// IMP=0x0010000000724d67
- (void)setWifiBands:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000724d50
- (int)wifiBandsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000724cb8
- (void)addWifiBands:(int)arg1;	// IMP=0x0010000000724ca5
- (void)clearWifiBands;	// IMP=0x0010000000724c94
@property(readonly, nonatomic) int *wifiBands;
@property(readonly, nonatomic) unsigned long long wifiBandsCount;
@property(nonatomic) _Bool hasRadius;
- (int)StringAsWifiGranularity:(id)arg1;	// IMP=0x0010000000724bbb
- (id)wifiGranularityAsString:(int)arg1;	// IMP=0x0010000000724b6d
@property(nonatomic) _Bool hasWifiGranularity;
@property(nonatomic) int wifiGranularity; // @synthesize wifiGranularity=_wifiGranularity;
- (int)StringAsTechnology:(id)arg1;	// IMP=0x00100000007249c8
- (id)technologyAsString:(int)arg1;	// IMP=0x00100000007248f3
@property(nonatomic) _Bool hasTechnology;
@property(nonatomic) int technology; // @synthesize technology=_technology;
@property(nonatomic) _Bool hasNumberOfSurroundingWifis;
@property(nonatomic) _Bool hasNeedCellsTowers;
- (void)dealloc;	// IMP=0x00100000007247a4

@end

