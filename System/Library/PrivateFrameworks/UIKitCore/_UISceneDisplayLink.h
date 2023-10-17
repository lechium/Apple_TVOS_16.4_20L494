//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLink : NSObject
{
    NSMutableArray *_targetsAndActions;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

+ (id)sceneDisplayLinkForWindowScene:(id)arg1;	// IMP=0x00100000005bf02d
- (void).cxx_destruct;	// IMP=0x00000000005bfae0
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_displayLinkTick:(id)arg1;	// IMP=0x00000000005bf703
- (void)_updateStatus;	// IMP=0x00000000005bf4eb
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;	// IMP=0x00000000005bf4d9
- (void)unregisterTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000005bf1f2
- (void)registerTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000005bf12e
- (id)initWithScene:(id)arg1;	// IMP=0x00000000005bf0ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
