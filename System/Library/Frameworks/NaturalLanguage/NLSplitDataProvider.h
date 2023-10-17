//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLDataProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NLSplitDataProvider : NLDataProvider
{
    NLDataProvider *_dataProvider;	// 104 = 0x68
    NSArray *_indexes;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000003f1fe
- (unsigned long long)numberOfVocabularyEntries;	// IMP=0x000000000003f1e1
- (unsigned long long)numberOfLabels;	// IMP=0x000000000003f1c4
- (id)documentFrequencyMap;	// IMP=0x000000000003f1a7
- (id)vocabularyMap;	// IMP=0x000000000003f18a
- (id)inverseLabelMap;	// IMP=0x000000000003f16d
- (id)labelMap;	// IMP=0x000000000003f150
- (struct __CFStringTokenizer *)tokenizer;	// IMP=0x000000000003f133
- (void)_generateMaps;	// IMP=0x000000000003f12d
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003f0ae
- (unsigned long long)numberOfInstances;	// IMP=0x000000000003f091
- (id)configuration;	// IMP=0x000000000003f074
- (id)initWithDataProvider:(id)arg1 indexes:(id)arg2;	// IMP=0x000000000003efbf

@end

