//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLDistributedSensingSubscriptionClient : NSObject
{
    struct CLDistributedSensingSubscription *_subscription;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onVehicleStateUpdate:(id)arg1;	// IMP=0x00100000007fd8ab
- (void)invalidate;	// IMP=0x00100000007fd8a1
- (id)initWithSubscription:(struct CLDistributedSensingSubscription *)arg1;	// IMP=0x00100000007fd860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

