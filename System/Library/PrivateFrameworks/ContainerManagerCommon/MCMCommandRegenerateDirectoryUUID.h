//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMConcreteContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandRegenerateDirectoryUUID
{
    MCMConcreteContainerIdentity *_concreteContainerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000bb83f
+ (unsigned long long)command;	// IMP=0x00100000000bb809
- (void).cxx_destruct;	// IMP=0x00000000000bb7cb
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // @synthesize concreteContainerIdentity=_concreteContainerIdentity;
- (id)regenerateDirectoryUUIDNoCacheUpdateWithMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000baf00
- (void)execute;	// IMP=0x00000000000bab43
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000baaac
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000ba9f0
- (id)initWithConcreteContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3;	// IMP=0x00000000000ba94b

@end

