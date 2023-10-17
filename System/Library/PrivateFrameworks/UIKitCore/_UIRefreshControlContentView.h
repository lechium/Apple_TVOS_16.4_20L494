//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSAttributedString, UIColor, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView
{
    UIRefreshControl *_refreshControl;	// 144 = 0x90
    UIColor *_tintColor;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000568c60
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)_removeAllAnimations;	// IMP=0x0000000000568c13
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// IMP=0x0000000000568c0a
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000000568c04
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000000568bbd
- (void)refreshControlInvalidatedSnappingHeight;	// IMP=0x0000000000568bb7
@property(readonly, nonatomic) double maximumSnappingHeight;
@property(readonly, nonatomic) double minimumSnappingHeight;
@property(readonly, nonatomic) long long style;
@property(retain, nonatomic) NSAttributedString *attributedTitle;

@end

