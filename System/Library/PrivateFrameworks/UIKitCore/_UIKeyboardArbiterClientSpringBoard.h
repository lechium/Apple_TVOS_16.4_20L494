//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClientSpringBoard
{
}

- (void)willLock:(id)arg1;	// IMP=0x000000000022ac28
- (void)userSelectedProcessIdentifier:(int)arg1 withSceneIdentity:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000022aa0a
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000022a7be
- (void)restoreKeyboardWithId:(id)arg1;	// IMP=0x000000000022a608
- (void)preserveKeyboardWithId:(id)arg1;	// IMP=0x000000000022a452
- (_Bool)isSpotlight:(id)arg1;	// IMP=0x000000000022a44a
- (void)forceKeyboardAway;	// IMP=0x000000000022a294
- (_Bool)allowedToShowKeyboard;	// IMP=0x000000000022a28c
- (id)init;	// IMP=0x000000000022a1f8

@end
