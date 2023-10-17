//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary
{
    unsigned char _cfinfo[4];	// 8 = 0x8
    unsigned int _rc;	// 12 = 0xc
    unsigned int _bits[4];	// 16 = 0x10
    void *_callbacks;	// 32 = 0x20
    id *_values;	// 40 = 0x28
    id *_keys;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000004ee40
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000004ec24
- (unsigned long long)retainCount;	// IMP=0x000000000004f1df
- (_Bool)_isDeallocating;	// IMP=0x000000000004f1cf
- (_Bool)_tryRetain;	// IMP=0x000000000004f1be
- (oneway void)release;	// IMP=0x000000000004f1b9
- (id)retain;	// IMP=0x000000000004f1a1
- (id)description;	// IMP=0x000000000004f0c6
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f087
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f02f
- (void)removeAllObjects;	// IMP=0x000000000004efd9
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004ef85
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004eeda
- (unsigned long long)hash;	// IMP=0x000000000004eed5
- (Class)classForCoder;	// IMP=0x000000000004eeaf
- (void)setObservationInfo:(void *)arg1;	// IMP=0x000000000004ee43
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000004edc8
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000004ed19
- (id)keyEnumerator;	// IMP=0x000000000004ecbf
- (id)objectForKey:(id)arg1;	// IMP=0x000000000004ec77
- (unsigned long long)count;	// IMP=0x000000000004ec3c

@end
