//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (PhotosUICore)
@property(readonly, nonatomic) _Bool px_isPerformingScrollTest;
- (void)px_cancelScrollAnimation;	// IMP=0x00300000001f7074
- (void)px_cancelScrollGesture;	// IMP=0x00300000001f7018
- (_Bool)_px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x00300000001f6eda
- (struct CGSize)_px_currentContentSize;	// IMP=0x00300000001f6e48
@property(readonly, nonatomic) unsigned long long px_scrollableAxis;
- (void)px_adjustInsetsForKeyboardInfo:(id)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00300000001f699c
@property(readonly, nonatomic) _Bool px_isBouncing;
@property(readonly, nonatomic) _Bool px_isDecelerating;
- (struct CGPoint)px_contentOffsetForEdge:(unsigned int)arg1;	// IMP=0x00300000001f6777
- (void)px_scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2;	// IMP=0x00300000001f673a
- (_Bool)px_isScrolledBeyondEdge:(unsigned int)arg1;	// IMP=0x00300000001f6720
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x00300000001f666b
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1;	// IMP=0x00300000001f6605
- (void)px_scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00300000001f65c8
- (struct CGPoint)px_constrainedContentOffset:(struct CGPoint)arg1;	// IMP=0x00300000001f644c
@end

