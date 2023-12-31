//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarEntry : NSObject
{
    _Bool _isPlaceholder;	// 8 = 0x8
    _Bool _hasCachedContentOffset;	// 9 = 0x9
    struct CGPoint _cachedContentOffset;	// 16 = 0x10
    CDUnknownBlockType _contentOffsetGenerator;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSIndexPath *_targetFocusedIndexPath;	// 48 = 0x30
}

+ (id)placeholderEntryWithEntryBefore:(id)arg1 after:(id)arg2;	// IMP=0x006000000065f87d
+ (id)entryWithTitle:(id)arg1 generator:(CDUnknownBlockType)arg2;	// IMP=0x006000000065f758
+ (id)entryWithTitle:(id)arg1 contentOffset:(struct CGPoint)arg2;	// IMP=0x006000000065f65e
- (void).cxx_destruct;	// IMP=0x000000000065fb7d
@property(copy, nonatomic) NSIndexPath *targetFocusedIndexPath; // @synthesize targetFocusedIndexPath=_targetFocusedIndexPath;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x000000000065fa28
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic) struct CGPoint contentOffset;
- (id)initWithTitle:(id)arg1 generator:(CDUnknownBlockType)arg2;	// IMP=0x000000000065f7c4
- (id)initWithTitle:(id)arg1 contentOffset:(struct CGPoint)arg2;	// IMP=0x000000000065f6c3

@end

