//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC4Siri40SRCarPlayLaspedMusicExperimentController : NSObject
{
    MISSING_TYPE *TrialFactor;	// 8 = 0x8
    MISSING_TYPE *TrialCodePathID;	// 24 = 0x18
    MISSING_TYPE *HasRanExperimentPreferencesKey;	// 32 = 0x20
    MISSING_TYPE *LoggingKey;	// 48 = 0x30
    MISSING_TYPE *experimentationAnalyticsManager;	// 64 = 0x40
    MISSING_TYPE *isAppleMusicSubscriber;	// 72 = 0x48
    MISSING_TYPE *isEnglishLocale;	// 73 = 0x49
    MISSING_TYPE *isFirstTimeRunningExperiment;	// 74 = 0x4a
    MISSING_TYPE *isHeySiriRequest;	// 75 = 0x4b
    MISSING_TYPE *isMakingKnownDirectionsRequest;	// 76 = 0x4c
    MISSING_TYPE *isNotListeningToMusic;	// 77 = 0x4d
    MISSING_TYPE *isNotUsingVoiceGuidance;	// 78 = 0x4e
    MISSING_TYPE *isNotRegularSiriMusicUser;	// 79 = 0x4f
    MISSING_TYPE *isRegularMusicListener;	// 80 = 0x50
    MISSING_TYPE *isTrialEligible;	// 81 = 0x51
    MISSING_TYPE *currentRequestId;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0040000000081560
- (id)init;	// IMP=0x0010000000081510
- (void)siriDidOpenURL:(id)arg1;	// IMP=0x001000000007ed40
- (void)siriDidStartRequestWith:(id)arg1;	// IMP=0x001000000007e660
- (id)getExperimentDialog;	// IMP=0x001000000007e630
- (_Bool)shouldRunExperiment;	// IMP=0x001000000007e5f0
@property(nonatomic, copy) NSString *currentRequestId;

@end
