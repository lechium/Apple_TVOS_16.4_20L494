//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIVisualEffect.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICompoundEffect : UIVisualEffect
{
    NSArray *_effects;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000d7835
- (void).cxx_destruct;	// IMP=0x00000000000d7cd7
- (id)description;	// IMP=0x00000000000d7c58
- (long long)_expectedUsage;	// IMP=0x00000000000d7b7f
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000d7a18
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d78d1
- (id)_allEffects;	// IMP=0x00000000000d78bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d785a
- (unsigned long long)hash;	// IMP=0x00000000000d783d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d77b8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d772c
- (id)initWithEffects:(id)arg1;	// IMP=0x00000000000d74c7

@end
