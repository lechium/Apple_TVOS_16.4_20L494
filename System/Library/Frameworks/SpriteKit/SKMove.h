//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKMove : SKAction
{
    struct SKCMove *_mycaction;	// 8 = 0x8
}

+ (id)moveByY:(double)arg1 duration:(double)arg2;	// IMP=0x00600000000105a7
+ (id)moveToY:(double)arg1 duration:(double)arg2;	// IMP=0x006000000001050c
+ (id)moveByX:(double)arg1 duration:(double)arg2;	// IMP=0x006000000001046a
+ (id)moveToX:(double)arg1 duration:(double)arg2;	// IMP=0x00600000000103cf
+ (id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x006000000001033d
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x0060000000010324
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x0060000000010273
+ (id)moveBy:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x006000000001025a
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000f7f4
- (id)reversedAction;	// IMP=0x00000000000106f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010649
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fe59
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f909
- (id)init;	// IMP=0x000000000000f7fc

@end

