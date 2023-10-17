//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableSet, SFRemoteTextInputClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDSharedRemoteTextInputClient : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableSet *_delegates;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_overrunTimer;	// 24 = 0x18
    SFRemoteTextInputClient *_rtiClient;	// 32 = 0x20
    NSDate *_sessionClock;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
}

+ (id)sharedClient;	// IMP=0x00400000000a6d93
- (void).cxx_destruct;	// IMP=0x00200000000a7b5e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_stopClock:(unsigned long long)arg1;	// IMP=0x00100000000a7b2c
- (void)_startClockWithResetIfNeeded;	// IMP=0x00100000000a78fc
- (void)_logEvent:(unsigned long long)arg1 stopClock:(_Bool)arg2;	// IMP=0x00100000000a76e0
- (void)_rtiHandleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00100000000a7588
- (void)_rtiHandleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00100000000a7435
- (void)_rtiHandleEventWithData:(id)arg1;	// IMP=0x00100000000a72e6
- (void)prefsChanged;	// IMP=0x00100000000a72e0
- (void)handleUsername:(id)arg1 password:(id)arg2;	// IMP=0x00100000000a72ca
- (void)handleTextInputData:(id)arg1;	// IMP=0x00100000000a72b4
- (void)removeAllDelegates;	// IMP=0x00100000000a7282
- (void)removeDelegate:(id)arg1;	// IMP=0x00100000000a7200
- (void)addDelegate:(id)arg1;	// IMP=0x00100000000a715b
- (void)invalidate;	// IMP=0x00100000000a7068
@property(readonly, copy, nonatomic) NSDictionary *currentPayload;
- (void)activate;	// IMP=0x00100000000a6fe9
- (void)_ensureStarted;	// IMP=0x00100000000a6e3f
- (id)init;	// IMP=0x00100000000a6de8

@end

