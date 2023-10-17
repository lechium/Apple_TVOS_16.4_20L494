//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeechDetector/NSObject-Protocol.h>

@class EARClientSilenceFeatures;

@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>
- (void)clientSilenceFeaturesAvailable:(EARClientSilenceFeatures *)arg1;

@optional
- (void)silenceDurationEstimateAvailable:(float *)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;
@end
