//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayer, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AVHUDStringGenerator : NSObject
{
    AVPlayer *_player;	// 8 = 0x8
    NSNumber *_audioSpatializationMode;	// 16 = 0x10
    NSString *_playerItemURL;	// 24 = 0x18
    NSString *_assetType;	// 32 = 0x20
    NSString *_sessionID;	// 40 = 0x28
    NSString *_configurationGroup;	// 48 = 0x30
    NSString *_trackFormatDescriptions;	// 56 = 0x38
    NSNumber *_displayResolutionHeight;	// 64 = 0x40
    NSNumber *_displayResolutionWidth;	// 72 = 0x48
    NSNumber *_refreshRate;	// 80 = 0x50
    NSString *_videoRange;	// 88 = 0x58
    NSNumber *_videoApproximateDisplaySizeHeight;	// 96 = 0x60
    NSNumber *_videoApproximateDisplaySizeWidth;	// 104 = 0x68
    NSNumber *_presentationSizeHeight;	// 112 = 0x70
    NSNumber *_presentationSizeWidth;	// 120 = 0x78
    NSNumber *_currentFrameRate;	// 128 = 0x80
    NSNumber *_nominalFrameRate;	// 136 = 0x88
    NSNumber *_networkBandiwdth;	// 144 = 0x90
    NSNumber *_averageVideoBitrate;	// 152 = 0x98
    NSNumber *_averageAudioBitrate;	// 160 = 0xa0
    NSString *_assetTrackInfo;	// 168 = 0xa8
    NSNumber *_peakIndicatedBitrate;	// 176 = 0xb0
    NSNumber *_averageIndicatedBitrate;	// 184 = 0xb8
    NSNumber *_variantIndex;	// 192 = 0xc0
    NSNumber *_totalFrameDrops;	// 200 = 0xc8
    NSNumber *_decoderFrameDrops;	// 208 = 0xd0
    NSNumber *_imageQueueFrameDrops;	// 216 = 0xd8
    NSNumber *_bufferedVideoPlayed;	// 224 = 0xe0
    NSNumber *_bufferedVideoRemaining;	// 232 = 0xe8
    NSString *_customPerfInfo;	// 240 = 0xf0
    NSNumber *_totalStalls;	// 248 = 0xf8
    long long _prevVariantIdx;	// 256 = 0x100
    long long _prevStallCount;	// 264 = 0x108
    long long _totalStallCount;	// 272 = 0x110
    _Bool _spatialDiagnostics;	// 280 = 0x118
    _Bool _captureCompleteURI;	// 281 = 0x119
    NSString *_formattedDisplayString;	// 288 = 0x120
}

+ (id)descriptionStringForTracksOfPlayerItem:(id)arg1;	// IMP=0x0060000000055537
+ (id)descriptionStringForVideoRangeOfFormatDescription:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x006000000005550c
+ (id)descriptionStringForBitRate:(double)arg1;	// IMP=0x00600000000554a1
+ (id)descriptionStringForFormatOfTrack:(id)arg1;	// IMP=0x00600000000551a4
- (void).cxx_destruct;	// IMP=0x000000000005725f
@property(readonly, nonatomic) NSNumber *audioSpatializationMode; // @synthesize audioSpatializationMode=_audioSpatializationMode;
@property(readonly, nonatomic) NSNumber *displayResolutionHeight; // @synthesize displayResolutionHeight=_displayResolutionHeight;
@property(readonly, nonatomic) NSNumber *displayResolutionWidth; // @synthesize displayResolutionWidth=_displayResolutionWidth;
@property(nonatomic) long long totalStallCount; // @synthesize totalStallCount=_totalStallCount;
@property(nonatomic) long long prevStallCount; // @synthesize prevStallCount=_prevStallCount;
@property(nonatomic) long long prevVariantIdx; // @synthesize prevVariantIdx=_prevVariantIdx;
@property(nonatomic) _Bool captureCompleteURI; // @synthesize captureCompleteURI=_captureCompleteURI;
@property(nonatomic) _Bool spatialDiagnostics; // @synthesize spatialDiagnostics=_spatialDiagnostics;
@property __weak AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) NSString *formattedDisplayString; // @synthesize formattedDisplayString=_formattedDisplayString;
- (void)update;	// IMP=0x0000000000056a26
- (void)updateFromPlayerItem;	// IMP=0x0000000000055d5e
- (void)updateFromPlayer;	// IMP=0x0000000000055845
- (void)dealloc;	// IMP=0x0000000000055070

@end

