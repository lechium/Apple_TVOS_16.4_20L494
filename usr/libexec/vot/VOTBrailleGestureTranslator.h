//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRLTTranslationService, NSMutableString, NSString, VOTBrailleGesturePatternRecognitionEngine;
@protocol VOTBrailleGestureTranslatorDelegate;

@interface VOTBrailleGestureTranslator : NSObject
{
    VOTBrailleGesturePatternRecognitionEngine *_recognitionEngine;	// 8 = 0x8
    NSMutableString *_brailleBuffer;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    _Bool _shouldUseContractedBraille;	// 25 = 0x19
    _Bool _unitTesting;	// 26 = 0x1a
    id <VOTBrailleGestureTranslatorDelegate> _delegate;	// 32 = 0x20
    long long _typingMode;	// 40 = 0x28
    BRLTTranslationService *_translationService;	// 48 = 0x30
    struct CGSize _keyboardSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000002daa9
@property(retain, nonatomic) BRLTTranslationService *translationService; // @synthesize translationService=_translationService;
@property(readonly, nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;
@property(readonly, nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(nonatomic, getter=isUnitTesting) _Bool unitTesting; // @synthesize unitTesting=_unitTesting;
@property(nonatomic) _Bool shouldUseContractedBraille; // @synthesize shouldUseContractedBraille=_shouldUseContractedBraille;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <VOTBrailleGestureTranslatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)textForBraille:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000002d717
- (void)clearBrailleBuffer;	// IMP=0x001000000002d689
- (_Bool)_shouldUseEightDotBraille;	// IMP=0x001000000002d673
- (void)_resetTranslator;	// IMP=0x001000000002d3f1
- (_Bool)areDotNumberPositionsCalibrated;	// IMP=0x001000000002d3db
- (void)savePersistentGestureData;	// IMP=0x001000000002d3c5
- (void)calibrateWithTouchPoints:(id)arg1;	// IMP=0x001000000002d34d
- (id)dotNumberPositions;	// IMP=0x001000000002d337
- (void)setTypingMode:(long long)arg1 keyboardSize:(struct CGSize)arg2 shouldUseEightDotBraille:(_Bool)arg3 shouldReverseDots:(_Bool)arg4;	// IMP=0x001000000002d31e
- (id)printBrailleForGesturePattern:(id)arg1;	// IMP=0x001000000002d26d
- (id)printBrailleForInput:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002d0c6
- (void)didPressReturnKey;	// IMP=0x001000000002d06a
- (void)didInputBackspace;	// IMP=0x001000000002cfcb
- (_Bool)performBrailleBufferBackspace:(id *)arg1;	// IMP=0x001000000002ce8c
- (void)didInputSpace;	// IMP=0x001000000002ce30
- (id)translateExistingInputWithMode:(unsigned long long)arg1;	// IMP=0x001000000002cd69
- (id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2;	// IMP=0x001000000002ccdd
- (id)translatedTextForPrintBraille:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000002c3b9
- (id)translatedTextOfBufferWithMode:(unsigned long long)arg1;	// IMP=0x001000000002c3a0
- (id)popLastBrailleCellFromBuffer;	// IMP=0x001000000002c2a3
- (void)addPrintBrailleToBuffer:(id)arg1 language:(id)arg2;	// IMP=0x001000000002c1a7
- (id)printBrailleForAllTouchPointsInInput:(id)arg1 shouldLearn:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000002bec5
- (id)init;	// IMP=0x001000000002bcf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

