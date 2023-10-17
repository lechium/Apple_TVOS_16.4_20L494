//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionPerformSelector : SCNAction
{
    SEL _selector;	// 8 = 0x8
    id _target;	// 16 = 0x10
}

+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;	// IMP=0x0060000000122a7a
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000122a10
- (id)reversedAction;	// IMP=0x0000000000122b50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000122aed
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x0000000000122a18
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001229e1
- (_Bool)isCustom;	// IMP=0x00000000001229d9
- (void)dealloc;	// IMP=0x0000000000122997
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000122968
- (id)init;	// IMP=0x000000000012291c

@end
