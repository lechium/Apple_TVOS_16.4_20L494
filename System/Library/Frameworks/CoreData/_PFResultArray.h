//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSKnownKeysDictionary, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _PFResultArray : NSArray
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _count;	// 12 = 0xc
    unsigned int _resultType;	// 16 = 0x10
    CDStruct_2b54fbaf *_resultSet;	// 24 = 0x18
    _PFWeakReference *_weakRequestStore;	// 32 = 0x20
    NSKnownKeysDictionary *_metadata;	// 40 = 0x28
}

+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x00600000000293ab
+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000002939a
+ (void)initialize;	// IMP=0x0060000000029378
- (unsigned long long)retainCount;	// IMP=0x0000000000029c44
- (oneway void)release;	// IMP=0x0000000000029c14
- (id)retain;	// IMP=0x0000000000029c00
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029bf8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029bed
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000029a4d
- (void)getObjects:(id *)arg1;	// IMP=0x0000000000029935
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000029883
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002969d
- (_Bool)_setPurgeable:(_Bool)arg1;	// IMP=0x000000000002967e
- (unsigned long long)count;	// IMP=0x0000000000029658
- (void)dealloc;	// IMP=0x00000000000295d8
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000029553
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x0000000000029534
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000029491
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000029472
- (id)initWithObjects:(CDStruct_2b54fbaf *)arg1 count:(unsigned int)arg2 store:(id)arg3 metadata:(id)arg4;	// IMP=0x00000000000293b3
- (Class)classForCoder;	// IMP=0x0000000000029389

@end

