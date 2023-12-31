//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableArray.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray : NSMutableArray
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000014109
- (void)dealloc;	// IMP=0x00000000000144d6
- (unsigned long long)retainCount;	// IMP=0x00000000000144ce
- (oneway void)release;	// IMP=0x00000000000144cd
- (id)retain;	// IMP=0x00000000000144c9
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x000000000001444f
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000000143fb
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000143b3
- (id)_initByAdoptingBuffer:(id *)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x000000000001437c
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000142d0
- (id)initWithArray:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x0000000000014255
- (id)initWithArray:(id)arg1;	// IMP=0x0000000000014153
- (id)init;	// IMP=0x000000000001410b
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000001403a
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000013f7b
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000013ebc
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000013dfd
- (unsigned long long)count;	// IMP=0x0000000000013d3e

@end

