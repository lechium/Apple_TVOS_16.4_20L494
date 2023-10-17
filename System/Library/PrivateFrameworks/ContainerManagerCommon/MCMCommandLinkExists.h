//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandLinkExists
{
    MCMContainerIdentity *_containerAIdentity;	// 8 = 0x8
    MCMContainerIdentity *_containerBIdentity;	// 16 = 0x10
    unsigned long long _attributes;	// 24 = 0x18
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000bd840
+ (unsigned long long)command;	// IMP=0x00100000000bd80a
- (void).cxx_destruct;	// IMP=0x00000000000bd7b6
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) MCMContainerIdentity *containerBIdentity; // @synthesize containerBIdentity=_containerBIdentity;
@property(readonly, nonatomic) MCMContainerIdentity *containerAIdentity; // @synthesize containerAIdentity=_containerAIdentity;
- (void)execute;	// IMP=0x00000000000bcf59
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000bccbd
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000bcbba

@end

