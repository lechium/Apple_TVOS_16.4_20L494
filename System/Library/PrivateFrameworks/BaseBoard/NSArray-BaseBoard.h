//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (BaseBoard)
- (id)bs_flattenedDifferenceWithArray:(id)arg1;	// IMP=0x006000000008004b
- (id)bs_differenceWithArray:(id)arg1;	// IMP=0x006000000007ffb9
- (id)bs_dictionaryByPartitioning:(CDUnknownBlockType)arg1;	// IMP=0x006000000007ff8e
- (id)bs_reduce:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x006000000007ff7e
- (id)bs_mapNoNulls:(CDUnknownBlockType)arg1;	// IMP=0x006000000007ff53
- (id)bs_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x006000000007ff28
- (id)bs_map:(CDUnknownBlockType)arg1;	// IMP=0x006000000007fefd
- (id)bs_flatten;	// IMP=0x006000000007fcdd
- (id)bs_reverse;	// IMP=0x006000000007fc79
- (id)bs_objectsOfClass:(Class)arg1;	// IMP=0x006000000007fbf1
- (id)bs_filter:(CDUnknownBlockType)arg1;	// IMP=0x006000000007fbc6
- (id)bs_firstObjectOfClassNamed:(id)arg1;	// IMP=0x006000000007fb9c
- (id)bs_firstObjectOfClass:(Class)arg1;	// IMP=0x006000000007fb32
- (id)bs_first:(unsigned long long)arg1;	// IMP=0x006000000007faec
- (void)bs_each:(CDUnknownBlockType)arg1;	// IMP=0x006000000007f9be
- (void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x006000000007f913
- (id)bs_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x006000000007f906
- (_Bool)bs_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x006000000007f8d8
@end

