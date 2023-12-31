//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol _AVFocusContainerDelegate;

__attribute__((visibility("hidden")))
@interface _AVFocusContainerView : UIView
{
    id <_AVFocusContainerDelegate> _focusContainerDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000510f2
@property(nonatomic) __weak id <_AVFocusContainerDelegate> focusContainerDelegate; // @synthesize focusContainerDelegate=_focusContainerDelegate;
- (id)debugDescription;	// IMP=0x0000000000051014
- (id)description;	// IMP=0x0000000000050ec7
- (id)_extraDescription;	// IMP=0x0000000000050c0a
- (void)didMoveToWindow;	// IMP=0x0000000000050b5a
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000050a8b
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000508c6
- (_Bool)canBecomeFocused;	// IMP=0x0000000000050873
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000005086b

@end

