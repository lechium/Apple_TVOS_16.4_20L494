//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFWeakReference : NSObject
{
    id _object;	// 8 = 0x8
    long long _objectAddress;	// 16 = 0x10
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077162
- (unsigned long long)hash;	// IMP=0x0000000000077158
- (void)dealloc;	// IMP=0x00000000000770e5
- (id)initWithObject:(id)arg1;	// IMP=0x000000000007707d

@end

