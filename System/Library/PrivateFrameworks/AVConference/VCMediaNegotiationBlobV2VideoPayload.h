//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2VideoPayload : PBCodable
{
    unsigned int _decodeFormats;	// 8 = 0x8
    unsigned int _encodeFormats;	// 12 = 0xc
    unsigned int _parameterSet;	// 16 = 0x10
    unsigned int _videoPayload;	// 20 = 0x14
    struct {
        unsigned int decodeFormats:1;
        unsigned int encodeFormats:1;
        unsigned int parameterSet:1;
        unsigned int videoPayload:1;
    } _has;	// 24 = 0x18
}

+ (int)rtpPayloadWithPayload:(int)arg1;	// IMP=0x001000000020f56f
+ (int)payloadWithRTPPayload:(int)arg1;	// IMP=0x001000000020f474
@property(nonatomic) unsigned int decodeFormats; // @synthesize decodeFormats=_decodeFormats;
@property(nonatomic) unsigned int encodeFormats; // @synthesize encodeFormats=_encodeFormats;
@property(nonatomic) unsigned int parameterSet; // @synthesize parameterSet=_parameterSet;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000032d8b
- (unsigned long long)hash;	// IMP=0x0000000000032d10
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032c49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000032b9a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000032b29
- (void)writeTo:(id)arg1;	// IMP=0x0000000000032a81
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000032a74
- (id)dictionaryRepresentation;	// IMP=0x0000000000032580
- (id)description;	// IMP=0x00000000000324e6
@property(nonatomic) _Bool hasDecodeFormats;
@property(nonatomic) _Bool hasEncodeFormats;
@property(nonatomic) _Bool hasParameterSet;
@property(nonatomic) _Bool hasVideoPayload;
@property(nonatomic) unsigned int videoPayload; // @synthesize videoPayload=_videoPayload;
- (void)setupVideoParameterSupport:(unsigned int)arg1;	// IMP=0x000000000021005a
- (_Bool)setupEncode:(_Bool)arg1 videoRules:(id)arg2;	// IMP=0x000000000020f668
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x000000000020ee2b
@property(readonly, nonatomic) unsigned int videoParameterSupport;
- (id)videoRulesWithBitmap:(unsigned int)arg1;	// IMP=0x000000000020d9cd
@property(readonly, nonatomic) NSArray *decodeVideoRules;
@property(readonly, nonatomic) NSArray *encodeVideoRules;
@property(readonly, nonatomic) int payload;
- (id)initWithPayload:(int)arg1 encodeVideoRules:(id)arg2 decodeVideoRules:(id)arg3 videoParameterSupport:(unsigned int)arg4;	// IMP=0x000000000020d75c

@end

