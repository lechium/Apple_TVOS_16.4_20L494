//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMDPolicyPersistence, NSString;

@interface DMDPolicyServerListenerDelegate : NSObject
{
    DMDPolicyPersistence *_policyPersistence;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000063a5d
@property(readonly, nonatomic) DMDPolicyPersistence *policyPersistence; // @synthesize policyPersistence=_policyPersistence;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000638f3
- (id)initWithPolicyPersistence:(id)arg1;	// IMP=0x0010000000063888

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

