//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboard.h"

@class _UIStringAndPositionPair;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard
{
    _Bool showsCandidateBar;	// 104 = 0x68
    _Bool showsCandidateInline;	// 105 = 0x69
    _Bool receivedCandidatesInCurrentInputMode;	// 106 = 0x6a
    id <UITextCursorAssertion> _blinkAssertion;	// 112 = 0x70
    _UIStringAndPositionPair *_lastMatchedSupplementalCandidate;	// 120 = 0x78
    _UIStringAndPositionPair *_pendingSupplementalCandidateToInsert;	// 128 = 0x80
    unsigned long long _lastChooseSupplementalItemToInsertCallbackIdentifier;	// 136 = 0x88
}

+ (id)activeInstance;	// IMP=0x00600000010a3356
+ (id)sharedInstance;	// IMP=0x00600000010a32a2
- (void).cxx_destruct;	// IMP=0x00000000010a44c7
@property(nonatomic) unsigned long long lastChooseSupplementalItemToInsertCallbackIdentifier; // @synthesize lastChooseSupplementalItemToInsertCallbackIdentifier=_lastChooseSupplementalItemToInsertCallbackIdentifier;
@property(retain, nonatomic) _UIStringAndPositionPair *pendingSupplementalCandidateToInsert; // @synthesize pendingSupplementalCandidateToInsert=_pendingSupplementalCandidateToInsert;
@property(retain, nonatomic) _UIStringAndPositionPair *lastMatchedSupplementalCandidate; // @synthesize lastMatchedSupplementalCandidate=_lastMatchedSupplementalCandidate;
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(nonatomic) _Bool receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode;
@property(nonatomic) _Bool showsCandidateInline; // @synthesize showsCandidateInline;
@property(nonatomic) _Bool showsCandidateBar; // @synthesize showsCandidateBar;
- (void)activate;	// IMP=0x00000000010a4307
- (_Bool)_isAutomaticKeyboard;	// IMP=0x00000000010a42ff
- (void)didSuspend:(id)arg1;	// IMP=0x00000000010a413e
- (void)willResume:(id)arg1;	// IMP=0x00000000010a3b98
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;	// IMP=0x00000000010a39e8
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;	// IMP=0x00000000010a389d
- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1;	// IMP=0x00000000010a35d9
- (_Bool)isAutomatic;	// IMP=0x00000000010a35d1
- (_Bool)isActive;	// IMP=0x00000000010a3530
- (void)maximize;	// IMP=0x00000000010a34ec
- (void)minimize;	// IMP=0x00000000010a34a8
- (void)dealloc;	// IMP=0x00000000010a3433
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000010a3367

@end

