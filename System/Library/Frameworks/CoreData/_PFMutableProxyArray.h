//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class NSString, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFMutableProxyArray : NSMutableArray
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _editCount;	// 12 = 0xc
    unsigned int _offset;	// 16 = 0x10
    unsigned int _limit;	// 20 = 0x14
    _PFArray *_originalArray;	// 24 = 0x18
    NSMutableArray *_updatedObjectsArray;	// 32 = 0x20
    struct __CFArray *_indicesVeneer;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x001000000006cd7a
- (Class)classForCoder;	// IMP=0x000000000006cd69
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000006ccf6
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006cc72
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006cbff
- (void)removeLastObject;	// IMP=0x000000000006cb67
- (void)addObject:(id)arg1;	// IMP=0x000000000006cafc
- (id)valueForKey:(id)arg1;	// IMP=0x000000000006ca5b
- (id)newArrayFromObjectIDs;	// IMP=0x000000000006c94f
- (id)arrayFromObjectIDs;	// IMP=0x000000000006c935
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;	// IMP=0x000000000006c894
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000006c7f4
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x000000000006c7b2
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000006c770
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000006c72e
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006c6ac
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006c646
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000006c483
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006c359
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006c22f
- (id)mutableCopy;	// IMP=0x000000000006c21b
- (id)copy;	// IMP=0x000000000006c207
- (unsigned long long)count;	// IMP=0x000000000006c1f2
- (_Bool)_isDeallocating;	// IMP=0x000000000006c1d2
- (_Bool)_tryRetain;	// IMP=0x000000000006c195
- (unsigned long long)retainCount;	// IMP=0x000000000006c17d
- (oneway void)release;	// IMP=0x000000000006c13f
- (id)retain;	// IMP=0x000000000006c11e
- (void)dealloc;	// IMP=0x000000000006c0b8
- (id)subarrayWithRange:(struct _NSRange)arg1;	// IMP=0x000000000006bf5e
- (id)initWithPFArray:(id)arg1;	// IMP=0x000000000006bf19
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000006be22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

