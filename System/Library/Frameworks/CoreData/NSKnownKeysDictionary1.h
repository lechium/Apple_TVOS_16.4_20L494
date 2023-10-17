//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSKnownKeysDictionary.h"

@class NSKnownKeysMappingStrategy;

__attribute__((visibility("hidden")))
@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary
{
    int _cd_rc;	// 8 = 0x8
    int _count;	// 12 = 0xc
    NSKnownKeysMappingStrategy *_keySearch;	// 16 = 0x10
    id _values[0];	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x00600000000ae8aa
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00600000000ae73a
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x00600000000ae732
+ (id)initWithDictionary:(id)arg1;	// IMP=0x00600000000ae71e
+ (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x00600000000ae48a
+ (id)initWithObjects:(id *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00600000000ae3ed
+ (id)initForKeys:(id)arg1;	// IMP=0x00600000000ae38d
+ (id)initWithSearchStrategy:(id)arg1;	// IMP=0x00600000000ae321
+ (id)initWithCoder:(id)arg1;	// IMP=0x00600000000ae099
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000ae090
+ (id)alloc;	// IMP=0x00600000000ae087
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000ae07f
- (void)removeAllObjects;	// IMP=0x00000000000af851
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000000af5a8
- (id)objectEnumerator;	// IMP=0x00000000000af541
- (_Bool)isEqualToDictionary:(id)arg1;	// IMP=0x00000000000af50a
- (void)getObjects:(id *)arg1;	// IMP=0x00000000000af4b8
- (void)getKeys:(id *)arg1;	// IMP=0x00000000000af43e
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;	// IMP=0x00000000000af379
- (id)allValues;	// IMP=0x00000000000af2dd
- (id)allKeys;	// IMP=0x00000000000af23b
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000af0cd
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000000af041
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000af000
- (unsigned long long)_valueCountByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000aefea
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000aefd1
- (id)keyEnumerator;	// IMP=0x00000000000aed83
- (unsigned long long)count;	// IMP=0x00000000000aed5a
- (void)setValues:(id *)arg1;	// IMP=0x00000000000aed43
- (void)_setValues:(id *)arg1 retain:(_Bool)arg2;	// IMP=0x00000000000aec88
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000aebd0
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000aebbf
- (const id *)knownKeyValuesPointer;	// IMP=0x00000000000aebaf
- (const id *)values;	// IMP=0x00000000000aeb9f
- (id)mapping;	// IMP=0x00000000000aeb8e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aeb1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aea79
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae8bb
- (Class)classForCoder;	// IMP=0x00000000000ae899
- (void)dealloc;	// IMP=0x00000000000ae816
- (_Bool)_isDeallocating;	// IMP=0x00000000000ae7f6
- (_Bool)_tryRetain;	// IMP=0x00000000000ae7b9
- (unsigned long long)retainCount;	// IMP=0x00000000000ae7a1
- (oneway void)release;	// IMP=0x00000000000ae763
- (id)retain;	// IMP=0x00000000000ae742

@end
