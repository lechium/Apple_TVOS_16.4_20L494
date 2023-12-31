//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (IMAdditions)
- (id)deepCopy;	// IMP=0x00200000000049c6
- (id)arrayRemovingMatchingStrings:(id)arg1;	// IMP=0x002000000000468d
- (id)arrayRemovingObjectsByKey:(id)arg1 matchingStrings:(id)arg2;	// IMP=0x00200000000042be
- (id)arrayOfObjectsContainingMatchingKey:(id)arg1 matchingStrings:(id)arg2;	// IMP=0x0020000000003e56
- (_Bool)containsStringCaseInsensitive:(id)arg1;	// IMP=0x0020000000003d04
- (id)imReversedArray;	// IMP=0x0020000000003b94
- (long long)indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00200000000039d0
- (id)mt_uniqueOrdered;	// IMP=0x002000000001a90a
- (id)mt_uniqued;	// IMP=0x002000000001a8ee
- (id)mt_allObjectsExcludingIndexes:(id)arg1;	// IMP=0x002000000001a80f
- (id)mt_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000001a6ed
- (id)arrayByRemovingObject:(id)arg1;	// IMP=0x002000000001a66d
- (id)filter:(CDUnknownBlockType)arg1 compactMap:(CDUnknownBlockType)arg2;	// IMP=0x002000000001a470
- (id)mt_filter:(CDUnknownBlockType)arg1;	// IMP=0x002000000001a2c7
- (id)mt_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x002000000001a109
- (void)concurrentMapWithStrideSize:(unsigned long long)arg1 on:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x002000000003dda3
- (unsigned long long)strideCountForSize:(unsigned long long)arg1;	// IMP=0x002000000003dd6d
- (id)subarrayForStrideIndex:(unsigned long long)arg1 withStrideSize:(unsigned long long)arg2;	// IMP=0x002000000003dcf2
- (id)im_jsonSerializableValue;	// IMP=0x002000000004d63d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

