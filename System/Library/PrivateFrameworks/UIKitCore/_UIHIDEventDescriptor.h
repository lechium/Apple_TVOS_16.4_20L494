//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIHIDEventDescriptor : NSObject
{
    unsigned int _eventType;	// 8 = 0x8
    unsigned long long _senderID;	// 16 = 0x10
    long long _usagePage;	// 24 = 0x18
    long long _usage;	// 32 = 0x20
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016e2fd
- (id)description;	// IMP=0x000000000016e2a8
- (unsigned long long)hash;	// IMP=0x000000000016e28d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016e1b0
- (id)init;	// IMP=0x000000000016e129

@end

