//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMResolvedLink;

__attribute__((visibility("hidden")))
@interface MCMCommandLinkRemove
{
    MCMResolvedLink *_link;	// 8 = 0x8
    unsigned long long _attributes;	// 16 = 0x10
}

+ (Class)incomingMessageClass;	// IMP=0x001000000000437e
+ (unsigned long long)command;	// IMP=0x0010000000004348
- (void).cxx_destruct;	// IMP=0x000000000000430a
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) MCMResolvedLink *link; // @synthesize link=_link;
- (void)execute;	// IMP=0x0000000000003051
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000002f64
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000002e8c

@end

