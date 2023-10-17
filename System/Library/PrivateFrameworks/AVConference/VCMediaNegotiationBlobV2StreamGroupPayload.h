//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2StreamGroupPayload : PBCodable
{
    unsigned int _cipherSuite;	// 8 = 0x8
    unsigned int _codecType;	// 12 = 0xc
    unsigned int _encoderUsage;	// 16 = 0x10
    unsigned int _mediaFlags;	// 20 = 0x14
    unsigned int _pTime;	// 24 = 0x18
    NSData *_packedPayload;	// 32 = 0x20
    unsigned int _profileLevelId;	// 40 = 0x28
    unsigned int _rtcpFlags;	// 44 = 0x2c
    unsigned int _rtpPayload;	// 48 = 0x30
    unsigned int _rtpSampleRate;	// 52 = 0x34
    struct {
        unsigned int cipherSuite:1;
        unsigned int codecType:1;
        unsigned int encoderUsage:1;
        unsigned int mediaFlags:1;
        unsigned int pTime:1;
        unsigned int profileLevelId:1;
        unsigned int rtcpFlags:1;
        unsigned int rtpPayload:1;
        unsigned int rtpSampleRate:1;
    } _has;	// 56 = 0x38
}

+ (void)printWithLogFile:(void *)arg1 prefix:(id)arg2 payloadConfig:(id)arg3;	// IMP=0x00100000003237d9
+ (unsigned int)pTimeWithNegotiationPackedPTime:(unsigned char)arg1;	// IMP=0x0010000000321fc5
+ (unsigned char)negotiationPackedPTimeWithPTime:(unsigned int)arg1;	// IMP=0x0010000000321fad
+ (_Bool)isPTimePackable:(unsigned int)arg1;	// IMP=0x0010000000321f8e
+ (unsigned int)rtpSampleRateWithNegotiationPackedSampleRate:(int)arg1;	// IMP=0x0010000000321f72
+ (int)negotiationPackedRtpSampleRateWithRTPSampleRate:(unsigned int)arg1;	// IMP=0x0010000000321edc
+ (unsigned int)cipherSuiteWithNegotiationCipherSuite:(unsigned int)arg1;	// IMP=0x0010000000321e03
+ (unsigned int)negotiationCipherSuiteWithCipherSuite:(unsigned int)arg1;	// IMP=0x0010000000321def
+ (id)rtcpFlagStringWithPayloadConfig:(id)arg1;	// IMP=0x0010000000321d0f
+ (unsigned int)mediaFlagsWithPayloadConfig:(id)arg1;	// IMP=0x0010000000321cf6
+ (unsigned int)rtcpFlagsWithPayloadConfig:(id)arg1;	// IMP=0x0010000000321c9e
+ (long long)codecTypeWithNegotiationCodecType:(unsigned int)arg1;	// IMP=0x0010000000321c80
+ (_Bool)isNegotiationCodecTypeAudio:(unsigned int)arg1;	// IMP=0x0010000000321c64
+ (unsigned int)negotiationCodecTypeWithCodecType:(long long)arg1;	// IMP=0x0010000000321b93
+ (_Bool)isDefaultPayloadConfig:(id)arg1 index:(unsigned int)arg2 rtpSampleRate:(unsigned int)arg3 streamGroupID:(unsigned int)arg4;	// IMP=0x0010000000321955
+ (unsigned int)defaultRTPSampleRateForStreamGroupID:(unsigned int)arg1;	// IMP=0x00100000003218cc
+ (id)defaultPayloadConfigurationsForStreamGroupID:(unsigned int)arg1;	// IMP=0x00100000003212b6
+ (id)defaultMMJIConfig;	// IMP=0x0010000000321213
+ (id)defaultMoCapConfig;	// IMP=0x0010000000321170
+ (id)defaultDataCodecConfig;	// IMP=0x00100000003210cd
+ (id)defaultFTXTCodecConfig;	// IMP=0x0010000000321018
@property(nonatomic) unsigned int encoderUsage; // @synthesize encoderUsage=_encoderUsage;
@property(retain, nonatomic) NSData *packedPayload; // @synthesize packedPayload=_packedPayload;
@property(nonatomic) unsigned int cipherSuite; // @synthesize cipherSuite=_cipherSuite;
@property(nonatomic) unsigned int rtpSampleRate; // @synthesize rtpSampleRate=_rtpSampleRate;
@property(nonatomic) unsigned int profileLevelId; // @synthesize profileLevelId=_profileLevelId;
@property(nonatomic) unsigned int mediaFlags; // @synthesize mediaFlags=_mediaFlags;
@property(nonatomic) unsigned int rtcpFlags; // @synthesize rtcpFlags=_rtcpFlags;
@property(nonatomic) unsigned int pTime; // @synthesize pTime=_pTime;
@property(nonatomic) unsigned int rtpPayload; // @synthesize rtpPayload=_rtpPayload;
@property(nonatomic) unsigned int codecType; // @synthesize codecType=_codecType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000033f195
- (unsigned long long)hash;	// IMP=0x000000000033f02a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033ee3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033ecbd
- (void)copyTo:(id)arg1;	// IMP=0x000000000033eb7e
- (void)writeTo:(id)arg1;	// IMP=0x000000000033ea15
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033ea08
- (id)dictionaryRepresentation;	// IMP=0x000000000033e092
- (id)description;	// IMP=0x000000000033dff8
@property(nonatomic) _Bool hasEncoderUsage;
@property(readonly, nonatomic) _Bool hasPackedPayload;
@property(nonatomic) _Bool hasCipherSuite;
@property(nonatomic) _Bool hasRtpSampleRate;
@property(nonatomic) _Bool hasProfileLevelId;
@property(nonatomic) _Bool hasMediaFlags;
@property(nonatomic) _Bool hasRtcpFlags;
@property(nonatomic) _Bool hasPTime;
@property(nonatomic) _Bool hasRtpPayload;
@property(nonatomic) _Bool hasCodecType;
- (void)dealloc;	// IMP=0x000000000033dce0
- (id)payloadConfigurationWithPayloadConfig:(id)arg1;	// IMP=0x00000000003235f1
- (id)payloadConfigurationWithStreamGroupID:(unsigned int)arg1 index:(unsigned int)arg2;	// IMP=0x00000000003232a9
- (unsigned int)rtpSampleRateWithStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000003231dd
- (id)newCompactPayloadWithPayloadConfig:(id)arg1 rtpSampleRate:(unsigned int)arg2;	// IMP=0x0000000000322c11
- (id)initWithPayloadConfig:(id)arg1 index:(unsigned int)arg2 rtpSampleRate:(unsigned int)arg3 streamGroupID:(unsigned int)arg4;	// IMP=0x000000000032247d
- (id)initWithPayloadConfig:(id)arg1 rtpSampleRate:(unsigned int)arg2;	// IMP=0x0000000000321fce
- (void)getStreamGroupPayload:(struct tagStreamGroupPayload *)arg1;	// IMP=0x0000000000321ea0
- (void)setNegotiationPackedPayloadWithStreamGroupPayload:(struct tagStreamGroupPayload *)arg1;	// IMP=0x0000000000321e17

@end

