//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (TypeCheckedArrayReader)
- (id)_tcr_associatedReader;	// IMP=0x001000000000eac7
- (id)tcr_stringEnumerator;	// IMP=0x001000000000ea68
- (id)tcr_numberEnumerator;	// IMP=0x001000000000ea09
- (id)tcr_dictionaryEnumerator;	// IMP=0x001000000000e9aa
@property(readonly) NSString *tcr_keyPath;
- (id)lib_batchedWithMaxSize:(unsigned long long)arg1;	// IMP=0x00100000000778d1
- (id)lib_filterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000776cb
- (id)lib_mapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000007758d
- (id)lib_flatMapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077360
- (id)lib_firstResultApplyingTransform:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077202
- (id)lib_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077133
- (id)lib_categorizeItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000076e7d
@end

