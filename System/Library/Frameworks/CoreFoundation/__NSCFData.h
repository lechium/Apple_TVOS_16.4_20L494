//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableData.h"

__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData
{
    unsigned long long _cfinfoa;	// 8 = 0x8
    long long _length;	// 16 = 0x10
    long long _capacity;	// 24 = 0x18
    struct __CFAllocator *_bytesDeallocator;	// 32 = 0x20
    char *_bytes;	// 40 = 0x28
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000005f128
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000005f110
- (Class)classForCoder;	// IMP=0x000000000005f1da
- (_Bool)_providesConcreteBacking;	// IMP=0x000000000005f1d7
- (void)setLength:(unsigned long long)arg1;	// IMP=0x000000000005f1cf
- (void *)mutableBytes;	// IMP=0x000000000005f1ca
- (const void *)bytes;	// IMP=0x000000000005f1c5
- (unsigned long long)length;	// IMP=0x000000000005f1c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005f12b
- (unsigned long long)retainCount;	// IMP=0x000000000005f10b
- (_Bool)_isDeallocating;	// IMP=0x000000000005f0fb
- (_Bool)_tryRetain;	// IMP=0x000000000005f0ea
- (oneway void)release;	// IMP=0x000000000005f0e5
- (id)retain;	// IMP=0x000000000005f0e0
- (unsigned long long)hash;	// IMP=0x000000000005f0db
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005f0b8

@end

