//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimer.h>

@interface NSTimer (NSTimer)
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;	// IMP=0x00800000004ff510
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00800000004ff481
+ (id)timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00800000004ff413
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x00800000004ff371
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x00800000004ff2f0
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;	// IMP=0x00800000004ff243
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;	// IMP=0x00800000004ff1b7
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00800000004ff18a
- (double)_cffireTime;	// IMP=0x00100000004ff86d
- (CDStruct_e097db04)context;	// IMP=0x00100000004ff852
- (void)setFireTime:(double)arg1;	// IMP=0x00100000004ff81a
- (double)fireTime;	// IMP=0x00100000004ff7ef
- (double)interval;	// IMP=0x00100000004ff7dd
- (long long)order;	// IMP=0x00100000004ff7d5
- (struct __CFString *)copyDebugDescription;	// IMP=0x00100000004ff7ba
- (id)userInfo;	// IMP=0x00100000004ff7b2
- (void)setFireDate:(id)arg1;	// IMP=0x00100000004ff787
- (id)fireDate;	// IMP=0x00100000004ff759
- (void)fire;	// IMP=0x00100000004ff72e
- (void)setTolerance:(double)arg1;	// IMP=0x00100000004ff703
- (double)tolerance;	// IMP=0x00100000004ff6d4
- (double)timeInterval;	// IMP=0x00100000004ff6a5
- (_Bool)isValid;	// IMP=0x00100000004ff677
- (void)invalidate;	// IMP=0x00100000004ff64c
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;	// IMP=0x00100000004ff63f
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000004ff56a
@end

