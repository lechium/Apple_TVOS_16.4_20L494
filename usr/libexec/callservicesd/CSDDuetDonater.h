//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDDuetDonater : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *maxDuration;	// 16 = 0x10
    MISSING_TYPE *unknownShortCallSignal;	// 24 = 0x18
    MISSING_TYPE *knownCallerSignal;	// 40 = 0x28
    MISSING_TYPE *junkCallSignal;	// 56 = 0x38
    MISSING_TYPE *linkCreatedSignal;	// 72 = 0x48
    MISSING_TYPE *silenceUnknownCallersEnabledObserver;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00400000002187b0
- (id)init;	// IMP=0x0010000000218c30
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x0010000000218a80
- (void)reportingController:(id)arg1 addedActivatedLink:(id)arg2;	// IMP=0x0010000000218a00
- (void)dealloc;	// IMP=0x0010000000218720
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000218680

@end

