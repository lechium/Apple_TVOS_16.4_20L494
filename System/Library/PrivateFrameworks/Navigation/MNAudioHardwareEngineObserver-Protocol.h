//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class MNAudioHardwareEngine, NSString;

@protocol MNAudioHardwareEngineObserver <NSObject>
- (void)audioHardwareEngine:(MNAudioHardwareEngine *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)audioHardwareEngine:(MNAudioHardwareEngine *)arg1 didActivateAudioSession:(_Bool)arg2;
@end
