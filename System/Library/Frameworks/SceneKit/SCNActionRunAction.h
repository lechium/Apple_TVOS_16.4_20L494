//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNActionRunAction : SCNAction
{
    SCNAction *_action;	// 8 = 0x8
    NSString *_subSpriteKey;	// 16 = 0x10
    NSString *_actionKey;	// 24 = 0x18
    _Bool _waitForKeyedAction;	// 32 = 0x20
    _Bool _runOnSubSprite;	// 33 = 0x21
    _Bool _fired;	// 34 = 0x22
}

+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;	// IMP=0x0060000000144e88
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;	// IMP=0x0060000000144e0a
- (id)reversedAction;	// IMP=0x000000000014513f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001450a4
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x0000000000144fb0
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;	// IMP=0x0000000000144f74
- (_Bool)isCustom;	// IMP=0x0000000000144f6c
- (void)dealloc;	// IMP=0x0000000000144f06
- (id)init;	// IMP=0x0000000000144d95

@end

