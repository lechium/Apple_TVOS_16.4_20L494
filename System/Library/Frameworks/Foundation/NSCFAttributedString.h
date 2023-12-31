//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableAttributedString.h"

__attribute__((visibility("hidden")))
@interface NSCFAttributedString : NSMutableAttributedString
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00800000003d559b
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003d59e7
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00000000003d59a0
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003d5968
- (void)setAttributedString:(id)arg1;	// IMP=0x00000000003d5923
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x00000000003d58f2
- (void)appendAttributedString:(id)arg1;	// IMP=0x00000000003d58ad
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000003d5879
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000003d5847
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003d580c
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x00000000003d5683
- (Class)classForCoder;	// IMP=0x00000000003d565d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d564c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d563d
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x00000000003d5622
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x00000000003d5607
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x00000000003d55ee
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x00000000003d55d7
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x00000000003d55c7
- (unsigned long long)length;	// IMP=0x00000000003d55bd
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x00000000003d55ad
- (id)string;	// IMP=0x00000000003d55a3
- (_Bool)_isDeallocating;	// IMP=0x00000000003d558b
- (_Bool)_tryRetain;	// IMP=0x00000000003d557a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d555f
- (unsigned long long)retainCount;	// IMP=0x00000000003d5555
- (oneway void)release;	// IMP=0x00000000003d554b
- (id)retain;	// IMP=0x00000000003d5533

@end

