//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMCommandCrashTest
{
    unsigned long long _crashCount;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000033726
+ (unsigned long long)command;	// IMP=0x00100000000336f0
@property(readonly, nonatomic) unsigned long long crashCount; // @synthesize crashCount=_crashCount;
- (void)execute;	// IMP=0x0000000000032c12
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000032b36
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000032a8c

@end

