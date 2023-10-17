//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableArray : NSMutableArray
{
    int _cd_rc;	// 8 = 0x8
    NSMutableArray *_realArray;	// 16 = 0x10
    NSManagedObject *_source;	// 24 = 0x18
    NSPropertyDescription *_relationship;	// 32 = 0x20
    struct _NSFaultingMutableArrayFlags _flags;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000005b0b4
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000005a5ba
+ (id)alloc;	// IMP=0x006000000005a5ae
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x006000000005a5a6
- (Class)classForCoder;	// IMP=0x000000000005b0a3
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000005b05e
- (id)valueForKey:(id)arg1;	// IMP=0x000000000005b019
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005afcf
- (void)getObjects:(id *)arg1;	// IMP=0x000000000005af8a
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000005af40
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005aefb
- (void)removeLastObject;	// IMP=0x000000000005aec5
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005ae7b
- (id)objectEnumerator;	// IMP=0x000000000005ae45
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000005adec
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ada2
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ad49
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000005acff
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005aca6
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ac5c
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000005ac03
- (void)addObject:(id)arg1;	// IMP=0x000000000005abbe
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005ab79
- (unsigned long long)count;	// IMP=0x000000000005ab43
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x000000000005aaa1
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005a9ff
- (id)description;	// IMP=0x000000000005a95d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a94b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a8b1
@property(readonly, nonatomic) NSPropertyDescription *relationship;
@property(readonly, nonatomic) NSManagedObject *source;
- (void)turnIntoFault;	// IMP=0x000000000005a85c
- (void)willRead;	// IMP=0x000000000005a79c
@property(readonly, nonatomic, getter=isFault) _Bool fault;
- (void)dealloc;	// IMP=0x000000000005a747
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(_Bool)arg3;	// IMP=0x000000000005a69a
- (_Bool)_isDeallocating;	// IMP=0x000000000005a67a
- (_Bool)_tryRetain;	// IMP=0x000000000005a63d
- (unsigned long long)retainCount;	// IMP=0x000000000005a625
- (oneway void)release;	// IMP=0x000000000005a5e7
- (id)retain;	// IMP=0x000000000005a5c6

@end
