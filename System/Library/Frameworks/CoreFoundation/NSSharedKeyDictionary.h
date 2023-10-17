//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

@class NSSharedKeySet;

__attribute__((visibility("hidden")))
@interface NSSharedKeyDictionary : NSMutableDictionary
{
    NSSharedKeySet *_keyMap;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    id *_values;	// 24 = 0x18
    CDUnknownFunctionPointerType _ifkIMP;	// 32 = 0x20
    NSMutableDictionary *_sideDic;	// 40 = 0x28
    unsigned long long _mutations;	// 48 = 0x30
    _Bool _doKVO;	// 56 = 0x38
}

+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x0060000000179614
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000179611
+ (id)sharedKeyDictionaryWithKeySet:(id)arg1;	// IMP=0x0060000000177edf
- (void)setObservationInfo:(void *)arg1;	// IMP=0x0000000000179617
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017839f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001780d8
- (Class)classForCoder;	// IMP=0x00000000001780cc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001780bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000177fef
- (void)dealloc;	// IMP=0x0000000000177f0e
- (id)initWithKeySet:(id)arg1;	// IMP=0x0000000000177dde
- (id)keySet;	// IMP=0x0000000000177dd2
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000177cc1
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000177b5c
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000177874
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000017760f
- (id)keyEnumerator;	// IMP=0x0000000000177465
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001772eb
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000177272
- (unsigned long long)count;	// IMP=0x0000000000177236

@end
