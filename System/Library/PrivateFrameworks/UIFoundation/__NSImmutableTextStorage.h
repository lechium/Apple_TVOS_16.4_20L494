//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTextStorage.h"

@class NSAttributedString, NSLayoutManager, NSTextContainer;

__attribute__((visibility("hidden")))
@interface __NSImmutableTextStorage : NSTextStorage
{
    NSAttributedString *_contents;	// 8 = 0x8
    NSLayoutManager *_layoutManager;	// 16 = 0x10
    NSTextContainer *_textContainer;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000049b70
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000049f34
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x0000000000049f05
- (void)processEditing;	// IMP=0x0000000000049eff
- (void)fixAttributesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000049ef9
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x0000000000049edc
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x0000000000049ebf
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x0000000000049ea2
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x0000000000049e85
- (id)string;	// IMP=0x0000000000049e68
@property(readonly) NSLayoutManager *layoutManager;
@property(readonly) NSTextContainer *textContainer;
- (void)dealloc;	// IMP=0x0000000000049e04
- (id)initWithAttributedString:(id)arg1;	// IMP=0x0000000000049cb7
- (oneway void)release;	// IMP=0x0000000000049c02
- (_Bool)_isDeallocating;	// IMP=0x0000000000049b68
- (_Bool)_tryRetain;	// IMP=0x0000000000049b60

@end

