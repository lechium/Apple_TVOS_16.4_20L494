//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CHStringOVSChecker : NSObject
{
    struct _CFBurstTrie *_ovsTrie;	// 8 = 0x8
    unsigned int _flagsFilter;	// 16 = 0x10
    struct _LXLexicon *_staticLexicon;	// 24 = 0x18
    struct _LXLexicon *_customLexicon;	// 32 = 0x20
    CDUnknownFunctionPointerType _stringNormalizationFunction;	// 40 = 0x28
}

+ (id)obfuscateString:(id)arg1;	// IMP=0x006000000012a420
- (void)dealloc;	// IMP=0x000000000012aa10
- (_Bool)_isInappropriateTokenID:(unsigned int)arg1 withLexicon:(struct _LXLexicon *)arg2;	// IMP=0x000000000012a9c0
- (_Bool)isInappropriateTokenID:(unsigned int)arg1;	// IMP=0x000000000012a960
- (_Bool)isInappropriateString:(id)arg1;	// IMP=0x000000000012a890
- (_Bool)_isInappropriateString:(id)arg1 withTrie:(struct _CFBurstTrie *)arg2;	// IMP=0x000000000012a770
- (_Bool)_isInappropriateString:(id)arg1 withLexicon:(struct _LXLexicon *)arg2;	// IMP=0x000000000012a570
- (_Bool)isInappropriateLexiconEntry:(struct _LXEntry *)arg1;	// IMP=0x000000000012a540
- (id)initWithTrie:(struct _CFBurstTrie *)arg1 staticLexicon:(struct _LXLexicon *)arg2 customLexicon:(struct _LXLexicon *)arg3 flags:(unsigned int)arg4 stringNormalizationFunction:(CDUnknownFunctionPointerType)arg5;	// IMP=0x000000000012a360

@end

