//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFAttributedString
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000005d667
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000005d664
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005d9ef
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000005d9a2
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005d96a
- (void)setAttributedString:(id)arg1;	// IMP=0x000000000005d925
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005d8f4
- (void)appendAttributedString:(id)arg1;	// IMP=0x000000000005d8af
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005d87b
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x000000000005d849
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005d80e
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000005d736
- (Class)classForCoder;	// IMP=0x000000000005d713
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d707
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d6fd
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x000000000005d6e2
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x000000000005d6ca
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x000000000005d6b6
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x000000000005d69f
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000005d694
- (unsigned long long)length;	// IMP=0x000000000005d68f
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000005d684
- (id)string;	// IMP=0x000000000005d67f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d649
- (unsigned long long)retainCount;	// IMP=0x000000000005d644
- (_Bool)_isDeallocating;	// IMP=0x000000000005d634
- (_Bool)_tryRetain;	// IMP=0x000000000005d623
- (oneway void)release;	// IMP=0x000000000005d61e
- (id)retain;	// IMP=0x000000000005d606

@end
