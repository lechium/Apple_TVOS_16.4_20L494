//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (PLAdditions)
- (struct _NSRange)pl_rangeCoveringIndexSet;	// IMP=0x0060000000352cd5
- (id)pl_indexSetAdjustedForInsertions:(id)arg1;	// IMP=0x0060000000352cbe
- (id)pl_indexSetAdjustedForDeletions:(id)arg1;	// IMP=0x0060000000352caa
- (id)_pl_indexSetByUpdatingWithChangedIndexes:(id)arg1 asInserts:(_Bool)arg2;	// IMP=0x0060000000352b28
- (id)pl_shortDescription;	// IMP=0x0060000000352a4b
@end

