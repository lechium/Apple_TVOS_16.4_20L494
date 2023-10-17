//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol IDSMadridAckTrackerDelegate;

@interface IDSMadridAckTracker : NSObject
{
    NSNumber *_overallSendTimestamp;	// 8 = 0x8
    id <IDSMadridAckTrackerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000073bc30
@property(retain, nonatomic) id <IDSMadridAckTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addBlockToAggregatableMessage:(id)arg1 forURIs:(id)arg2 trackingSet:(id)arg3 guid:(id)arg4;	// IMP=0x001000000073b3b0
- (void)addBlockToAggregateMessage:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3 guid:(id)arg4;	// IMP=0x001000000073a720
- (void)addBlockToMMLMessage:(id)arg1 guid:(id)arg2;	// IMP=0x0010000000739ee0
- (void)trackMessages:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3;	// IMP=0x0010000000739970
- (void)trackMMLMessages:(id)arg1 forURIs:(id)arg2 messageQueue:(id)arg3;	// IMP=0x00100000007391d0

@end

