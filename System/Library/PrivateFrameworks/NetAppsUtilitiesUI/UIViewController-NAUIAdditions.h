//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (NAUIAdditions)
+ (id)recursiveDescription;	// IMP=0x00800000000081cc
- (void)naui_applicationWillEnterForeground;	// IMP=0x00100000000081c6
- (void)naui_applicationDidEnterBackground;	// IMP=0x00100000000081c0
- (_Bool)naui_isDescendantOfViewController:(id)arg1;	// IMP=0x001000000000814a
- (void)naui_loadViewIfNecessary;	// IMP=0x0010000000008127
- (_Bool)naui_hasAxisWithRegularSizeClassOrGreater;	// IMP=0x00100000000080ee
- (_Bool)naui_isVerticalSizeClassRegularOrGreater;	// IMP=0x0010000000008095
- (_Bool)naui_isHorizontalSizeClassRegularOrGreater;	// IMP=0x001000000000803c
- (_Bool)naui_canAnimate;	// IMP=0x0010000000007ff8
- (void)naui_addChildViewWithViewController:(id)arg1 toView:(id)arg2;	// IMP=0x0010000000007f5e
- (void)naui_addChildViewWithViewController:(id)arg1;	// IMP=0x0010000000007ee9
- (id)recursiveDescription;	// IMP=0x001000000000851d
- (id)_recursiveDescriptionWithInset:(id)arg1;	// IMP=0x00100000000081e5
@end

