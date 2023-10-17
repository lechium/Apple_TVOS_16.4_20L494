//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioSampleRateConverter, CSAudioZeroCounter, CSBeepCanceller, CSVoiceTriggerAwareZeroFilter, NSString;
@protocol CSAudioPreprocessorDelegate;

@interface CSAudioPreprocessor : NSObject
{
    float _sampleRate;	// 8 = 0x8
    int _numChannels;	// 12 = 0xc
    id <CSAudioPreprocessorDelegate> _delegate;	// 16 = 0x10
    CSAudioSampleRateConverter *_upsampler;	// 24 = 0x18
    CSVoiceTriggerAwareZeroFilter *_zeroFilter;	// 32 = 0x20
    CSBeepCanceller *_beepCanceller;	// 40 = 0x28
    CSAudioZeroCounter *_zeroCounter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000097db9
@property(nonatomic) int numChannels; // @synthesize numChannels=_numChannels;
@property(retain, nonatomic) CSAudioZeroCounter *zeroCounter; // @synthesize zeroCounter=_zeroCounter;
@property(retain, nonatomic) CSBeepCanceller *beepCanceller; // @synthesize beepCanceller=_beepCanceller;
@property(retain, nonatomic) CSVoiceTriggerAwareZeroFilter *zeroFilter; // @synthesize zeroFilter=_zeroFilter;
@property(retain, nonatomic) CSAudioSampleRateConverter *upsampler; // @synthesize upsampler=_upsampler;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) __weak id <CSAudioPreprocessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x0010000000097c7b
- (void)zeroFilter:(id)arg1 zeroFilteredBufferAvailable:(id)arg2 atHostTime:(unsigned long long)arg3;	// IMP=0x0010000000097ba2
- (_Bool)_isNarrowBand:(float)arg1;	// IMP=0x0010000000097b6e
- (id)_fetchCurrentMetrics;	// IMP=0x00100000000979b4
- (void)_reportMetrics;	// IMP=0x0010000000097939
- (void)reportMetricsForSiriRequestWithUUID:(id)arg1;	// IMP=0x0010000000097933
- (void)willBeepWithRecordRoute:(id)arg1 playbackRoute:(id)arg2;	// IMP=0x00100000000978d3
- (void)flush;	// IMP=0x001000000009779b
- (void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;	// IMP=0x0010000000097567
- (void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(_Bool)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x001000000009732f
- (id)initWithSampleRate:(float)arg1 withNumberOfChannels:(int)arg2;	// IMP=0x00100000000971f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

