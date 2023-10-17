//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HHAnalyticsInterval, NSString, NSUUID, SIBCConnection;
@protocol HHAnalyticsReporter, SIBCEndpointSessionDelegate;

__attribute__((visibility("hidden")))
@interface SIBCEndpointSession : NSObject
{
    SIBCConnection *_connection;	// 8 = 0x8
    id <HHAnalyticsReporter> _analyticsReporter;	// 16 = 0x10
    HHAnalyticsInterval *_sessionEndMetric;	// 24 = 0x18
    NSString *_logPrefix;	// 32 = 0x20
    NSUUID *_hubId;	// 40 = 0x28
    id <SIBCEndpointSessionDelegate> _delegate;	// 48 = 0x30
    long long _state;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000126ef
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SIBCEndpointSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUUID *hubId; // @synthesize hubId=_hubId;
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000000001263d
- (id)_logPrefix;	// IMP=0x00000000000125b6
@property(readonly, nonatomic) NSUUID *endpointId;
- (void)_handleCancelWithMessage:(id)arg1;	// IMP=0x000000000001249e
- (void)_handleResumeWithResponseStatus:(long long)arg1;	// IMP=0x000000000001227d
- (void)_handleCloseWithResponseStatus:(long long)arg1;	// IMP=0x0000000000012142
- (void)_handleOpenWithResponseStatus:(long long)arg1;	// IMP=0x0000000000011f21
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011c30
- (void)closeWithForceFlag:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001192e
- (_Bool)_canCloseSession;	// IMP=0x0000000000011911
- (void)openWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011620
- (void)_handleInvalidationWithError:(id)arg1 permanent:(_Bool)arg2;	// IMP=0x00000000000114f6
- (void)_updateMetricsOnState:(long long)arg1;	// IMP=0x00000000000113a3
- (void)_beginTrackingSessionEndMetric;	// IMP=0x00000000000112ad
- (void)_maybeSubmitSessionEndMetricWithError:(id)arg1;	// IMP=0x000000000001126d
- (void)reset;	// IMP=0x000000000001118f
- (void)start;	// IMP=0x0000000000011037
- (id)initWithConnection:(id)arg1 hubIdentifier:(id)arg2;	// IMP=0x0000000000010fa0
- (id)initWithConnection:(id)arg1 hubIdentifier:(id)arg2 analyticsReporter:(id)arg3;	// IMP=0x0000000000010ee1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

