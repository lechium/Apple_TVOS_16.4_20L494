//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, _EARLMTKaldiVocab;

__attribute__((visibility("hidden")))
@interface TextProcessorTrain : NSObject
{
    NSMutableArray *_text;	// 8 = 0x8
    _EARLMTKaldiVocab *_vocab;	// 16 = 0x10
    long long *_numValidTokens;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f090f
- (long long)numberTokens;	// IMP=0x00000000001f0902
- (unsigned long long)numberSamples;	// IMP=0x00000000001f08ec
- (id)textSequence;	// IMP=0x00000000001f08de
- (void)shuffleSamples;	// IMP=0x00000000001f0840
- (void)addTokenizedText:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000001f04b2
- (void)addText:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000001f015d
- (void)addText:(id)arg1;	// IMP=0x00000000001efefb
- (id)initWithVocab:(id)arg1;	// IMP=0x00000000001efe6e
- (id)init;	// IMP=0x00000000001efe60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

