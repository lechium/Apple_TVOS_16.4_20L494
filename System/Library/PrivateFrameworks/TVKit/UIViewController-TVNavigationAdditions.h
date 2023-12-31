//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVRelatedContentViewController;

@interface UIViewController (TVNavigationAdditions)
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x0030000000018fe2
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;	// IMP=0x0030000000018fda
@property(copy, nonatomic) CDUnknownBlockType backdropViewHideStateNeedsUpdatingBlock;
@property(readonly, nonatomic) _Bool shouldHideBackdropView;
@property(readonly, nonatomic) _Bool shouldAnimatePreviewView;
@property(nonatomic, setter=tv_setGuardedByPIN:) _Bool tv_guardedByPIN;
@property(copy, nonatomic, setter=tv_setIdentifier:) NSString *tvIdentifier;
@property(readonly, nonatomic) TVRelatedContentViewController *tv_relatedContentViewController;
@end

