//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface APSPerAppTokenMap : NSObject
{
    NSMutableDictionary *_perAppTokenMap;	// 8 = 0x8
    long long _missingTokens;	// 16 = 0x10
    _Bool _enumerating;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001f03c
- (id)description;	// IMP=0x000000000001f028
- (id)debugDescription;	// IMP=0x000000000001f012
- (void)enumerateTokensWithInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ec22
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e854
- (void)enumerateMissingTokensUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e759
- (id)identifiersForTopic:(id)arg1;	// IMP=0x000000000001e673
- (id)topics;	// IMP=0x000000000001e5d8
- (_Bool)isEmpty;	// IMP=0x000000000001e57c
- (_Bool)hasMissingTokens;	// IMP=0x000000000001e542
- (id)tokensForTopic:(id)arg1;	// IMP=0x000000000001e2cc
- (id)allPerAppTokens;	// IMP=0x000000000001e0c3
- (void)setFlag:(_Bool)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x000000000001dfbb
- (_Bool)flagForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000001dead
- (id)infoForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000001dd87
- (id)tokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000001dc6d
- (void)removeAllTokens;	// IMP=0x000000000001d8ab
- (void)setToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x000000000001d5f0
- (void)setToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x000000000001d54b
- (void)removeIdentifier:(id)arg1 forTopic:(id)arg2;	// IMP=0x000000000001d3d1
- (id)init;	// IMP=0x000000000001d37b

@end

