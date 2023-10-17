//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCRCMathExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathSimpleExpression : SCRCMathExpression
{
    NSString *_content;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018c3a
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)latexMathModeDescription;	// IMP=0x0000000000018bb9
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x0000000000018b2c
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000018a8d
- (_Bool)canBeUsedWithBase;	// IMP=0x00000000000189f6
- (_Bool)isFunctionName;	// IMP=0x0000000000018982
- (id)_functionNames;	// IMP=0x0000000000018916
- (_Bool)isWordOrAbbreviation;	// IMP=0x00000000000188ab
- (long long)integerValue;	// IMP=0x0000000000018867
- (_Bool)isInteger;	// IMP=0x00000000000187ad
- (id)description;	// IMP=0x0000000000018708
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000018648

@end

