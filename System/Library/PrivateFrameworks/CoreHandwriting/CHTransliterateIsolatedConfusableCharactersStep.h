//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHTransliterateIsolatedConfusableCharactersStep
{
    struct map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> _transliterationMap;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001bd2f0
- (void).cxx_destruct;	// IMP=0x00000000001bd2d0
- (id)handleConfusableIsolatedCharacterToken:(id)arg1;	// IMP=0x00000000001bced0
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x00000000001bc550
- (id)init;	// IMP=0x00000000001bc380

@end

