//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SDDeferrableOperation : NSObject
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *;	// 0 = 0x0
    MISSING_TYPE *operation;	// 0 = 0x0
    MISSING_TYPE *queue;	// 0 = 0x0
    MISSING_TYPE *timedReasons;	// 0 = 0x0
    MISSING_TYPE *reasons;	// 0 = 0x0
    MISSING_TYPE *pendingOperation;	// 0 = 0x0
    MISSING_TYPE *mainTimer;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000001b1a40
- (id)init;	// IMP=0x00100000001b19e0
- (_Bool)returnHasActiveTimer;	// IMP=0x00100000001b19c0
- (id)returnPreventUntilDate;	// IMP=0x00100000001b1910
- (void)scheduleOperation;	// IMP=0x00100000001af920
- (void)pushPreventionDateForReason:(id)arg1 newDate:(id)arg2;	// IMP=0x00100000001af350
- (void)removeReason:(id)arg1;	// IMP=0x00100000001ae4b0
- (void)addReason:(id)arg1;	// IMP=0x00100000001adbb0
- (id);	// IMP=0x00100000001ad5c0

@end
