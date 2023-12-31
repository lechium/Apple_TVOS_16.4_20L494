//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardEmojiGraphicsTraits, UIResponder, UIView;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar
{
    unsigned long long _selectedIndex;	// 144 = 0x90
    UIView *_scrubView;	// 152 = 0x98
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 160 = 0xa0
    _Bool _isScrubbing;	// 168 = 0xa8
    double _scrubStartXLocation;	// 176 = 0xb0
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;	// 184 = 0xb8
}

+ (_Bool)wantsScreenTraits;	// IMP=0x00600000009dc86f
- (void).cxx_destruct;	// IMP=0x00000000009de1ad
@property(nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
@property(retain, nonatomic) UIView *scrubView; // @synthesize scrubView=_scrubView;
@property unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009ddfd6
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009dde2d
- (unsigned long long)selectedIndexForTouches:(id)arg1;	// IMP=0x00000000009ddced
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009dd94e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009dd86f
- (struct CGRect)categorySelectedCircleRect:(long long)arg1;	// IMP=0x00000000009dd703
- (void)animateScrubberToRect:(struct CGRect)arg1;	// IMP=0x00000000009dd51c
- (struct CGRect)frameForDivider:(int)arg1;	// IMP=0x00000000009dd3f9
- (unsigned long long)flippedIndexForIndex:(unsigned long long)arg1;	// IMP=0x00000000009dd384
- (void)updateCategory;	// IMP=0x00000000009dd30f
- (void)updateCategoryOnBar:(unsigned long long)arg1;	// IMP=0x00000000009dd216
- (void)updateToCategory:(long long)arg1;	// IMP=0x00000000009dd1de
- (void)dimKeys:(id)arg1;	// IMP=0x00000000009dcf19
- (void)didMoveToWindow;	// IMP=0x00000000009dce78
- (void)dealloc;	// IMP=0x00000000009dce03
- (void)prepareForDisplay;	// IMP=0x00000000009dcc08
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000009dcbf3
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x00000000009dc877

@end

