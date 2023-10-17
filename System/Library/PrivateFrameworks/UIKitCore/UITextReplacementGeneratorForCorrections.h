//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIKeyboardCandidate, UITextChecker;

__attribute__((visibility("hidden")))
@interface UITextReplacementGeneratorForCorrections
{
    _Bool _showRevertingAutocorrectionInPredictionView;	// 24 = 0x18
    _Bool _forceHistoryReplacement;	// 25 = 0x19
    _Bool _forceAutocorrectionGuesses;	// 26 = 0x1a
    _Bool _forceSpellingGuesses;	// 27 = 0x1b
    UITextChecker *_textChecker;	// 32 = 0x20
    TIKeyboardCandidate *_autocorrectionRecord;	// 40 = 0x28
    unsigned long long _maxEditDistance;	// 48 = 0x30
    unsigned long long _maxCountAfterAutocorrectionGuesses;	// 56 = 0x38
    unsigned long long _maxCountAfterSpellingGuesses;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000f63670
@property(nonatomic) _Bool forceSpellingGuesses; // @synthesize forceSpellingGuesses=_forceSpellingGuesses;
@property(nonatomic) unsigned long long maxCountAfterSpellingGuesses; // @synthesize maxCountAfterSpellingGuesses=_maxCountAfterSpellingGuesses;
@property(nonatomic) _Bool forceAutocorrectionGuesses; // @synthesize forceAutocorrectionGuesses=_forceAutocorrectionGuesses;
@property(nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses; // @synthesize maxCountAfterAutocorrectionGuesses=_maxCountAfterAutocorrectionGuesses;
@property(nonatomic) unsigned long long maxEditDistance; // @synthesize maxEditDistance=_maxEditDistance;
@property(nonatomic) _Bool forceHistoryReplacement; // @synthesize forceHistoryReplacement=_forceHistoryReplacement;
@property(retain, nonatomic) TIKeyboardCandidate *autocorrectionRecord; // @synthesize autocorrectionRecord=_autocorrectionRecord;
@property(retain, nonatomic) UITextChecker *textChecker; // @synthesize textChecker=_textChecker;
- (id)replacements;	// IMP=0x0000000000f62c57
- (void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2;	// IMP=0x0000000000f6263d
- (void)addAutocorrectionGuessesToReplacements:(id)arg1;	// IMP=0x0000000000f62277
- (void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1;	// IMP=0x0000000000f6209c
- (id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1;	// IMP=0x0000000000f61ea5
- (_Bool)isStringToReplaceMisspelled;	// IMP=0x0000000000f61e52
- (_Bool)isStringMisspelled:(id)arg1;	// IMP=0x0000000000f61d45
- (id)init;	// IMP=0x0000000000f61cfc

@end

