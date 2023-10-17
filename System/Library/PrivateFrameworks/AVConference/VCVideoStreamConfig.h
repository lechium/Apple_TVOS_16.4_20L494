//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSString;
@protocol VCMediaStreamSyncSource;

__attribute__((visibility("hidden")))
@interface VCVideoStreamConfig
{
    long long _videoResolution;	// 272 = 0x110
    unsigned long long _framerate;	// 280 = 0x118
    unsigned long long _txMaxBitrate;	// 288 = 0x120
    unsigned long long _txMinBitrate;	// 296 = 0x128
    unsigned long long _txInitialBitrate;	// 304 = 0x130
    unsigned long long _rxMaxBitrate;	// 312 = 0x138
    unsigned long long _rxMinBitrate;	// 320 = 0x140
    unsigned long long _keyFrameInterval;	// 328 = 0x148
    int _remoteVideoInitialOrientation;	// 336 = 0x150
    _Bool _enableCVO;	// 340 = 0x154
    unsigned long long _cvoExtensionID;	// 344 = 0x158
    _Bool _isVideoProtected;	// 352 = 0x160
    long long _type;	// 360 = 0x168
    unsigned long long _sourceFramerate;	// 368 = 0x170
    int _encodingMode;	// 376 = 0x178
    int _encoderUsage;	// 380 = 0x17c
    _Atomic unsigned char *_videoPriorityPointer;	// 384 = 0x180
    unsigned int _screenDisplayID;	// 392 = 0x188
    unsigned long long _customWidth;	// 400 = 0x190
    unsigned long long _customHeight;	// 408 = 0x198
    NSMutableDictionary *_rxCodecFeatureListStrings;	// 416 = 0x1a0
    NSMutableDictionary *_txCodecFeatureListStrings;	// 424 = 0x1a8
    unsigned long long _tilesPerFrame;	// 432 = 0x1b0
    unsigned int _pixelFormat;	// 440 = 0x1b8
    _Bool _ltrpEnabled;	// 444 = 0x1bc
    int _hdrMode;	// 448 = 0x1c0
    NSString *_remoteDeviceName;	// 456 = 0x1c8
    NSString *_profileLevel;	// 464 = 0x1d0
    unsigned int _parameterSets;	// 472 = 0x1d8
    _Bool _temporalScalingEnabled;	// 476 = 0x1dc
    _Bool _isVariableSliceModeEnabled;	// 477 = 0x1dd
    _Bool _rtcpPSFB_FIREnabled;	// 478 = 0x1de
    _Bool _resetSendRTPTimestampOnStop;	// 479 = 0x1df
    id <VCMediaStreamSyncSource> _syncSource;	// 480 = 0x1e0
    _Bool _useInBandFEC;	// 488 = 0x1e8
    unsigned int _audioIOSampleRate;	// 492 = 0x1ec
    int _transportProtocolType;	// 496 = 0x1f0
    _Bool _useVideoJitterForVideoPlayout;	// 500 = 0x1f4
    _Bool _forceZeroRegionOfInterestOrigin;	// 501 = 0x1f5
    unsigned long long _maxEncoderPixels;	// 504 = 0x1f8
}

+ (id)profileLevelStringForId:(unsigned int)arg1;	// IMP=0x00600000002e03dd
+ (unsigned int)profileLevelIdForString:(id)arg1;	// IMP=0x00600000002e035b
+ (_Bool)validateClientDictionary:(id)arg1;	// IMP=0x00600000002e0036
@property(nonatomic) _Bool forceZeroRegionOfInterestOrigin; // @synthesize forceZeroRegionOfInterestOrigin=_forceZeroRegionOfInterestOrigin;
@property(nonatomic) unsigned long long maxEncoderPixels; // @synthesize maxEncoderPixels=_maxEncoderPixels;
@property(nonatomic) _Bool useVideoJitterForVideoPlayout; // @synthesize useVideoJitterForVideoPlayout=_useVideoJitterForVideoPlayout;
@property(nonatomic) int transportProtocolType; // @synthesize transportProtocolType=_transportProtocolType;
@property(nonatomic) unsigned int audioIOSampleRate; // @synthesize audioIOSampleRate=_audioIOSampleRate;
@property(nonatomic) _Bool useInBandFEC; // @synthesize useInBandFEC=_useInBandFEC;
@property(nonatomic) int encoderUsage; // @synthesize encoderUsage=_encoderUsage;
@property(nonatomic) _Bool resetSendRTPTimestampOnStop; // @synthesize resetSendRTPTimestampOnStop=_resetSendRTPTimestampOnStop;
@property(nonatomic) id <VCMediaStreamSyncSource> syncSource; // @synthesize syncSource=_syncSource;
@property(nonatomic) _Bool rtcpPSFB_FIREnabled; // @synthesize rtcpPSFB_FIREnabled=_rtcpPSFB_FIREnabled;
@property(nonatomic) _Bool isVariableSliceModeEnabled; // @synthesize isVariableSliceModeEnabled=_isVariableSliceModeEnabled;
@property(nonatomic) _Bool temporalScalingEnabled; // @synthesize temporalScalingEnabled=_temporalScalingEnabled;
@property(nonatomic) unsigned int parameterSets; // @synthesize parameterSets=_parameterSets;
@property(retain, nonatomic) NSString *profileLevel; // @synthesize profileLevel=_profileLevel;
@property(retain, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property(nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) unsigned long long tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) _Atomic unsigned char *videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) unsigned long long sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly, nonatomic) NSDictionary *txCodecFeatureListStrings; // @synthesize txCodecFeatureListStrings=_txCodecFeatureListStrings;
@property(readonly, nonatomic) NSDictionary *rxCodecFeatureListStrings; // @synthesize rxCodecFeatureListStrings=_rxCodecFeatureListStrings;
@property(nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(nonatomic) unsigned long long txInitialBitrate; // @synthesize txInitialBitrate=_txInitialBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (void)initializeParameterSets;	// IMP=0x00000000002e0bc4
- (void)addTxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;	// IMP=0x00000000002e0b72
- (void)addRxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;	// IMP=0x00000000002e0b20
- (_Bool)updateWithClientDictionary:(id)arg1;	// IMP=0x00000000002e0b0e
- (_Bool)applyVideoStreamClientDictionary:(id)arg1;	// IMP=0x00000000002e0463
- (void)dealloc;	// IMP=0x00000000002dff9f
- (id)initWithClientDictionary:(id)arg1;	// IMP=0x00000000002dfcce
- (id)init;	// IMP=0x00000000002dfcba

@end

