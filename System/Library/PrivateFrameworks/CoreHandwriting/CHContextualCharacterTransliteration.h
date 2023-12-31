//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCharacterSet, NSString;

@interface CHContextualCharacterTransliteration : NSObject
{
    _Bool _requiresLexiconMatch;	// 8 = 0x8
    NSString *_confusion;	// 16 = 0x10
    NSString *_correction;	// 24 = 0x18
    NSArray *_locales;	// 32 = 0x20
    NSCharacterSet *_requiredLeftContext;	// 40 = 0x28
    NSCharacterSet *_requiredRightContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001a2380
@property(readonly, nonatomic) _Bool requiresLexiconMatch; // @synthesize requiresLexiconMatch=_requiresLexiconMatch;
@property(readonly, nonatomic) NSCharacterSet *requiredRightContext; // @synthesize requiredRightContext=_requiredRightContext;
@property(readonly, nonatomic) NSCharacterSet *requiredLeftContext; // @synthesize requiredLeftContext=_requiredLeftContext;
@property(readonly, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(readonly, copy, nonatomic) NSString *correction; // @synthesize correction=_correction;
@property(readonly, copy, nonatomic) NSString *confusion; // @synthesize confusion=_confusion;
- (_Bool)isValidForLocale:(id)arg1;	// IMP=0x00000000001a2110
- (_Bool)meetsContextRequirementWithLeftContext:(id)arg1 rightContext:(id)arg2;	// IMP=0x00000000001a1f80
- (id)initWithConfusion:(id)arg1 correction:(id)arg2 locales:(id)arg3 leftContext:(id)arg4 rightContext:(id)arg5 requiresLexiconMatch:(_Bool)arg6;	// IMP=0x00000000001a1e70

@end

