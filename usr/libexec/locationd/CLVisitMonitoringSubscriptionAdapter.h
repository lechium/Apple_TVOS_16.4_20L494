//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLVisitMonitoringSubscriptionAdapter : NSObject
{
    void *_subscription;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)invalidate;	// IMP=0x0010000000a52002
- (void)onVisit:(id)arg1;	// IMP=0x0010000000a51a55
- (id)initWithSubscription:(void *)arg1;	// IMP=0x0010000000a519f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

