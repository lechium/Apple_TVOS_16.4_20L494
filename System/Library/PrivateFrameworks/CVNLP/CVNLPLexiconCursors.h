//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CVNLPLexiconCursors : NSObject
{
    struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> _sortedCursors;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000001ba90
- (void).cxx_destruct;	// IMP=0x000000000001ba70
- (void)dealloc;	// IMP=0x000000000001b9d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b810
- (long long)count;	// IMP=0x000000000001b7f0
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b760
- (id)initWithSortedCursors:(void *)arg1;	// IMP=0x000000000001b6e0

@end
