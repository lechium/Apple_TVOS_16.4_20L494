//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSet.h"

__attribute__((visibility("hidden")))
@interface __NSOrderedSetReversed : NSOrderedSet
{
    id _orderedSet;	// 8 = 0x8
    unsigned long long _cnt;	// 16 = 0x10
}

- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000073c18
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000073bce
- (unsigned long long)count;	// IMP=0x0000000000073bc2
- (void)dealloc;	// IMP=0x0000000000073b5d
- (id)initWithOrderedSet:(id)arg1;	// IMP=0x0000000000073b14

@end

