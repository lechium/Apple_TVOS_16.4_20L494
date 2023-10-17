//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsFaceTimeSettings, VCMediaNegotiatorResultsMoments, VCMediaNegotiatorResultsVideo;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorBase : NSObject
{
    VCMediaNegotiatorLocalConfiguration *_localSettings;	// 8 = 0x8
    VCMediaNegotiatorResults *_negotiatedSettings;	// 16 = 0x10
    VCMediaNegotiatorResultsAudio *_negotiatedAudioSettings;	// 24 = 0x18
    VCMediaNegotiatorResultsVideo *_negotiatedVideoSettings;	// 32 = 0x20
    VCMediaNegotiatorResultsVideo *_negotiatedScreenSettings;	// 40 = 0x28
    VCMediaNegotiatorResultsMoments *_negotiatedMomentsSettings;	// 48 = 0x30
    VCMediaNegotiatorResultsFaceTimeSettings *_negotiatedFaceTimeSettings;	// 56 = 0x38
    NSMutableArray *_negotiatedStreamGroups;	// 64 = 0x40
    VCMediaNegotiatorResultsAudio *_negotiatedSystemAudioResults;	// 72 = 0x48
}

+ (void)setupNegotiatedAudioPayloads:(id)arg1 negotiatedAudioSettings:(id)arg2 primaryPayloadPreference:(id)arg3;	// IMP=0x0010000000034a6d
+ (void)updateScreenRuleCollections:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00100000000347bf
+ (void)applyCellularPreferredRule:(id)arg1;	// IMP=0x0010000000034595
+ (_Bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 videoSettings:(id)arg4 localVideoRuleCollection:(id)arg5 remoteVideoRuleCollection:(id)arg6;	// IMP=0x0010000000034031
+ (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(_Bool)arg3;	// IMP=0x0010000000033d46
+ (id)getPreferredVideoPayloadList:(id)arg1 localSupportedPayloads:(id)arg2;	// IMP=0x00100000000339da
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;	// IMP=0x0010000000033421
+ (_Bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;	// IMP=0x00100000000333c0
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings; // @synthesize negotiatedScreenSettings=_negotiatedScreenSettings;
@property(readonly, nonatomic) NSArray *negotiatedStreamGroups; // @synthesize negotiatedStreamGroups=_negotiatedStreamGroups;
@property(readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings; // @synthesize negotiatedFaceTimeSettings=_negotiatedFaceTimeSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings; // @synthesize negotiatedMomentsSettings=_negotiatedMomentsSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings; // @synthesize negotiatedVideoSettings=_negotiatedVideoSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings; // @synthesize negotiatedAudioSettings=_negotiatedAudioSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings; // @synthesize negotiatedSettings=_negotiatedSettings;
@property(readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings; // @synthesize localSettings=_localSettings;
- (id)negotiatedResultsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;	// IMP=0x0000000000033810
- (id)negotiatedResultsForGroupID:(unsigned int)arg1;	// IMP=0x000000000003375c
- (id)negotiatedStreamGroupConfigForGroupID:(unsigned int)arg1 negotiatedStreamGroupConfigs:(id)arg2;	// IMP=0x00000000000334e3
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;	// IMP=0x0000000000033482
- (_Bool)processRemoteNegotiationData:(id)arg1;	// IMP=0x000000000003335f
- (id)negotiationData;	// IMP=0x00000000000332fe
- (void)dealloc;	// IMP=0x0000000000033260
- (id)initWithLocalSettings:(id)arg1;	// IMP=0x0000000000032e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
