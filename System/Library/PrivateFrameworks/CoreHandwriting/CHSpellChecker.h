//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppleSpell, CHSpellCheckerErrorModel;

@interface CHSpellChecker : NSObject
{
    AppleSpell *_spellServer;	// 8 = 0x8
    CHSpellCheckerErrorModel *_errorModel;	// 16 = 0x10
}

+ (id)sharedSpellServer;	// IMP=0x00600000000dc930
+ (id)newErrorModel;	// IMP=0x00600000000dc910
- (void).cxx_destruct;	// IMP=0x00000000000dcf30
@property(retain, nonatomic) CHSpellCheckerErrorModel *errorModel; // @synthesize errorModel=_errorModel;
- (id)correctionsForString:(id)arg1 shouldUseErrorModel:(_Bool)arg2 forLocale:(id)arg3;	// IMP=0x00000000000dcd40
- (id)topCorrectionForString:(id)arg1 contextBeforeToken:(id)arg2 contextSeparator:(id)arg3 shouldUseErrorModel:(_Bool)arg4 forLanguage:(id)arg5;	// IMP=0x00000000000dc9e0
- (_Bool)isWordInUserDictionaries:(id)arg1 caseSensitive:(_Bool)arg2;	// IMP=0x00000000000dc9d0
- (id)init;	// IMP=0x00000000000dc860

@end

