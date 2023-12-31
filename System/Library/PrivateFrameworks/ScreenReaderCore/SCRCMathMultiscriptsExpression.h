//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCRCMathExpression.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCRCMathMultiscriptsExpression : SCRCMathExpression
{
    SCRCMathExpression *_base;	// 24 = 0x18
    NSArray *_postScripts;	// 32 = 0x20
    NSArray *_preScripts;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000f4e9
@property(retain, nonatomic) NSArray *preScripts; // @synthesize preScripts=_preScripts;
@property(retain, nonatomic) NSArray *postScripts; // @synthesize postScripts=_postScripts;
@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;
- (void)_subSuperScriptsDescriptionFromArray:(id)arg1 withSpeakingStyle:(long long)arg2 arePausesAllowed:(_Bool)arg3 outSubscripts:(id *)arg4 outSuperscripts:(id *)arg5;	// IMP=0x000000000000efa7
- (id)_appendString:(id)arg1 toDescription:(id)arg2 arePausesAllowed:(_Bool)arg3;	// IMP=0x000000000000eed8
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x000000000000e9b4
- (id)description;	// IMP=0x000000000000e8c4
- (id)_subSuperscriptPairFromDictionary:(id)arg1;	// IMP=0x000000000000e713
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000e288

@end

