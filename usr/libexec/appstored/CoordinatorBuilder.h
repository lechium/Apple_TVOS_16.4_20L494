//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LogKey, NSString, NSURL, NSUUID;

@interface CoordinatorBuilder : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    unsigned long long _clientID;	// 16 = 0x10
    NSUUID *_gizmoPairingID;	// 24 = 0x18
    unsigned long long _intent;	// 32 = 0x20
    LogKey *_logKey;	// 40 = 0x28
    long long _priority;	// 48 = 0x30
    NSURL *_targetBundleURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000019d910
- (id)init;	// IMP=0x001000000019d536

@end

