//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNQuickAction, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNQuickDisambiguateAction
{
    _Bool _ignoreMainAction;	// 120 = 0x78
    NSOrderedSet *_actions;	// 128 = 0x80
    CNQuickAction *_mainAction;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000001a99d
@property(nonatomic) _Bool ignoreMainAction; // @synthesize ignoreMainAction=_ignoreMainAction;
@property(nonatomic) __weak CNQuickAction *mainAction; // @synthesize mainAction=_mainAction;
@property(retain, nonatomic) NSOrderedSet *actions; // @synthesize actions=_actions;
- (id)description;	// IMP=0x000000000001a87c
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a1ad
- (id)subtitleForContext:(long long)arg1;	// IMP=0x000000000001a150
- (id)titleForContext:(long long)arg1;	// IMP=0x000000000001a056
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019f5a
- (id)initWithActions:(id)arg1;	// IMP=0x0000000000019eea

@end
