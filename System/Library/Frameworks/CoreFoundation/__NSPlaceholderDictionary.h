//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderDictionary : NSMutableDictionary
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000194624
- (void)dealloc;	// IMP=0x00000000001949bf
- (unsigned long long)retainCount;	// IMP=0x00000000001949b7
- (oneway void)release;	// IMP=0x00000000001949b6
- (id)retain;	// IMP=0x00000000001949b2
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x0000000000194938
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000001948e4
- (id)init;	// IMP=0x0000000000194899
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000019484f
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x0000000000194747
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000194626
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000194555
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000194496
- (id)keyEnumerator;	// IMP=0x00000000001943d7
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000194318
- (unsigned long long)count;	// IMP=0x0000000000194259

@end

