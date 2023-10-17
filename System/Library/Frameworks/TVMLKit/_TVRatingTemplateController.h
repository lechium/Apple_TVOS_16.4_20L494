//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class IKViewElement, NSArray, NSString, UIView, _TVCollectionView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _TVRatingTemplateController : UIViewController
{
    IKViewElement *_templateElement;	// 8 = 0x8
    IKViewElement *_titleElement;	// 16 = 0x10
    IKViewElement *_ratingBadgeElement;	// 24 = 0x18
    UIView *_titleView;	// 32 = 0x20
    _TVCollectionView *_collectionView;	// 40 = 0x28
    _Bool _initialSetup;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001711a
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;	// IMP=0x0000000000016e35
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000016b31
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000169b8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000016961
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000016956
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000166ad
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000000000165a5
- (void)viewDidLoad;	// IMP=0x0000000000016265
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000015f92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end
