//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSDCrashReporter : NSObject
{
}

+ (void)simulateCrashReportWithFormat:(id)arg1;	// IMP=0x00400000000098ac
+ (void)simulateCrashReportFromPID:(int)arg1 withKillCode:(unsigned int)arg2 usingReasonWithFormat:(id)arg3;	// IMP=0x0010000000009799
+ (void)simulateCrashReportWithReason:(id)arg1 pid:(int)arg2 code:(unsigned int)arg3;	// IMP=0x0010000000009737

@end

