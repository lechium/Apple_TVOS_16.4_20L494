//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKAnimateWarp : SKAction
{
    struct SKCAnimateMesh *_mycaction;	// 8 = 0x8
}

+ (id)animateWithWarps:(id)arg1 times:(id)arg2 restore:(_Bool)arg3;	// IMP=0x0060000000025166
+ (id)animateWithWarps:(id)arg1 times:(id)arg2;	// IMP=0x006000000002513a
+ (id)warpTo:(id)arg1 duration:(double)arg2;	// IMP=0x0060000000024fe2
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000024edc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025c68
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025954
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025885
- (id)init;	// IMP=0x0000000000024ee4

@end
