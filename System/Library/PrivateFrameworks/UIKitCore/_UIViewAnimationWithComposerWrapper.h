//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface _UIViewAnimationWithComposerWrapper : NSObject
{
    id <UIIntervalAnimating> _animation;	// 8 = 0x8
    id <UIViewAnimationComposing> _composer;	// 16 = 0x10
}

+ (id)instanceWithAnimation:(id)arg1 composer:(id)arg2;	// IMP=0x00600000010eac35
- (void).cxx_destruct;	// IMP=0x00000000010eacf0
@property(retain, nonatomic) id <UIViewAnimationComposing> composer; // @synthesize composer=_composer;
@property(retain, nonatomic) id <UIIntervalAnimating> animation; // @synthesize animation=_animation;

@end
