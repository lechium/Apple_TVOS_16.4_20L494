//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandProcessRestoredContainer
{
    MCMConcreteContainerIdentity *_concreteContainerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000707ae
+ (unsigned long long)command;	// IMP=0x0010000000070778
- (void).cxx_destruct;	// IMP=0x000000000007073a
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // @synthesize concreteContainerIdentity=_concreteContainerIdentity;
- (void)execute;	// IMP=0x000000000007053b
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000704a2
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000703e6
- (id)initWithConcreteContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3;	// IMP=0x0000000000070341

@end

