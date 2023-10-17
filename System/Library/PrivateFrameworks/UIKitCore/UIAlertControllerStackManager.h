//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface UIAlertControllerStackManager : NSObject
{
    NSMutableArray *_alertControllerStack;	// 8 = 0x8
    NSMutableArray *_hiddenAlertControllers;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007451b
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (long long)_alertControllerStackCount;	// IMP=0x00000000000744f4
- (_Bool)_alertControllerShouldBeTrackedInStack:(id)arg1;	// IMP=0x000000000007441a
- (void)_didHideAlertController:(id)arg1;	// IMP=0x000000000007432e
- (void)_willHideAlertController:(id)arg1;	// IMP=0x0000000000074328
- (void)_willShowAlertController:(id)arg1;	// IMP=0x000000000007423c
- (id)_topAlertControllerInStack;	// IMP=0x0000000000074226
- (void)_removeAlertControllerFromStack:(id)arg1;	// IMP=0x0000000000074161
- (void)_addAlertControllerToStack:(id)arg1;	// IMP=0x000000000007409c
- (void)_showHiddenStackedAlertControllers;	// IMP=0x0000000000073e01
- (void)_hideStackedAlertControllers;	// IMP=0x0000000000073b96
- (void)_alertControllerDidDisappear:(id)arg1;	// IMP=0x0000000000073b33
- (void)_alertControllerWillDisappear:(id)arg1;	// IMP=0x0000000000073a40
- (void)_alertControllerDidAppear:(id)arg1;	// IMP=0x0000000000073a3a
- (void)_alertControllerWillAppear:(id)arg1;	// IMP=0x00000000000739d0
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000073933

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
