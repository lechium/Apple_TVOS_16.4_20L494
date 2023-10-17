//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu
{
    struct CGSize m_preferredSize;	// 288 = 0x120
    NSArray *_items;	// 304 = 0x130
    CDUnknownBlockType _finishSplitTransitionBlock;	// 312 = 0x138
}

+ (id)activeInstance;	// IMP=0x001000000086b483
+ (id)sharedInstance;	// IMP=0x001000000086b3f2
- (void).cxx_destruct;	// IMP=0x000000000086bb26
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock;
- (void)didFinishSplitTransition;	// IMP=0x000000000086ba81
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000086b9ff
- (void)setSplitAndUndocked:(_Bool)arg1;	// IMP=0x000000000086b8f8
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000086b8f0
- (id)titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000086b885
- (int)visibleItemForIndex:(unsigned long long)arg1;	// IMP=0x000000000086b70d
- (unsigned long long)defaultSelectedIndex;	// IMP=0x000000000086b6fd
- (struct CGSize)preferredSize;	// IMP=0x000000000086b6ab
- (unsigned long long)numberOfItems;	// IMP=0x000000000086b68f
- (void)actionForItem:(id)arg1;	// IMP=0x000000000086b4b9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000086b02f

@end
