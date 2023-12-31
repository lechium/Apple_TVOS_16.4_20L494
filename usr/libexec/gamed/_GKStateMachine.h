//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol _GKStateMachineDelegate;

@interface _GKStateMachine : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _shouldLogStateTransitions;	// 12 = 0xc
    NSDictionary *_validTransitions;	// 16 = 0x10
    id <_GKStateMachineDelegate> _delegate;	// 24 = 0x18
    NSString *_currentState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001cf47f
@property __weak id <_GKStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
@property(nonatomic) _Bool shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00100000001cf0f6
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00100000001ce895
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00100000001ce863
- (_Bool)_setCurrentState:(id)arg1;	// IMP=0x00100000001ce5a5
@property(retain) NSString *currentState; // @synthesize currentState=_currentState;
- (_Bool)applyState:(id)arg1;	// IMP=0x00100000001ce581
- (id)init;	// IMP=0x00100000001ce50f

@end

