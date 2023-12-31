//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedArray : NSArray
{
    NSData *_sourceData;	// 8 = 0x8
    int _cd_rc;	// 16 = 0x10
    unsigned int _count;	// 20 = 0x14
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000006cf31
- (const id *)_values;	// IMP=0x000000000006cfcf
- (void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006cf98
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006cf8d
- (unsigned long long)count;	// IMP=0x000000000006cf7d
- (id)mutableCopy;	// IMP=0x000000000006cf42
- (Class)classForCoder;	// IMP=0x000000000006cf20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006cf0e
- (id)copy;	// IMP=0x000000000006cf03
- (id)description;	// IMP=0x000000000006cee9
- (_Bool)_isDeallocating;	// IMP=0x000000000006cec9
- (_Bool)_tryRetain;	// IMP=0x000000000006ce8c
- (unsigned long long)retainCount;	// IMP=0x000000000006ce74
- (oneway void)release;	// IMP=0x000000000006ce36
- (id)retain;	// IMP=0x000000000006ce15
- (void)dealloc;	// IMP=0x000000000006cdc2
- (id)init;	// IMP=0x000000000006cd8b

@end

