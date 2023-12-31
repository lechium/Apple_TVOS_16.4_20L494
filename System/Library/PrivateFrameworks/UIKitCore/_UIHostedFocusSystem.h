//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIFocusSystem.h"

@protocol UIFocusEnvironment, _UIHostedFocusSystemDelegate;

__attribute__((visibility("hidden")))
@interface _UIHostedFocusSystem : UIFocusSystem
{
    _Bool _didSetFocusSoundGenerator;	// 8 = 0x8
    id <UIFocusEnvironment> _hostEnvironment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000064f5bf
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> hostEnvironment; // @synthesize hostEnvironment=_hostEnvironment;
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x000000000064f51f
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x000000000064f49a
- (_Bool)_focusSystemIsValid;	// IMP=0x000000000064f41d
- (_Bool)_prefersDeferralForFocusUpdateInContext:(id)arg1;	// IMP=0x000000000064f415
- (_Bool)_postsFocusUpdateNotifications;	// IMP=0x000000000064f40d
- (_Bool)_requiresFocusedItemToHaveContainingView;	// IMP=0x000000000064f405
- (void)_setFocusSoundGenerator:(id)arg1;	// IMP=0x000000000064f3cb
- (id)_focusSoundGenerator;	// IMP=0x000000000064f32c
- (id)_hostFocusSystem;	// IMP=0x000000000064f2a9
- (_Bool)containsChildOfHostEnvironment:(id)arg1;	// IMP=0x000000000064f1b8
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <_UIHostedFocusSystemDelegate> delegate;
- (id)_initWithHostEnvironment:(id)arg1;	// IMP=0x000000000064ee13

@end

