//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, NSMutableDictionary;

@interface _BKDisplayDisabledAssertions : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_assertionsByVPID;	// 16 = 0x10
    BSCompoundAssertion *_displayDisabledAssertion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001424c
- (id)init;	// IMP=0x00100000000140d9

@end

