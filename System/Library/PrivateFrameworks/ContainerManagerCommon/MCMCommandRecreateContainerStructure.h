//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandRecreateContainerStructure
{
    MCMConcreteContainerIdentity *_concreteContainerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000bc831
+ (unsigned long long)command;	// IMP=0x00100000000bc7fb
- (void).cxx_destruct;	// IMP=0x00000000000bc7bd
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // @synthesize concreteContainerIdentity=_concreteContainerIdentity;
- (void)execute;	// IMP=0x00000000000bba75
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000bb9dc
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000bb920
- (id)initWithConcreteContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3;	// IMP=0x00000000000bb87b

@end

