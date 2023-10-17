//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer;

@interface VOTCrashManager : NSObject
{
    _Bool _didStartFromCrashState;	// 8 = 0x8
    AXDispatchTimer *_crashloopTimer;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000002b684
- (void).cxx_destruct;	// IMP=0x002000000002bbc3
@property(retain, nonatomic) AXDispatchTimer *crashloopTimer; // @synthesize crashloopTimer=_crashloopTimer;
@property(nonatomic) _Bool didStartFromCrashState; // @synthesize didStartFromCrashState=_didStartFromCrashState;
- (void)_resetConsecutiveCrashCount;	// IMP=0x001000000002bb49
- (void)_incrementConsecutiveCrashCount;	// IMP=0x001000000002ba60
@property(readonly, nonatomic) long long consecutiveCrashCount;
- (void)handleStartUp;	// IMP=0x001000000002b718
- (id)_init;	// IMP=0x001000000002b6e9

@end

