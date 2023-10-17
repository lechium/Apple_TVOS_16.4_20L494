//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoSettings : PBCodable
{
    unsigned int _customVideoHeight;	// 8 = 0x8
    unsigned int _customVideoWidth;	// 12 = 0xc
    unsigned int _hdrModesSupported;	// 16 = 0x10
    unsigned int _pixelFormats;	// 20 = 0x14
    unsigned int _rtpSSRC;	// 24 = 0x18
    unsigned int _tilesPerFrame;	// 28 = 0x1c
    NSMutableArray *_videoPayloadCollections;	// 32 = 0x20
    _Bool _allowRTCPFB;	// 40 = 0x28
    _Bool _ltrpEnabled;	// 41 = 0x29
    struct {
        unsigned int customVideoHeight:1;
        unsigned int customVideoWidth:1;
        unsigned int hdrModesSupported:1;
        unsigned int pixelFormats:1;
        unsigned int tilesPerFrame:1;
        unsigned int ltrpEnabled:1;
    } _has;	// 44 = 0x2c
}

+ (Class)videoPayloadCollectionsType;	// IMP=0x001000000015d2cb
+ (unsigned int)hdrModesBitmapWithSupportedModes:(id)arg1;	// IMP=0x00100000003497ff
+ (unsigned int)storePixelFormatsInBitMap:(id)arg1;	// IMP=0x00100000003496a7
@property(nonatomic) unsigned int hdrModesSupported; // @synthesize hdrModesSupported=_hdrModesSupported;
@property(nonatomic) unsigned int pixelFormats; // @synthesize pixelFormats=_pixelFormats;
@property(retain, nonatomic) NSMutableArray *videoPayloadCollections; // @synthesize videoPayloadCollections=_videoPayloadCollections;
@property(nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015e888
- (unsigned long long)hash;	// IMP=0x000000000015e77c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015e5e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015e363
- (void)copyTo:(id)arg1;	// IMP=0x000000000015e202
- (void)writeTo:(id)arg1;	// IMP=0x000000000015e009
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015dffc
- (id)dictionaryRepresentation;	// IMP=0x000000000015d5b5
- (id)description;	// IMP=0x000000000015d51b
@property(nonatomic) _Bool hasHdrModesSupported;
@property(nonatomic) _Bool hasPixelFormats;
@property(nonatomic) _Bool hasLtrpEnabled;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) _Bool hasTilesPerFrame;
@property(nonatomic) unsigned int tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) _Bool hasCustomVideoHeight;
@property(nonatomic) unsigned int customVideoHeight; // @synthesize customVideoHeight=_customVideoHeight;
@property(nonatomic) _Bool hasCustomVideoWidth;
@property(nonatomic) unsigned int customVideoWidth; // @synthesize customVideoWidth=_customVideoWidth;
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015d2ae
- (unsigned long long)videoPayloadCollectionsCount;	// IMP=0x000000000015d291
- (void)addVideoPayloadCollections:(id)arg1;	// IMP=0x000000000015d244
- (void)clearVideoPayloadCollections;	// IMP=0x000000000015d227
- (void)dealloc;	// IMP=0x000000000015d1c4
- (void)printScreenWithLogFile:(void *)arg1;	// IMP=0x000000000034e96c
- (void)printVideoWithLogFile:(void *)arg1;	// IMP=0x000000000034dbec
- (void)prepareFormatString:(id)arg1 format:(id)arg2 formatIndex:(unsigned int)arg3 preferredFormat:(unsigned int)arg4;	// IMP=0x000000000034daa3
- (id)parameterSetStringFromPayloadSettings:(id)arg1;	// IMP=0x000000000034d99d
- (id)newFeatureStrings;	// IMP=0x000000000034d7ce
- (id)newVideoRuleCollectionsForScreen:(_Bool)arg1 isCellular16x9Capable:(_Bool)arg2 isLocalConfig:(_Bool)arg3;	// IMP=0x000000000034bb01
- (void)checkAndInsertRuleWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned int *)arg6 negotiationBit:(unsigned int)arg7 rules:(id)arg8 isCellular16x9Capable:(_Bool)arg9;	// IMP=0x000000000034b78a
- (_Bool)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(_Bool)arg3 isCellular16x9Capable:(_Bool)arg4;	// IMP=0x0000000000349ab2
- (id)getPayloadSettingsForPayload:(int)arg1;	// IMP=0x0000000000349944
- (id)initWithScreenSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5 customVideoWidth:(unsigned int)arg6 customVideoHeight:(unsigned int)arg7 tilesPerFrame:(unsigned int)arg8 ltrpEnabled:(_Bool)arg9 pixelFormats:(id)arg10 hdrModesSupported:(id)arg11;	// IMP=0x0000000000349362
- (id)initWithSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5 tilesPerFrame:(unsigned int)arg6 ltrpEnabled:(_Bool)arg7;	// IMP=0x0000000000349247

@end
