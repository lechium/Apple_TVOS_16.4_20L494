//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RMDebounceTimer;
@protocol RMDeviceLockStateListenerDelegate;

@interface RMDeviceLockStateListener : NSObject
{
    NSObject *_syncLock;	// 8 = 0x8
    _Bool _previousLockState;	// 16 = 0x10
    _Bool _listening;	// 17 = 0x11
    id <RMDeviceLockStateListenerDelegate> _delegate;	// 24 = 0x18
    RMDebounceTimer *_debouncer;	// 32 = 0x20
}

+ (id)newListenerWithDelegate:(id)arg1;	// IMP=0x002000000002c702
- (void).cxx_destruct;	// IMP=0x002000000002ccff
@property(retain, nonatomic) RMDebounceTimer *debouncer; // @synthesize debouncer=_debouncer;
@property(nonatomic) __weak id <RMDeviceLockStateListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)triggerAggregatingTimerAction;	// IMP=0x001000000002cb22
- (void)didReceiveNotification:(id)arg1;	// IMP=0x001000000002ca69
- (void)stopListening;	// IMP=0x001000000002c9dd
- (void)startListening;	// IMP=0x001000000002c858
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000002c74b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
