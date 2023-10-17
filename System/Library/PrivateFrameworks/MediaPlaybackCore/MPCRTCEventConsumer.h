//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEvent, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription, MPCRTCEventConsumerTestingDelegate, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCRTCEventConsumer : NSObject
{
    NSObject<OS_dispatch_group> *_rtcGroup;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_rtcQueue;	// 16 = 0x10
    MPCPlaybackEngineEvent *_cachedFirstItemAssetLoadEvent;	// 24 = 0x18
    id <MPCRTCEventConsumerTestingDelegate> _testingDelegate;	// 32 = 0x20
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 40 = 0x28
}

+ (id)identifier;	// IMP=0x001000000021e7b4
+ (id)dateFormatter;	// IMP=0x001000000021e784
+ (id)NSStringFromMPCRTCReportingEventCategory:(long long)arg1;	// IMP=0x001000000021e6c9
+ (id)rtcIdentifiersFromUniversalIdentifiers:(id)arg1;	// IMP=0x001000000021e4c3
+ (id)rtcIdentifiersFromRadioIdentifiers:(id)arg1;	// IMP=0x001000000021e3d0
+ (id)playerServiceNameWithPlayerID:(id)arg1;	// IMP=0x001000000021e355
+ (id)identifierStringFromItemIdentifiers:(id)arg1 radioIdentifiers:(id)arg2;	// IMP=0x001000000021e216
- (void).cxx_destruct;	// IMP=0x000000000021b0b0
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(nonatomic) __weak id <MPCRTCEventConsumerTestingDelegate> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
- (void)_sendOneMessageWithCategory:(long long)arg1 type:(long long)arg2 payload:(id)arg3;	// IMP=0x000000000021a8d8
- (void)_sendReportWithSession:(id)arg1 category:(long long)arg2 type:(long long)arg3 payload:(id)arg4;	// IMP=0x000000000021a7c5
- (id)_rtcUserInfoWithServiceName:(id)arg1;	// IMP=0x000000000021a6c6
- (id)_rtcSessionInfoWithSamplingUUID:(id)arg1;	// IMP=0x000000000021a4e1
- (void)_generateConfiguredReportingSessionWithSamplingUUID:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000021a350
- (void)_updateAssetLoadInfoEvent:(id)arg1 fromAssetLoadEndEvent:(id)arg2 untilAssetLoadBeginEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x0000000000219c23
- (void)_performABCSnapshotWithPayloadIfNecessary:(id)arg1;	// IMP=0x00000000002199d5
- (id)_underlyingErrorFromPayload:(id)arg1;	// IMP=0x00000000002197b5
- (_Bool)_itemWasPreviouslyLoaded:(id)arg1 cursor:(id)arg2;	// IMP=0x000000000021943b
- (id)_itemAssetTypeFromItemAssetLoadEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x0000000000218b75
- (id)_mediaIdentifierFromItemAssetLoadEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x0000000000218763
- (id)_tapToPlayMetrics:(id)arg1 fromItemStartEvent:(id)arg2;	// IMP=0x00000000002183a3
- (id)_accountSnapshotWithCursor:(id)arg1;	// IMP=0x0000000000218213
- (id)_itemStartIncitingEvent:(id)arg1 fromItemStartEvent:(id)arg2;	// IMP=0x0000000000217f79
- (id)_reasonForEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000002179c9
- (id)_payloadForItemSummary:(id)arg1 fromItemEvent:(id)arg2;	// IMP=0x0000000000217353
- (id)_payloadForItemSummary:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000002171eb
- (id)_payloadForItemAssetLoad:(id)arg1 fromItemEvent:(id)arg2;	// IMP=0x0000000000215c93
- (id)_payloadForQueueLoad:(id)arg1 fromQueueLoadEndEvent:(id)arg2;	// IMP=0x000000000021538a
- (id)_payloadForSessionSummary:(id)arg1 fromEvent:(id)arg2;	// IMP=0x0000000000214e27
- (id)_payloadForSessionStart:(id)arg1 fromEvent:(id)arg2;	// IMP=0x0000000000213e32
- (void)_sendReportForItemSummaryWithEndReason:(id)arg1 cursor:(id)arg2 event:(id)arg3;	// IMP=0x0000000000213cf1
- (void)_sendReportForItemSummary:(id)arg1 event:(id)arg2;	// IMP=0x0000000000213cd7
- (void)_sendReportForItemAssetLoad:(id)arg1 event:(id)arg2;	// IMP=0x0000000000213908
- (void)_sendQueueLoadEventIfNeeded:(id)arg1 forItemEvent:(id)arg2;	// IMP=0x0000000000213470
- (void)_sendReportForSessionStart:(id)arg1 event:(id)arg2 withType:(long long)arg3;	// IMP=0x00000000002133b8
- (void)_sendSessionStartIfNeeded:(id)arg1 forItemEvent:(id)arg2;	// IMP=0x00000000002132b8
- (void)_sendReportForSessionSummary:(id)arg1 event:(id)arg2 withType:(long long)arg3;	// IMP=0x0000000000213200
- (void)_handleReportingForItemStartEvent:(id)arg1 event:(id)arg2;	// IMP=0x0000000000213167
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x000000000021314d
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x0000000000212e44
- (id)init;	// IMP=0x0000000000212d3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
