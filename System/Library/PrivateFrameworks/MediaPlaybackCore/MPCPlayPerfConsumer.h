//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlayPerfConsumer : NSObject
{
    NSString *_lastSiriReferenceIdentifier;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 24 = 0x18
}

+ (id)coreAnalyticsEventNameWithEventType:(id)arg1;	// IMP=0x0010000000228097
+ (id)analyticsFormat:(id)arg1;	// IMP=0x0010000000227dee
+ (id)analyticsContentType:(long long)arg1;	// IMP=0x0010000000227dca
+ (id)identifier;	// IMP=0x0010000000227dbd
- (void).cxx_destruct;	// IMP=0x000000000022608f
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)sendMetricsToSiriSelfLogger:(id)arg1;	// IMP=0x0000000000225fc3
- (void)sendMetricsToCoreAnalytics:(id)arg1;	// IMP=0x0000000000225eb1
- (void)generatePlayPerfSignposts:(id)arg1;	// IMP=0x00000000002254ad
- (void)handleMetrics:(id)arg1;	// IMP=0x0000000000225145
- (void)setupErrorHandlerForEventType:(id)arg1 errorKey:(id)arg2 prefix:(id)arg3;	// IMP=0x000000000022507e
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x0000000000225064
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x0000000000224d97
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x0000000000224d33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
