//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableArray.h"

__attribute__((visibility("hidden")))
@interface __NSArrayM : NSMutableArray
{
    _Atomic struct __cow_state_t *cow;	// 8 = 0x8
    CDStruct_a6934631 storage;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000125a8
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000101d3
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000126cc
- (id)mutableCopy;	// IMP=0x0000000000012623
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000125e8
- (id)copy;	// IMP=0x00000000000125ad
- (void)dealloc;	// IMP=0x0000000000012409
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x0000000000011f72
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000011c9c
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000011ab4
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x000000000001125b
- (void)removeLastObject;	// IMP=0x00000000000111db
- (void)removeAllObjects;	// IMP=0x0000000000011079
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000010fd0
- (void)insertObjects:(const id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000106eb
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x000000000001063e
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;	// IMP=0x000000000001049f
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010269
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000101d6
- (void)addObject:(id)arg1;	// IMP=0x0000000000010180
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000000fff6
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000ffa9
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000000fb71
- (void)_mutate;	// IMP=0x000000000000fae3
- (id)allObjects;	// IMP=0x000000000000f9a4
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000000f771
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000f6c8
- (unsigned long long)count;	// IMP=0x000000000000f689

@end

