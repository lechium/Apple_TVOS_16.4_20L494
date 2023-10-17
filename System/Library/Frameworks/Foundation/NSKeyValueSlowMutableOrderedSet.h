//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyOrderedSets;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000005b64dd
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000005b6467
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000005b6400
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005b6399
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x00000000005b6339
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000005b611a
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000005b6002
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000005b5fce
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005b5f9a
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000005b5f66
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000005b5f1e
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x00000000005b5eca
- (unsigned long long)count;	// IMP=0x00000000005b5e5d
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000005b5dc8
- (void)_proxyNonGCFinalize;	// IMP=0x00000000005b5d3b
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000005b5c69

@end

