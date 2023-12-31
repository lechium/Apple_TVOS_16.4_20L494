//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol AVFocusProxyViewDelegateProtocol;

__attribute__((visibility("hidden")))
@interface AVFocusProxyView : UIView
{
    UIView<AVFocusProxyViewDelegateProtocol> *_targetView;	// 8 = 0x8
    NSArray *_constraintsToTargetView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c1bf
@property(retain, nonatomic) NSArray *constraintsToTargetView; // @synthesize constraintsToTargetView=_constraintsToTargetView;
@property(retain, nonatomic, getter=_targetView, setter=_setTargetView:) UIView<AVFocusProxyViewDelegateProtocol> *targetView; // @synthesize targetView=_targetView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000000c049
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000000bfaa
- (_Bool)canBecomeFocused;	// IMP=0x000000000000bf66
- (void)removeGestureRecognizer:(id)arg1;	// IMP=0x000000000000bf60
- (void)addGestureRecognizer:(id)arg1;	// IMP=0x000000000000bf5a
- (void)removeSpecialGestureRecognizer:(id)arg1;	// IMP=0x000000000000bf2b
- (void)addSpecialGestureRecognizer:(id)arg1;	// IMP=0x000000000000befc
- (void)didMoveToWindow;	// IMP=0x000000000000bd6a
- (id)description;	// IMP=0x000000000000b965
- (void)addSubview:(id)arg1;	// IMP=0x000000000000b95f
- (void)setProxyViewVisible:(_Bool)arg1;	// IMP=0x000000000000b8c3
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000000b892
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b83d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000b7d7

@end

