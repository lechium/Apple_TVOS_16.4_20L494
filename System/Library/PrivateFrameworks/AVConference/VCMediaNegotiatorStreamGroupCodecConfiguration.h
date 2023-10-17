//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorStreamGroupCodecConfiguration : NSObject
{
    long long _codecType;	// 8 = 0x8
    unsigned int _rtpPayload;	// 16 = 0x10
    unsigned long long _pTime;	// 24 = 0x18
    _Bool _rtcpRTPFB_GNACKEnabled;	// 32 = 0x20
    _Bool _rtcpPSFB_PLIEnabled;	// 33 = 0x21
    _Bool _rtcpPSFB_FIREnabled;	// 34 = 0x22
    _Bool _rtcpSREnabled;	// 35 = 0x23
    _Bool _H264LevelAsymmetryAllowed;	// 36 = 0x24
    _Bool _H264PacketizationMode;	// 37 = 0x25
    _Bool _useInBandFEC;	// 38 = 0x26
    unsigned long long _profileLevelId;	// 40 = 0x28
    unsigned long long _serializedSize;	// 48 = 0x30
    unsigned int _cipherSuite;	// 56 = 0x38
    unsigned int _encoderUsage;	// 60 = 0x3c
}

@property(nonatomic) unsigned int encoderUsage; // @synthesize encoderUsage=_encoderUsage;
@property(nonatomic) unsigned int cipherSuite; // @synthesize cipherSuite=_cipherSuite;
@property(nonatomic) unsigned long long serializedSize; // @synthesize serializedSize=_serializedSize;
@property(nonatomic) unsigned long long profileLevelId; // @synthesize profileLevelId=_profileLevelId;
@property(nonatomic) _Bool useInBandFEC; // @synthesize useInBandFEC=_useInBandFEC;
@property(nonatomic) _Bool H264PacketizationMode; // @synthesize H264PacketizationMode=_H264PacketizationMode;
@property(nonatomic) _Bool H264LevelAsymmetryAllowed; // @synthesize H264LevelAsymmetryAllowed=_H264LevelAsymmetryAllowed;
@property(nonatomic) _Bool rtcpSREnabled; // @synthesize rtcpSREnabled=_rtcpSREnabled;
@property(nonatomic) _Bool rtcpPSFB_FIREnabled; // @synthesize rtcpPSFB_FIREnabled=_rtcpPSFB_FIREnabled;
@property(nonatomic) _Bool rtcpPSFB_PLIEnabled; // @synthesize rtcpPSFB_PLIEnabled=_rtcpPSFB_PLIEnabled;
@property(nonatomic) _Bool rtcpRTPFB_GNACKEnabled; // @synthesize rtcpRTPFB_GNACKEnabled=_rtcpRTPFB_GNACKEnabled;
@property(nonatomic) unsigned long long pTime; // @synthesize pTime=_pTime;
@property(nonatomic) unsigned int rtpPayload; // @synthesize rtpPayload=_rtpPayload;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e13f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e1285
- (id)description;	// IMP=0x00000000002e110a

@end

