//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class NSString, UIKeyboardEmojiKeyDisplayController;
@protocol UIKeyboardEmojiCategoryUpdateDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiKeyView : UIKBKeyView
{
    UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009eeffa
@property(nonatomic) __weak UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager; // @synthesize emojiKeyManager;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;	// IMP=0x00000000009eefc5
- (void)updateToCategory:(long long)arg1;	// IMP=0x00000000009eefbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

