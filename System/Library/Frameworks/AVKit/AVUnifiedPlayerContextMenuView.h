//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, _AVUnifiedPlayerContextMenuGradientMaskView, _UIFloatingContentView;
@protocol AVUnifiedPlayerContextMenuViewDelegate;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerContextMenuView : UIView
{
    _UIFloatingContentView *_backgroundView;	// 8 = 0x8
    UICollectionView *_clippedCollectionView;	// 16 = 0x10
    UICollectionView *_focusableCollectionView;	// 24 = 0x18
    NSArray *_collectionViews;	// 32 = 0x20
    id <AVUnifiedPlayerContextMenuViewDelegate> _delegate;	// 40 = 0x28
    UIView *_maskingVisualEffectView;	// 48 = 0x30
    _AVUnifiedPlayerContextMenuGradientMaskView *_gradientMaskView;	// 56 = 0x38
}

+ (id)_createVisualEffectView;	// IMP=0x00600000000ac33c
+ (id)_createBackgroundView;	// IMP=0x00600000000abeed
- (void).cxx_destruct;	// IMP=0x00000000000ab426
@property(readonly, nonatomic) _AVUnifiedPlayerContextMenuGradientMaskView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(readonly, nonatomic) UIView *maskingVisualEffectView; // @synthesize maskingVisualEffectView=_maskingVisualEffectView;
@property(nonatomic) __weak id <AVUnifiedPlayerContextMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *collectionViews; // @synthesize collectionViews=_collectionViews;
@property(readonly, nonatomic) UICollectionView *focusableCollectionView; // @synthesize focusableCollectionView=_focusableCollectionView;
@property(readonly, nonatomic) UICollectionView *clippedCollectionView; // @synthesize clippedCollectionView=_clippedCollectionView;
@property(readonly, nonatomic) _UIFloatingContentView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)_collectionViewLayout;	// IMP=0x00000000000ab098
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000aafe1
- (void)layoutSubviews;	// IMP=0x00000000000aae6d
- (id)preferredFocusEnvironments;	// IMP=0x00000000000aae46
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000aae29
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000aae09
- (void)dealloc;	// IMP=0x00000000000aadb6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a9cac

@end

