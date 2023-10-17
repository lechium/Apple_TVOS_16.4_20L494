//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIDictationStreamingOperations : NSObject
{
    double _timeAfterInsertion;	// 8 = 0x8
    double _timeAfterSelectRange;	// 16 = 0x10
    id <UITextInput> _document;	// 24 = 0x18
    NSMutableArray *_operations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000099ca0b
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (unsigned long long)selectionChangeDelta;	// IMP=0x000000000099c8b0
- (_Bool)isNotEmpty;	// IMP=0x000000000099c868
- (_Bool)isEmpty;	// IMP=0x000000000099c820
- (void)willEndEditingInInputDelegate:(id)arg1;	// IMP=0x000000000099c6f9
- (void)pushReplaceSelectionWithText:(id)arg1;	// IMP=0x000000000099c4f4
- (void)_performReplaceSelectedText:(id)arg1;	// IMP=0x000000000099c399
- (void)pushInsertTextForSpeech:(id)arg1;	// IMP=0x000000000099c1b5
- (void)pushSelectRangeForSpeech:(struct _NSRange)arg1;	// IMP=0x000000000099bfe4
- (void)dictationWillBeginInDocument:(id)arg1;	// IMP=0x000000000099bfd2
- (void)setDocument:(id)arg1;	// IMP=0x000000000099bf7f
- (void)performSelectRangeForSpeech:(struct _NSRange)arg1;	// IMP=0x000000000099be7c
- (void)pushSpeechOperationWithSelectionChangeDelta:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000099bdd4
- (void)pushSpeechOperation:(id)arg1;	// IMP=0x000000000099bd62
- (void)popAndInvoke;	// IMP=0x000000000099bcb7
- (double)delayAfterSelector:(SEL)arg1;	// IMP=0x000000000099bbea
- (id)pop;	// IMP=0x000000000099bb19
- (_Bool)hasOperations;	// IMP=0x000000000099bad1
- (void)clearOperations;	// IMP=0x000000000099ba68
- (id)init;	// IMP=0x000000000099b9cb

@end

