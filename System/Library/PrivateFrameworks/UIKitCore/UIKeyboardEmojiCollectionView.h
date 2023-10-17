//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionView.h"

@class NSMutableArray, UIKeyboardEmojiGraphicsTraits, UIResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionView : UICollectionView
{
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 8 = 0x8
    NSMutableArray *_gestureRecognizersToEnable;	// 16 = 0x10
    _Bool _isInSearchPopover;	// 24 = 0x18
    UIResponder *_hitTestResponder;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000009eaf27
@property(nonatomic) _Bool isInSearchPopover; // @synthesize isInSearchPopover=_isInSearchPopover;
@property(nonatomic) __weak UIResponder *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(readonly) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009eae02
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009ead40
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009eaca2
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009eaa1a
- (void)enableConflictingGestureRecognizers;	// IMP=0x00000000009ea8bf
- (void)disableConflictingGestureRecognizers;	// IMP=0x00000000009ea68f
- (id)closestCellForPoint:(struct CGPoint)arg1;	// IMP=0x00000000009e9f41
- (id)backgroundColor;	// IMP=0x00000000009e9f28
- (double)_currentScreenScale;	// IMP=0x00000000009e9f16
- (void)layoutSubviews;	// IMP=0x00000000009e9e64
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3;	// IMP=0x00000000009e9dba

@end

