//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMapTable.h"

__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable
{
    struct NSSlice keys;	// 8 = 0x8
    struct NSSlice values;	// 40 = 0x28
    unsigned long long count;	// 72 = 0x48
    unsigned long long capacity;	// 80 = 0x50
    unsigned long long keyOptions;	// 88 = 0x58
    unsigned long long valueOptions;	// 96 = 0x60
    unsigned long long mutations;	// 104 = 0x68
    struct os_unfair_lock_s growLock;	// 112 = 0x70
    _Bool shouldRehash;	// 116 = 0x74
    _Bool hasDynamicSlices;	// 117 = 0x75
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000047f424
- (id)allValues;	// IMP=0x000000000048193a
- (id)allKeys;	// IMP=0x000000000048187a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000481734
- (unsigned long long)hash;	// IMP=0x00000000004816fc
- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;	// IMP=0x0000000000481617
- (id)objectEnumerator;	// IMP=0x00000000004815fb
- (id)keyEnumerator;	// IMP=0x00000000004815c5
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000004814fc
- (id)description;	// IMP=0x00000000004813c9
- (void)dealloc;	// IMP=0x00000000004812cc
- (void)removeAllItems;	// IMP=0x0000000000481210
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000004810ec
- (void)_reclaim;	// IMP=0x00000000004810e2
- (void)rehash;	// IMP=0x0000000000481056
- (unsigned long long)rehashAround:(unsigned long long)arg1;	// IMP=0x0000000000480de4
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;	// IMP=0x0000000000480d2a
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;	// IMP=0x0000000000480c61
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x0000000000480b71
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;	// IMP=0x0000000000480a74
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x00000000004809a0
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000004808c6
- (id)objectForKey:(id)arg1;	// IMP=0x000000000048083b
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2 value:(const void *)arg3 isNew:(_Bool)arg4;	// IMP=0x0000000000480739
- (void)grow;	// IMP=0x0000000000480400
- (id)dump;	// IMP=0x00000000004801f0
- (_Bool)containsKeys:(const void **)arg1 values:(const void **)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000047fda1
- (unsigned long long)__capacity;	// IMP=0x000000000047fd90
- (unsigned long long)count;	// IMP=0x000000000047fd3b
- (id)valuePointerFunctions;	// IMP=0x000000000047fcfd
- (id)keyPointerFunctions;	// IMP=0x000000000047fcbf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000047f867
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000047f42c
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000047f289
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000047f0f0
- (id)copy;	// IMP=0x000000000047eea6
- (void)_setBackingStore;	// IMP=0x000000000047ee12
- (void)checkCount:(const char *)arg1;	// IMP=0x000000000047ed89
- (unsigned long long)realCount;	// IMP=0x000000000047ece9
- (void)raiseCountUnderflowException;	// IMP=0x000000000047ec98
- (id)init;	// IMP=0x000000000047ec7c

@end

