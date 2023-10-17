//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CADisplayLink, NSOperation, NSString, UITextRange;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView
{
    UITextRange *_range;	// 8 = 0x8
    id _placeholder;	// 16 = 0x10
    _Bool _didHaveText;	// 24 = 0x18
    _Bool _willInsertResult;	// 25 = 0x19
    double _angle;	// 32 = 0x20
    double _diameter;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _shrinkStartTime;	// 64 = 0x40
    _Bool _shrinking;	// 72 = 0x48
    NSOperation *_afterShrinkCompletionInvocation;	// 80 = 0x50
    id <UITextCursorAssertion> _blinkAssertion;	// 88 = 0x58
}

+ (long long)fallbackPlaceholderLength;	// IMP=0x00100000009be79f
+ (id)activeInstance;	// IMP=0x00100000009be78e
+ (id)sharedInstance;	// IMP=0x00100000009be716
+ (double)widthForLineHeight:(double)arg1;	// IMP=0x00100000009be6b6
+ (double)diameterForLineHeight:(double)arg1;	// IMP=0x00100000009be698
- (void).cxx_destruct;	// IMP=0x00000000009c0d98
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(nonatomic) _Bool willInsertResult; // @synthesize willInsertResult=_willInsertResult;
- (id)_timingFunctionForAnimation;	// IMP=0x00000000009c0d30
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000009c0d14
- (double)fadeOutDuration;	// IMP=0x00000000009c0cbd
- (void)stopLandingForError;	// IMP=0x00000000009c0840
- (void)errorShakeDidFinish;	// IMP=0x00000000009c0758
- (_Bool)hasActivePlaceholder;	// IMP=0x00000000009c0743
- (void)stopLanding;	// IMP=0x00000000009c0417
- (void)startLandingIfNecessary;	// IMP=0x00000000009bfde5
- (void)performRemoteSelector:(SEL)arg1;	// IMP=0x00000000009bfc5a
- (void)startDisplayLinkIfNecessary;	// IMP=0x00000000009bf93d
- (void)showCursor;	// IMP=0x00000000009bf7ea
- (void)hideCursor;	// IMP=0x00000000009bf69f
- (_Bool)delegateWasEmpty;	// IMP=0x00000000009bf679
- (void)updatePosition;	// IMP=0x00000000009bf365
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000009bedab
- (void)advanceLanding:(id)arg1;	// IMP=0x00000000009bead6
- (void)shrinkWithCompletion:(id)arg1;	// IMP=0x00000000009be98c
- (void)rotateBy:(double)arg1;	// IMP=0x00000000009be924
- (void)clearRotation;	// IMP=0x00000000009be8c6
- (void)dealloc;	// IMP=0x00000000009be888
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009be7b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

