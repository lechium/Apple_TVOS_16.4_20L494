//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFocusAnimationCoordinator, UIFocusSystem, UIWindow, _UIFocusInputDeviceInfo, _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusSearchInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementRequest : NSObject
{
    _Bool _shouldPerformHapticFeedback;	// 8 = 0x8
    UIFocusSystem *_focusSystem;	// 16 = 0x10
    _UIFocusInputDeviceInfo *_inputDeviceInfo;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
    _UIFocusItemInfo *_focusedItemInfo;	// 40 = 0x28
    _UIFocusMovementInfo *_movementInfo;	// 48 = 0x30
    _UIFocusSearchInfo *_searchInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000064e1d7
@property(retain, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) _UIFocusMovementInfo *movementInfo; // @synthesize movementInfo=_movementInfo;
@property(retain, nonatomic) _UIFocusItemInfo *focusedItemInfo; // @synthesize focusedItemInfo=_focusedItemInfo;
@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo; // @synthesize inputDeviceInfo=_inputDeviceInfo;
@property(nonatomic) _Bool shouldPerformHapticFeedback; // @synthesize shouldPerformHapticFeedback=_shouldPerformHapticFeedback;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property(readonly, nonatomic) _Bool allowsOverridingPreferedFocusEnvironments;
@property(readonly, nonatomic) _Bool allowsDeferral;
@property(readonly, nonatomic) _Bool allowsFocusingCurrentItem;
@property(readonly, nonatomic) _Bool requiresEnvironmentValidation;
@property(readonly, nonatomic) _Bool requiresNextFocusedItem;
@property(readonly, nonatomic) _Bool shouldPlayFocusSound;
@property(readonly, nonatomic, getter=shouldScrollIfNecessary) _Bool scrollIfNecessary;
@property(readonly, nonatomic, getter=isMovementRequest) _Bool movementRequest;
@property(readonly, nonatomic) UIFocusAnimationCoordinator *animationCoordinator;
@property(readonly, nonatomic) _UIFocusMovementRequest *fallbackRequest;
- (id)_requestByRedirectingRequestToFocusSystem:(id)arg1;	// IMP=0x000000000064deb6
- (id)initWithFocusSystem:(id)arg1 window:(id)arg2;	// IMP=0x000000000064ddad
- (id)init;	// IMP=0x000000000064dd26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

