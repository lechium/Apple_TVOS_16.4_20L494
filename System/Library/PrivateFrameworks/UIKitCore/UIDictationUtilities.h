//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationUtilities : NSObject
{
}

+ (_Bool)shouldLogCorrectionInfoForCurrentBundleId;	// IMP=0x00800000009c7545
+ (id)trackingPunctuations;	// IMP=0x00800000009c748f
+ (unsigned long long)maxLoggableLengthOfInsertionBySubstitution:(id)arg1;	// IMP=0x00800000009c742d
+ (unsigned long long)maxLoggableLengthOfInsertionWithDeletion:(id)arg1;	// IMP=0x00800000009c73cb
+ (unsigned long long)maxLoggableLengthOfInsertionWithoutDeletion:(id)arg1;	// IMP=0x00800000009c7369
+ (void)attributedString:(id)arg1 withIdentifiersBlock:(CDUnknownBlockType)arg2;	// IMP=0x00800000009c71fb
+ (void)logSpeechAlternativeReplacement:(id)arg1 originalText:(id)arg2 replacementText:(id)arg3 index:(unsigned long long)arg4;	// IMP=0x00800000009c6e3c
+ (void)trackSubstitution:(id)arg1 originalText:(id)arg2 originalTextRange:(struct _NSRange)arg3 replacementText:(id)arg4 replacementTextRange:(struct _NSRange)arg5;	// IMP=0x00800000009c6a52
+ (void)trackDeletion:(id)arg1 text:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00800000009c6563
+ (void)trackInsertion:(id)arg1 text:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00800000009c6088
+ (long long)updateCharacterModificationCount:(id)arg1 delta:(int)arg2;	// IMP=0x00800000009c5f82
+ (unsigned long long)updateCharacterInsertionCount:(id)arg1 delta:(int)arg2;	// IMP=0x00800000009c5e7c
+ (unsigned long long)updateCharacterSubstitutionCount:(id)arg1 delta:(int)arg2;	// IMP=0x00800000009c5d76
+ (unsigned long long)updateCharacterDeletionCount:(id)arg1 delta:(int)arg2;	// IMP=0x00800000009c5c70
+ (unsigned long long)characterSubstitutionCount:(id)arg1;	// IMP=0x00800000009c5bb1
+ (unsigned long long)characterDeletionCount:(id)arg1;	// IMP=0x00800000009c5af2
+ (unsigned long long)characterInsertionCount:(id)arg1;	// IMP=0x00800000009c5a33
+ (id)_properNameForString:(id)arg1;	// IMP=0x00800000009c586b
+ (_Bool)needsTrailingSpaceForText:(id)arg1 secureInput:(_Bool)arg2;	// IMP=0x00800000009c564d
+ (_Bool)needsTrailingSpaceForPhrases:(id)arg1 secureInput:(_Bool)arg2;	// IMP=0x00800000009c554a
+ (_Bool)needsLeadingSpaceForText:(id)arg1 secureInput:(_Bool)arg2 previousCharacter:(unsigned short)arg3 selectionStartIsStartOfParagraph:(_Bool)arg4;	// IMP=0x00800000009c5493
+ (void)selectionStartInfoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00800000009c5304
+ (_Bool)needsLeadingSpaceForText:(id)arg1 secureInput:(_Bool)arg2;	// IMP=0x00800000009c50e4
+ (_Bool)needsLeadingSpaceForPhrases:(id)arg1 secureInput:(_Bool)arg2;	// IMP=0x00800000009c4fd7
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;	// IMP=0x00800000009c4d54
+ (id)voiceCommandParameterFromAFVoiceCommandGrammarParamMatch:(id)arg1;	// IMP=0x00800000009c4cd0
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2 capturePrefixAndPostfixWordCount:(unsigned long long)arg3;	// IMP=0x00800000009c41ce
+ (id)bestInterpretationForPhrases:(id)arg1;	// IMP=0x00800000009c4133
+ (id)bestInterpretationForDictationResult:(id)arg1;	// IMP=0x00800000009c3e9a
+ (id)dictationPhrasesFromPhraseArray:(id)arg1;	// IMP=0x00800000009c3c73
+ (id)dictationPhrasesFromTokenMatrix:(id)arg1;	// IMP=0x00800000009c3a2c
+ (id)phraseFromAFPhrase:(id)arg1;	// IMP=0x00800000009c371e
+ (id)interpretationFromAFTokens:(id)arg1;	// IMP=0x00800000009c3355
+ (id)interpretationFromAFInterpretation:(id)arg1;	// IMP=0x00800000009c31f7
+ (id)tokenFromAFToken:(id)arg1;	// IMP=0x00800000009c30c5

@end

