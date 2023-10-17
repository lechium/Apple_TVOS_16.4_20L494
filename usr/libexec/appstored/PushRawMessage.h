//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface PushRawMessage : NSObject
{
    unsigned long long _topic;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001505e1
- (id)description;	// IMP=0x0010000000150485
- (unsigned long long)hash;	// IMP=0x001000000015046f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001503b2

@end
