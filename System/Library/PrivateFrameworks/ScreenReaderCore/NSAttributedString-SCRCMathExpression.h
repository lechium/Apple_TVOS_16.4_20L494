//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (SCRCMathExpression)
+ (id)scrcSpaceString;	// IMP=0x0050000000001c9c
+ (id)scrcPauseString;	// IMP=0x0050000000001c83
+ (id)scrcString;	// IMP=0x0050000000001c71
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;	// IMP=0x0050000000001bd3
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;	// IMP=0x0050000000001a88
+ (id)scrcStringWithLiteralString:(id)arg1;	// IMP=0x0050000000001a74
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;	// IMP=0x005000000000198b
+ (id)scrcStringWithString:(id)arg1;	// IMP=0x0050000000001977
+ (id)scrcStringWithFormat:(id)arg1;	// IMP=0x00500000000018ca
+ (id)_scrcStringWithFormat:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x0050000000001621
- (_Bool)scrcContainsPause;	// IMP=0x0010000000001fe6
- (_Bool)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000001f3b
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;	// IMP=0x0010000000001ea7
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000001d60
- (id)scrcStringByAppendingAttributedString:(id)arg1;	// IMP=0x0010000000001cb5
- (struct _NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;	// IMP=0x001000000000158e
- (struct _NSRange)_scrcRangeOfVanillaFormatSpecifier;	// IMP=0x0010000000001534
- (id)scrcIndexSetForAttributes:(id)arg1 limit:(long long)arg2;	// IMP=0x001000000002307b
- (id)scrcSplitBasedOnAttribute:(id)arg1 limit:(long long)arg2;	// IMP=0x0010000000022da5
- (id)scrcSplitBasedOnMultipleAttributesWithLimit:(long long)arg1;	// IMP=0x0010000000022b1b
@end

