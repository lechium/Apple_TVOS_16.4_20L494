//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLKeyValuePair : NSObject
{
    id key;	// 8 = 0x8
    id value;	// 16 = 0x10
    unsigned long long hash;	// 24 = 0x18
}

+ (id)pairWithKey:(id)arg1 value:(id)arg2;	// IMP=0x006000000050b0a7
+ (id)pair;	// IMP=0x006000000050b07a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000050b2a9
- (unsigned long long)hash;	// IMP=0x000000000050b29f
- (id)description;	// IMP=0x000000000050b272
- (id)value;	// IMP=0x000000000050b268
- (id)key;	// IMP=0x000000000050b25e
- (void)setValue:(id)arg1;	// IMP=0x000000000050b230
- (void)setKey:(id)arg1;	// IMP=0x000000000050b202
- (void)dealloc;	// IMP=0x000000000050b195
- (id)initWithKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000050b0e2

@end

