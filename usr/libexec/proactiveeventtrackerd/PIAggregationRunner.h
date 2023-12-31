//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface PIAggregationRunner : NSObject
{
    _Bool _calledExit;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSObject<OS_xpc_object> *_activity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000121bd
@property _Bool calledExit; // @synthesize calledExit=_calledExit;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
- (void)exitWithCompleted:(_Bool)arg1;	// IMP=0x001000000001200d
- (void)submitClientFeedback:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000011bfd
- (void)run;	// IMP=0x00100000000117f8
- (_Bool)shouldDefer;	// IMP=0x0010000000011739
- (void)register;	// IMP=0x001000000001169b
- (id)init;	// IMP=0x001000000001165c

@end

