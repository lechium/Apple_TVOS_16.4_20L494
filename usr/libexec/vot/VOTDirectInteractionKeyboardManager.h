//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXAccessQueueTimer, NSMutableDictionary, VOTElement;
@protocol VOTGestureKeyboardDelegate;

@interface VOTDirectInteractionKeyboardManager : NSObject
{
    AXAccessQueue *_dispatchAccessQueue;	// 8 = 0x8
    AXAccessQueueTimer *_dispatchTimer;	// 16 = 0x10
    NSMutableDictionary *_dispatchTable;	// 24 = 0x18
    _Bool _inDirectInteractionTypingMode;	// 32 = 0x20
    _Bool _inGestureMode;	// 33 = 0x21
    id <VOTGestureKeyboardDelegate> _delegate;	// 40 = 0x28
    VOTElement *_keyboardElement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000fda2b
@property(nonatomic) _Bool inGestureMode; // @synthesize inGestureMode=_inGestureMode;
@property(retain, nonatomic) VOTElement *keyboardElement; // @synthesize keyboardElement=_keyboardElement;
@property(nonatomic) __weak id <VOTGestureKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool inDirectInteractionTypingMode; // @synthesize inDirectInteractionTypingMode=_inDirectInteractionTypingMode;
- (void)_handleCommitTyping:(id)arg1;	// IMP=0x00100000000fd95f
- (void)_handleTypingPeriod:(id)arg1;	// IMP=0x00100000000fd8c3
- (void)_handleTypingEnter:(id)arg1;	// IMP=0x00100000000fd827
- (void)_handleShift:(id)arg1;	// IMP=0x00100000000fd7b8
- (void)_handleShiftLock:(id)arg1;	// IMP=0x00100000000fd749
- (void)_handleDelete:(id)arg1;	// IMP=0x00100000000fd6da
- (void)_handleKeyboardSelection:(id)arg1;	// IMP=0x00100000000fd618
- (void)_handleKeyplaneSelection:(id)arg1;	// IMP=0x00100000000fd55a
- (void)_handleSuggestionSelection:(id)arg1;	// IMP=0x00100000000fd49c
- (void)_processEvent:(id)arg1;	// IMP=0x00100000000fd410
- (_Bool)processEvent:(id)arg1;	// IMP=0x00100000000fd2bc
@property(readonly, nonatomic) struct CGRect gestureKeyboardRegion;
- (void);	// IMP=0x00100000000fd057
- (_Bool)inGestureTypingMode;	// IMP=0x00100000000fd04f
- (void)_updateTypingMode;	// IMP=0x00100000000fcade
- (void)updateKeyboardElement;	// IMP=0x00100000000fca75
- (void)_updateKeyboardElement;	// IMP=0x00100000000fca44
- (void)updateTypingMode;	// IMP=0x00100000000fc9db
- (void)screenChange:(id)arg1;	// IMP=0x00100000000fc9ad
- (void)_initializeDispatchTable;	// IMP=0x00100000000fc44c
- (void)dealloc;	// IMP=0x00100000000fc3d7
- (id)init;	// IMP=0x00100000000fc287

@end
