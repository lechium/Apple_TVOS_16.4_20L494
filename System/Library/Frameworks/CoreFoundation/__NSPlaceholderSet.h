//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableSet.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000003f251
+ (void)initialize;	// IMP=0x008000000003f21b
- (void)dealloc;	// IMP=0x000000000003f4a1
- (unsigned long long)retainCount;	// IMP=0x000000000003f499
- (oneway void)release;	// IMP=0x000000000003f498
- (id)retain;	// IMP=0x000000000003f494
- (id)init;	// IMP=0x000000000003f44c
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003f404
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x000000000003f2fc
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003f253
- (void)removeObject:(id)arg1;	// IMP=0x000000000003f15c
- (void)addObject:(id)arg1;	// IMP=0x000000000003f09d
- (id)objectEnumerator;	// IMP=0x000000000003efde
- (id)member:(id)arg1;	// IMP=0x000000000003ef1f
- (unsigned long long)count;	// IMP=0x000000000003ee60

@end

