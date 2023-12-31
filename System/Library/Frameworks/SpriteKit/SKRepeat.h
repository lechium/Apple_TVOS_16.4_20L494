//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKRepeat : SKAction
{
    struct SKCRepeat *_mycaction;	// 8 = 0x8
    SKAction *_repeatedAction;	// 16 = 0x10
}

+ (id)repeatActionForever:(id)arg1;	// IMP=0x006000000001500c
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x0060000000014ed3
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000148b0
- (void).cxx_destruct;	// IMP=0x00000000000152cf
- (id)reversedAction;	// IMP=0x0000000000015218
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001516d
- (id)subactions;	// IMP=0x0000000000015102
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014d3e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014a28
- (id)init;	// IMP=0x00000000000148b8

@end

