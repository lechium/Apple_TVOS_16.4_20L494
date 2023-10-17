//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, NSTimer, UIDimmingView, UIInputSwitcherSelectionExtraView, UIInputSwitcherShadowView, UIInputSwitcherTableView, UIKBKeyView, UIKBTree, UIKeyboardLayoutStar;

__attribute__((visibility("hidden")))
@interface UIKeyboardMenuView : UIView
{
    UIInputSwitcherTableView *m_table;	// 8 = 0x8
    UIInputSwitcherShadowView *m_shadowView;	// 16 = 0x10
    UIInputSwitcherSelectionExtraView *m_selExtraView;	// 24 = 0x18
    struct CGRect m_referenceRect;	// 32 = 0x20
    double m_pointerOffset;	// 64 = 0x40
    _Bool m_scrollable;	// 72 = 0x48
    _Bool m_startAutoscroll;	// 73 = 0x49
    _Bool m_scrolling;	// 74 = 0x4a
    _Bool m_shouldFade;	// 75 = 0x4b
    struct CGPoint m_point;	// 80 = 0x50
    double m_scrollStartTime;	// 96 = 0x60
    int m_scrollDirection;	// 104 = 0x68
    NSTimer *m_scrollTimer;	// 112 = 0x70
    unsigned long long m_visibleRows;	// 120 = 0x78
    unsigned long long m_firstVisibleRow;	// 128 = 0x80
    long long m_mode;	// 136 = 0x88
    UIDimmingView *m_dimmingView;	// 144 = 0x90
    UIView *m_inputView;	// 152 = 0x98
    struct CGPoint m_referenceLocation;	// 160 = 0xa0
    UIKBKeyView *m_backgroundKeyView;	// 176 = 0xb0
    double m_timeDismissed;	// 184 = 0xb8
    _Bool _usesStraightLeftEdge;	// 192 = 0xc0
    _Bool _usesDarkTheme;	// 193 = 0xc1
    _Bool _showingCapsLockSwitcher;	// 194 = 0xc2
    long long _indexForSelectedFastSwitchMode;	// 200 = 0xc8
    long long _indexForUnselectedFastSwitchMode;	// 208 = 0xd0
    UIKBTree *_referenceKey;	// 216 = 0xd8
    UIKeyboardLayoutStar *_layout;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000087440e
@property(nonatomic) UIKeyboardLayoutStar *layout; // @synthesize layout=_layout;
@property(nonatomic) UIKBTree *referenceKey; // @synthesize referenceKey=_referenceKey;
@property(nonatomic) long long indexForUnselectedFastSwitchMode; // @synthesize indexForUnselectedFastSwitchMode=_indexForUnselectedFastSwitchMode;
@property(nonatomic) long long indexForSelectedFastSwitchMode; // @synthesize indexForSelectedFastSwitchMode=_indexForSelectedFastSwitchMode;
@property(nonatomic) _Bool showingCapsLockSwitcher; // @synthesize showingCapsLockSwitcher=_showingCapsLockSwitcher;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) _Bool usesStraightLeftEdge; // @synthesize usesStraightLeftEdge=_usesStraightLeftEdge;
@property(nonatomic) long long mode; // @synthesize mode=m_mode;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008742f2
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008742e5
- (id)fontForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008742d3
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008742cb
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008742b9
- (id)titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008742ac
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008742a6
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000087429e
- (struct CGSize)preferredSize;	// IMP=0x0000000000874288
- (unsigned long long)defaultSelectedIndex;	// IMP=0x0000000000874280
- (unsigned long long)numberOfItems;	// IMP=0x0000000000874278
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000874272
- (void)willFade;	// IMP=0x000000000087426c
- (void)didShow;	// IMP=0x0000000000874266
- (void)willShow;	// IMP=0x0000000000874219
- (_Bool)shouldShow;	// IMP=0x0000000000874211
- (struct CGRect)popupRect;	// IMP=0x00000000008741d3
- (void)setRenderConfig:(id)arg1;	// IMP=0x00000000008740b1
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000087409f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000873fca
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000873f63
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000873efc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000873e9e
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000873e42
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000873dbd
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000873cbf
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000873cb1
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000873be8
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000873b72
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000873b60
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000087348b
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(_Bool)arg2;	// IMP=0x00000000008731db
- (void)selectItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000873140
- (_Bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;	// IMP=0x00000000008730b1
- (void)highlightRow:(unsigned long long)arg1;	// IMP=0x0000000000872e52
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000872959
- (struct CGRect)interactiveBounds;	// IMP=0x00000000008726f0
- (id)indexPathForInputSwitcherCellIncludingInteractiveInsetsAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000872472
- (void)autoscrollTimerFired:(id)arg1;	// IMP=0x0000000000872025
- (void)stopAnyAutoscrolling;	// IMP=0x0000000000871f12
- (void)endScrolling:(id)arg1;	// IMP=0x0000000000871eab
- (void)setNeedsDisplay;	// IMP=0x0000000000871d1a
- (void)setNeedsDisplayForTopBottomCells;	// IMP=0x0000000000871c54
- (void)setNeedsDisplayForCell:(id)arg1;	// IMP=0x0000000000871c14
- (void)hide;	// IMP=0x0000000000871b3d
- (void)removeFromSuperview;	// IMP=0x0000000000871aff
- (_Bool)launchedFromKeyboard;	// IMP=0x0000000000871abb
- (void)clear;	// IMP=0x00000000008719fa
- (void)fadeWithDelay:(double)arg1 forSelectionAtIndex:(unsigned long long)arg2;	// IMP=0x00000000008717ed
- (void)fadeWithDelay:(double)arg1;	// IMP=0x00000000008717d1
- (void)fade;	// IMP=0x000000000087179d
- (void)_delayedFade;	// IMP=0x0000000000871524
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;	// IMP=0x00000000008710eb
- (unsigned long long)_internationalKeyRoundedCornerInLayout:(id)arg1;	// IMP=0x000000000087108d
- (double)minYOfLastTableCellForSelectionExtraView;	// IMP=0x0000000000870f7b
- (id)maskForShadowViewBlurredBackground;	// IMP=0x0000000000870cb5
- (id)containerView;	// IMP=0x00000000008709d8
- (void)showAsHUD;	// IMP=0x00000000008709a8
- (void)showAsHUDFromLocation:(struct CGPoint)arg1 withInputView:(id)arg2 touchBegan:(double)arg3;	// IMP=0x0000000000870833
- (id)_renderConfig;	// IMP=0x000000000087075c
- (void)setupShadowViewWithSize:(struct CGSize)arg1;	// IMP=0x0000000000870614
- (void)setupBackgroundKeyViewWithSize:(struct CGSize)arg1;	// IMP=0x00000000008700b9
- (void)show;	// IMP=0x000000000086f237
- (void)insertSelExtraView;	// IMP=0x000000000086f1e3
- (_Bool)usesShadowView;	// IMP=0x000000000086f1ca
- (_Bool)usesDimmingView;	// IMP=0x000000000086f1c2
- (void)returnToKeyboardIfNeeded;	// IMP=0x000000000086f1bc
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x000000000086f18e
- (id)dimmingView;	// IMP=0x000000000086f046
- (id)inputView;	// IMP=0x000000000086f031
- (void)setKeyboardDimmed:(_Bool)arg1;	// IMP=0x000000000086ef44
- (void)performShowAnimation;	// IMP=0x000000000086eec2
- (_Bool)isVisible;	// IMP=0x000000000086ee8f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000086ece7
- (id)font;	// IMP=0x000000000086ecc6
- (id)subtitleFont;	// IMP=0x000000000086eca5
- (void)applicationWillSuspend:(id)arg1;	// IMP=0x000000000086ec93
- (_Bool)centerPopUpOverKey;	// IMP=0x000000000086ec8b
@property(readonly) _Bool usesTable;
- (id)table;	// IMP=0x000000000086ec6e
- (void)dealloc;	// IMP=0x000000000086ebf9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000086e97b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
