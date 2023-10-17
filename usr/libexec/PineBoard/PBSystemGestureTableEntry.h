//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet, UIGestureRecognizer;

@interface PBSystemGestureTableEntry : NSObject
{
    UIGestureRecognizer *_gestureRecognizer;	// 8 = 0x8
    NSMutableSet *_descriptors;	// 16 = 0x10
    NSMutableOrderedSet *_activeDescriptorStack;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d7489
@property(readonly, nonatomic) NSMutableOrderedSet *activeDescriptorStack; // @synthesize activeDescriptorStack=_activeDescriptorStack;
@property(readonly, nonatomic) NSMutableSet *descriptors; // @synthesize descriptors=_descriptors;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)_resultWithMutationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d73a1
- (id)stateDump;	// IMP=0x00100000000d71e0
- (id)activeSystemGestureRecipeWithSelectionPolicy:(id)arg1;	// IMP=0x00100000000d7148
- (_Bool)isSystemGestureRecipeActive:(id)arg1;	// IMP=0x00100000000d7131
- (id)deactivateSystemGestureRecipe:(id)arg1;	// IMP=0x00100000000d706d
- (id)activateSystemGestureRecipe:(id)arg1;	// IMP=0x00100000000d6f86
- (id)removeSystemGestureRecipe:(id)arg1;	// IMP=0x00100000000d6e97
- (void)addSystemGestureRecipe:(id)arg1;	// IMP=0x00100000000d6e80
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)init;	// IMP=0x00100000000d6dcc

@end
