//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEODataURLSessionTaskIdentifier : NSObject
{
    long long _sessionIdentity;	// 8 = 0x8
    unsigned long long _taskIdentifier;	// 16 = 0x10
    unsigned long long _hash;	// 24 = 0x18
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b1f232
- (unsigned long long)hash;	// IMP=0x0000000000b1f228
- (id)description;	// IMP=0x0000000000b1f1f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b1f1ee
- (id)initWithSession:(id)arg1 task:(id)arg2;	// IMP=0x0000000000b1f083

@end

