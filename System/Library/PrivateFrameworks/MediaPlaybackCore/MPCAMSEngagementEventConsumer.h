//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSEngagement, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCAMSEngagementEventConsumer : NSObject
{
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 8 = 0x8
    AMSEngagement *_engagement;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x00100000002b0c3d
- (void).cxx_destruct;	// IMP=0x00000000002b191a
@property(readonly, nonatomic) AMSEngagement *engagement; // @synthesize engagement=_engagement;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
- (id)_JSONEncodableEvent:(id)arg1;	// IMP=0x00000000002b1781
- (_Bool)_enqueueDataForPlaybackChangingEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000002b0e63
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x00000000002b0e2a
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000002b0c4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

