//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVTokenizer, NSString;

@interface KVSkitInjector : NSObject
{
    KVTokenizer *_tokenizer;	// 8 = 0x8
    struct Indexer _indexer;	// 16 = 0x10
    struct Searcher _searcher;	// 120 = 0x78
    struct vector<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> _documents;	// 168 = 0xa8
}

- (id).cxx_construct;	// IMP=0x000000000001ffda
- (void).cxx_destruct;	// IMP=0x000000000001ff3a
- (_Bool)setItems:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001fecc
- (_Bool)supportsMultiUser;	// IMP=0x000000000001fec4
- (id)accessReadOnlySkitForUser:(id)arg1;	// IMP=0x000000000001febb
- (void)prewarm;	// IMP=0x000000000001feb5
- (id)matchSpans:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001fcfb
- (id)indexLocale;	// IMP=0x000000000001fce5
- (_Bool)_buildDocumentsFromItems:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f44d
- (id)init;	// IMP=0x000000000001f3e9
- (id)initWithItems:(id)arg1 tokenizer:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001eb8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

