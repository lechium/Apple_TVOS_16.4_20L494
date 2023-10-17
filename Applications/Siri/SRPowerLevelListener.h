//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFAudioPowerUpdater, NSString, VSSpeechSynthesizer;
@protocol SRPowerLevelListenerDelegate;

@interface SRPowerLevelListener : NSObject
{
    id <SRPowerLevelListenerDelegate> _powerLevelListenerDelegate;	// 8 = 0x8
    AFAudioPowerUpdater *_outputAudioPowerUpdater;	// 16 = 0x10
    VSSpeechSynthesizer *_synthesizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001041b
- (long long)_frequency;	// IMP=0x00100000000103a3
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;	// IMP=0x001000000001035b
- (void)dealloc;	// IMP=0x001000000001031d
- (void)endListening;	// IMP=0x0010000000010297
- (void)beginListeningToSpeechSynthesizer:(id)arg1;	// IMP=0x00100000000100aa
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000010046

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

