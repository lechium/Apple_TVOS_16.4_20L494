//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _TVProductCollectionViewCell : UICollectionViewCell
{
    UIView *_titleView;	// 8 = 0x8
    struct UIEdgeInsets _activeMargins;	// 16 = 0x10
    _Bool _marginActive;	// 48 = 0x30
    UIViewController *_viewController;	// 56 = 0x38
    struct UIEdgeInsets _partialMargins;	// 64 = 0x40
    struct UIEdgeInsets _margins;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000013c37
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) struct UIEdgeInsets partialMargins; // @synthesize partialMargins=_partialMargins;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)preferredFocusEnvironments;	// IMP=0x0000000000013ae8
- (_Bool)canBecomeFocused;	// IMP=0x0000000000013a0f
- (void)prepareForReuse;	// IMP=0x00000000000138f5
- (void)layoutSubviews;	// IMP=0x0000000000013562
- (void)disableMargins;	// IMP=0x0000000000013475
- (void)enableWithMargins:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000133b5
- (_Bool)isShowingTitleView;	// IMP=0x000000000001338c
- (void)showTitleView:(_Bool)arg1;	// IMP=0x0000000000013176
- (void)setTitleView:(id)arg1 margins:(struct UIEdgeInsets)arg2 show:(_Bool)arg3;	// IMP=0x00000000000130a9
- (id)titleView;	// IMP=0x0000000000013094

@end

