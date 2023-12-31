//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (Conversion)
- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;	// IMP=0x006000000018b0a2
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000018aab3
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000018a2a5
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000018a0d9
- (unsigned long long)_comparisonOptionForString:(id)arg1;	// IMP=0x0060000000189fbb
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000189b1a
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000189847
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001895f8
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000189267
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000188d0b
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000018889c
- (id)_parseNearFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001880db
- (id)_nearFilterWithKey:(id)arg1 location:(id)arg2 radius:(double)arg3 translator:(id)arg4;	// IMP=0x0060000000187f36
@end

