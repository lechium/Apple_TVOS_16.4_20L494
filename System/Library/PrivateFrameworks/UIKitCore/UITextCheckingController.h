//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextChecker;
@protocol UITextCheckingClient;

__attribute__((visibility("hidden")))
@interface UITextCheckingController : NSObject
{
    id <UITextCheckingClient> _client;	// 8 = 0x8
    UITextChecker *_textChecker;	// 16 = 0x10
    struct _NSRange _selectedRangeFromPreviousUnchecked;	// 24 = 0x18
    struct _NSRange _previousCheckedSentenceRange;	// 40 = 0x28
    struct _NSRange _previousCheckedSelectedRange;	// 56 = 0x38
    long long _prechangeCheckingSequenceNumber;	// 72 = 0x48
    struct __tccClientFlags {
        unsigned int respondsToAutocorrectionType:1;
        unsigned int respondsToSpellCheckingType:1;
        unsigned int respondsToSmartQuotesType:1;
        unsigned int respondsToSmartDashesType:1;
        unsigned int respondsToSmartInsertDeleteType:1;
        unsigned int respondsToContinuousSpellCheckingEnabled:1;
    } _tccClientFlags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000ffc282
- (void)considerTextCheckingForRange:(id)arg1;	// IMP=0x0000000000ffc27c
- (void)willReplaceTextInRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000ffc276
- (void)didChangeSelectionFromRange:(id)arg1;	// IMP=0x0000000000ffc242
- (void)insertedTextInRange:(id)arg1;	// IMP=0x0000000000ffc23c
- (void)didChangeTextInRange:(id)arg1;	// IMP=0x0000000000ffc236
- (void)checkSpellingForSelectionChangeFromRange:(struct _NSRange)arg1;	// IMP=0x0000000000ffbd9a
- (struct _NSRange)terminatedSentenceRangeInTextRange:(id)arg1;	// IMP=0x0000000000ffbbb0
- (_Bool)foundApostropheAfterRange:(struct _NSRange)arg1;	// IMP=0x0000000000ffba57
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;	// IMP=0x0000000000ffba28
- (void)checkSpellingForWordInRange:(id)arg1;	// IMP=0x0000000000ffb849
- (struct _NSRange)selectedRange;	// IMP=0x0000000000ffb7d9
- (struct _NSRange)nsRangeForTextRange:(id)arg1;	// IMP=0x0000000000ffb6b1
- (void)preheatTextChecker;	// IMP=0x0000000000ffb665
- (id)textChecker;	// IMP=0x0000000000ffb5f3
- (id)validAnnotations;	// IMP=0x0000000000ffb49a
- (_Bool)continuousSpellCheckingEnabled;	// IMP=0x0000000000ffb472
@property(readonly) id <UITextCheckingClient> client;
- (void)dealloc;	// IMP=0x0000000000ffb426
- (void)invalidate;	// IMP=0x0000000000ffb3ed
- (id)initWithClient:(id)arg1;	// IMP=0x0000000000ffb291

@end
