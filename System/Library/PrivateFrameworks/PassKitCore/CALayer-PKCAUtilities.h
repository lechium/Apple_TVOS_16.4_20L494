//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (PKCAUtilities)
- (double)pkui_animateToOpacity:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x006000000007c71a
- (id)_pkui_createNextAdditiveAnimationKeyWithKeyPath:(id)arg1;	// IMP=0x006000000007c4ab
- (id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x006000000007c433
- (id)pkui_addAdditiveAnimation:(id)arg1;	// IMP=0x006000000007c41f
- (id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1;	// IMP=0x006000000007c3a7
- (_Bool)pkui_hasAdditiveAnimationForKeyPath:(id)arg1;	// IMP=0x006000000007c224
- (double)pkui_remainingDurationForAnimation:(id)arg1;	// IMP=0x006000000007c1ac
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;	// IMP=0x006000000007c155
- (double)pkui_elapsedDurationForAnimation:(id)arg1;	// IMP=0x006000000007c0e0
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;	// IMP=0x006000000007c089
@end
