//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, NSDictionary, NSString, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer;
@protocol CSFlexKeywordSpotterDelegate, OS_dispatch_queue;

@interface CSFlexKeywordSpotter : NSObject
{
    id <CSFlexKeywordSpotterDelegate> delegate;	// 8 = 0x8
    _EARSpeechRecognizer *_recognizer;	// 16 = 0x10
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;	// 24 = 0x18
    long long _currReqFirstSampleId;	// 32 = 0x20
    NSDictionary *_thresholdsMap;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    CSAsset *_currentAsset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001035b
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *thresholdsMap; // @synthesize thresholdsMap=_thresholdsMap;
@property(nonatomic) long long currReqFirstSampleId; // @synthesize currReqFirstSampleId=_currReqFirstSampleId;
@property(retain, nonatomic) _EARSpeechRecognitionAudioBuffer *recognizerBuffer; // @synthesize recognizerBuffer=_recognizerBuffer;
@property(retain, nonatomic) _EARSpeechRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) __weak id <CSFlexKeywordSpotterDelegate> delegate; // @synthesize delegate;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;	// IMP=0x001000000001021a
- (void)reset;	// IMP=0x001000000001015b
- (void)speechRecognizer:(id)arg1 didRecognizePartialResultNbest:(id)arg2;	// IMP=0x001000000000f7da
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;	// IMP=0x001000000000f737
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;	// IMP=0x001000000000f694
- (void)processAudioChunk:(id)arg1;	// IMP=0x001000000000f4ae
- (void)startKeywordSpottingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ed57
- (id)init;	// IMP=0x001000000000ecf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

