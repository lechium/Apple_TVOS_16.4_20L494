//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, VCMediaNegotiatorAudioConfiguration, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorLocalConfiguration : NSObject
{
    unsigned int _videoSSRC;	// 8 = 0x8
    unsigned int _screenSSRC;	// 12 = 0xc
    VCMediaNegotiatorAudioConfiguration *_audioConfiguration;	// 16 = 0x10
    VCMediaNegotiatorAudioConfiguration *_systemAudioConfiguration;	// 24 = 0x18
    VCVideoRuleCollections *_videoRuleCollections;	// 32 = 0x20
    VCVideoRuleCollections *_screenRuleCollections;	// 40 = 0x28
    NSDictionary *_videoFeatureStrings;	// 48 = 0x30
    _Bool _allowRTCPFB;	// 56 = 0x38
    _Bool _isCaller;	// 57 = 0x39
    NSString *_basebandCodec;	// 64 = 0x40
    unsigned int _basebandCodecSampleRate;	// 72 = 0x48
    NSMutableSet *_bandwidthConfigurations;	// 80 = 0x50
    NSSet *_captionsReceiverLanguages;	// 88 = 0x58
    NSSet *_captionsSenderLanguages;	// 96 = 0x60
    union tagNTP _creationTime;	// 104 = 0x68
    NSMutableOrderedSet *_multiwayAudioStreams;	// 112 = 0x70
    NSMutableOrderedSet *_multiwayVideoStreams;	// 120 = 0x78
    NSSet *_momentsVideoCodecs;	// 128 = 0x80
    NSSet *_momentsImageTypes;	// 136 = 0x88
    unsigned char _mediaControlInfoVersion;	// 144 = 0x90
    _Bool _SIPDisabled;	// 145 = 0x91
    _Bool _secureMessagingRequired;	// 146 = 0x92
    unsigned int _faceTimeSwitches;	// 148 = 0x94
    int _preferredAudioCodec;	// 152 = 0x98
    int _deviceRole;	// 156 = 0x9c
    void *_callLogFile;	// 160 = 0xa0
    unsigned int _tilesPerVideoFrame;	// 168 = 0xa8
    _Bool _oneToOneModeSupported;	// 172 = 0xac
    _Bool _ltrpEnabled;	// 173 = 0xad
    NSSet *_pixelFormats;	// 176 = 0xb0
    NSSet *_hdrModesSupported;	// 184 = 0xb8
    unsigned char _mediaControlInfoFECFeedbackVersion;	// 192 = 0xc0
    unsigned char _linkProbingCapabilityVersion;	// 193 = 0xc1
    NSMutableSet *_streamGroupConfigs;	// 200 = 0xc8
    struct CGSize _screenSize;	// 208 = 0xd0
    struct CGSize _aspectRatioLandscape;	// 224 = 0xe0
    struct CGSize _aspectRatioPortrait;	// 240 = 0xf0
    struct CGSize _mismatchedLandscapeAspectRatio;	// 256 = 0x100
    int accessNetworkType;	// 272 = 0x110
    _Bool _alwaysOnAudRedEnabled;	// 276 = 0x114
    _Bool _alwaysOnAudioRedundancyEnabled;	// 277 = 0x115
    _Bool _highFecEnabled;	// 278 = 0x116
    _Bool _lowFpsVideoEnabled;	// 279 = 0x117
    _Bool _vplrFecEnabled;	// 280 = 0x118
    _Bool _rampDownBWDropEnabled;	// 281 = 0x119
    _Bool _fastMediaDuplicationEnabled;	// 282 = 0x11a
    _Bool _iRATRtpEnabled;	// 283 = 0x11b
    _Bool _preWarmCellEnabled;	// 284 = 0x11c
    _Bool _duplicateImportantPktsEnabled;	// 285 = 0x11d
    unsigned int _customVideoWidth;	// 288 = 0x120
    unsigned int _customVideoHeight;	// 292 = 0x124
    int _accessNetworkType;	// 296 = 0x128
    struct CGSize _orientationMismatchAspectRatioLandscape;	// 304 = 0x130
}

@property(nonatomic) _Bool duplicateImportantPktsEnabled; // @synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled;
@property(nonatomic) _Bool preWarmCellEnabled; // @synthesize preWarmCellEnabled=_preWarmCellEnabled;
@property(nonatomic) _Bool iRATRtpEnabled; // @synthesize iRATRtpEnabled=_iRATRtpEnabled;
@property(nonatomic) _Bool fastMediaDuplicationEnabled; // @synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled;
@property(nonatomic) _Bool rampDownBWDropEnabled; // @synthesize rampDownBWDropEnabled=_rampDownBWDropEnabled;
@property(nonatomic) _Bool vplrFecEnabled; // @synthesize vplrFecEnabled=_vplrFecEnabled;
@property(nonatomic) _Bool lowFpsVideoEnabled; // @synthesize lowFpsVideoEnabled=_lowFpsVideoEnabled;
@property(nonatomic) _Bool highFecEnabled; // @synthesize highFecEnabled=_highFecEnabled;
@property(nonatomic) _Bool alwaysOnAudioRedundancyEnabled; // @synthesize alwaysOnAudioRedundancyEnabled=_alwaysOnAudioRedundancyEnabled;
@property(nonatomic) _Bool alwaysOnAudRedEnabled; // @synthesize alwaysOnAudRedEnabled=_alwaysOnAudRedEnabled;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) int preferredAudioCodec; // @synthesize preferredAudioCodec=_preferredAudioCodec;
@property(nonatomic) int accessNetworkType; // @synthesize accessNetworkType=_accessNetworkType;
@property(readonly, nonatomic) struct CGSize orientationMismatchAspectRatioLandscape; // @synthesize orientationMismatchAspectRatioLandscape=_orientationMismatchAspectRatioLandscape;
@property(readonly, nonatomic) struct CGSize aspectRatioPortrait; // @synthesize aspectRatioPortrait=_aspectRatioPortrait;
@property(readonly, nonatomic) struct CGSize aspectRatioLandscape; // @synthesize aspectRatioLandscape=_aspectRatioLandscape;
@property(readonly, nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(readonly, nonatomic) NSSet *streamGroupConfigs; // @synthesize streamGroupConfigs=_streamGroupConfigs;
@property(nonatomic) unsigned char linkProbingCapabilityVersion; // @synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion;
@property(nonatomic) unsigned char mediaControlInfoFECFeedbackVersion; // @synthesize mediaControlInfoFECFeedbackVersion=_mediaControlInfoFECFeedbackVersion;
@property(retain, nonatomic) NSSet *hdrModesSupported; // @synthesize hdrModesSupported=_hdrModesSupported;
@property(retain, nonatomic) NSSet *pixelFormats; // @synthesize pixelFormats=_pixelFormats;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) _Bool oneToOneModeSupported; // @synthesize oneToOneModeSupported=_oneToOneModeSupported;
@property(nonatomic) unsigned int tilesPerVideoFrame; // @synthesize tilesPerVideoFrame=_tilesPerVideoFrame;
@property(nonatomic) unsigned int customVideoHeight; // @synthesize customVideoHeight=_customVideoHeight;
@property(nonatomic) unsigned int customVideoWidth; // @synthesize customVideoWidth=_customVideoWidth;
@property(nonatomic) unsigned int faceTimeSwitches; // @synthesize faceTimeSwitches=_faceTimeSwitches;
@property(nonatomic) _Bool secureMessagingRequired; // @synthesize secureMessagingRequired=_secureMessagingRequired;
@property(nonatomic) _Bool SIPDisabled; // @synthesize SIPDisabled=_SIPDisabled;
@property(retain, nonatomic) NSSet *momentsVideoCodecs; // @synthesize momentsVideoCodecs=_momentsVideoCodecs;
@property(retain, nonatomic) NSSet *momentsImageTypes; // @synthesize momentsImageTypes=_momentsImageTypes;
@property(retain, nonatomic) NSMutableOrderedSet *multiwayVideoStreams; // @synthesize multiwayVideoStreams=_multiwayVideoStreams;
@property(retain, nonatomic) NSMutableOrderedSet *multiwayAudioStreams; // @synthesize multiwayAudioStreams=_multiwayAudioStreams;
@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property(nonatomic) union tagNTP creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) void *callLogFile; // @synthesize callLogFile=_callLogFile;
@property(retain, nonatomic) NSSet *captionsReceiverLanguages; // @synthesize captionsReceiverLanguages=_captionsReceiverLanguages;
@property(retain, nonatomic) NSSet *captionsSenderLanguages; // @synthesize captionsSenderLanguages=_captionsSenderLanguages;
@property(retain, nonatomic) NSSet *bandwidthConfigurations; // @synthesize bandwidthConfigurations=_bandwidthConfigurations;
@property(nonatomic) unsigned int basebandCodecSampleRate; // @synthesize basebandCodecSampleRate=_basebandCodecSampleRate;
@property(retain, nonatomic) NSString *basebandCodec; // @synthesize basebandCodec=_basebandCodec;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(nonatomic) unsigned int screenSSRC; // @synthesize screenSSRC=_screenSSRC;
@property(nonatomic) unsigned int videoSSRC; // @synthesize videoSSRC=_videoSSRC;
@property(retain, nonatomic) NSDictionary *videoFeatureStrings; // @synthesize videoFeatureStrings=_videoFeatureStrings;
@property(retain, nonatomic) VCVideoRuleCollections *screenRuleCollections; // @synthesize screenRuleCollections=_screenRuleCollections;
@property(retain, nonatomic) VCVideoRuleCollections *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(retain, nonatomic) VCMediaNegotiatorAudioConfiguration *systemAudioConfiguration; // @synthesize systemAudioConfiguration=_systemAudioConfiguration;
@property(retain, nonatomic) VCMediaNegotiatorAudioConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010fa6e
- (_Bool)isEqualFaceTimeSettings:(id)arg1;	// IMP=0x000000000010f989
- (_Bool)isEqualMomentsVideoCodecs:(id)arg1;	// IMP=0x000000000010f7f7
- (_Bool)isEqualMomentsImageTypes:(id)arg1;	// IMP=0x000000000010f665
- (_Bool)isEqualFeatureStrings:(id)arg1;	// IMP=0x000000000010f160
- (_Bool)isEqualStreamGroupConfigs:(id)arg1;	// IMP=0x000000000010ef23
- (_Bool)isEqualMultiwayVideoStreamSet:(id)arg1;	// IMP=0x000000000010ecec
- (_Bool)isEqualMultiwayAudioStreamSet:(id)arg1;	// IMP=0x000000000010eab5
- (_Bool)isEqualBandwidthConfigurations:(id)arg1;	// IMP=0x000000000010e8b0
- (void)resetStreamGroups;	// IMP=0x000000000010e897
- (void)addStreamGroupConfig:(id)arg1;	// IMP=0x000000000010e87e
- (void)addMultiwayVideoStream:(id)arg1;	// IMP=0x000000000010e868
- (void)addMultiwayAudioStream:(id)arg1;	// IMP=0x000000000010e852
- (void)addBandwidthConfiguration:(id)arg1;	// IMP=0x000000000010e83c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010e4a3
- (_Bool)setupBandwidthExtensionConfiguration:(id)arg1;	// IMP=0x000000000010e06f
- (_Bool)setupBandwidthConfigurationsWithArbiter:(id)arg1;	// IMP=0x000000000010db9d
- (void)dealloc;	// IMP=0x000000000010dabf
- (id)initWithBitrateArbiter:(id)arg1;	// IMP=0x000000000010da76
- (id)init;	// IMP=0x000000000010d6ce

@end

