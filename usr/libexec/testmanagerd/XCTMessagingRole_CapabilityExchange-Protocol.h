//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, NSUUID, XCAXAuditConfiguration, XCAccessibilityElement, XCTCapabilities, XCTScreenshotRequest, XCTSpindumpRequestSpecification, XCTTailspinRequest;

@protocol XCTMessagingRole_CapabilityExchange
- (void)_XCT_fetchParameterizedAttribute:(NSString *)arg1 forElement:(XCAccessibilityElement *)arg2 parameter:(id)arg3 reply:(void (^)(id, NSError *))arg4;
- (void)_XCT_fetchParameterizedAttributeForElement:(XCAccessibilityElement *)arg1 attributes:(NSNumber *)arg2 parameter:(id)arg3 reply:(void (^)(id, NSError *))arg4;
- (void)_XCT_setAttribute:(NSNumber *)arg1 value:(id)arg2 element:(XCAccessibilityElement *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)_XCT_fetchAttributesForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)_XCT_requestSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)_XCT_snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCElementSnapshot *, NSError *))arg4;
- (void)_XCT_openURL:(NSURL *)arg1 usingApplication:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)_XCT_openDefaultApplicationForURL:(NSURL *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)_XCT_terminateApplicationWithBundleID:(NSString *)arg1 pid:(int)arg2 completion:(void (^)(NSError *))arg3;
- (void)_XCT_terminateApplicationWithBundleID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)_XCT_performAccessibilityAction:(int)arg1 onElement:(XCAccessibilityElement *)arg2 withValue:(id)arg3 reply:(void (^)(NSError *))arg4;
- (void)_XCT_unregisterForAccessibilityNotification:(int)arg1 withRegistrationToken:(NSNumber *)arg2 reply:(void (^)(NSError *))arg3;
- (void)_XCT_registerForAccessibilityNotification:(int)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)_XCT_launchApplicationWithBundleID:(NSString *)arg1 path:(NSString *)arg2 arguments:(NSArray *)arg3 environment:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)_XCT_launchApplicationWithBundleID:(NSString *)arg1 arguments:(NSArray *)arg2 environment:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)_XCT_startMonitoringApplicationWithBundleID:(NSString *)arg1 path:(NSString *)arg2;
- (void)_XCT_startMonitoringApplicationWithBundleID:(NSString *)arg1;
- (void)_XCT_runAccessibilityAuditForElement:(XCAccessibilityElement *)arg1 withConfiguration:(XCAXAuditConfiguration *)arg2 reply:(void (^)(XCAXAuditResultCollection *, NSError *))arg3;
- (void)_XCT_fetchSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(XCUIElementSnapshotRequestResult *, NSError *))arg4;
- (void)_XCT_requestElementAtPoint:(struct CGPoint)arg1 reply:(void (^)(XCAccessibilityElement *, NSError *))arg2;
- (void)_XCT_fetchAttributes:(NSArray *)arg1 forElement:(XCAccessibilityElement *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)_XCT_requestBackgroundAssertionWithReply:(void (^)(void))arg1;
- (void)_XCT_requestBackgroundAssertionForPID:(int)arg1 reply:(void (^)(_Bool))arg2;
- (void)_XCT_requestScreenshotWithReply:(void (^)(NSData *, NSError *))arg1;
- (void)_XCT_requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 uti:(NSString *)arg3 compressionQuality:(double)arg4 withReply:(void (^)(NSData *, NSError *))arg5;
- (void)_XCT_requestScreenshot:(XCTScreenshotRequest *)arg1 withReply:(void (^)(XCTImage *, NSError *))arg2;
- (void)_XCT_requestTailspinWithRequest:(XCTTailspinRequest *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)_XCT_requestSpindumpWithSpecification:(XCTSpindumpRequestSpecification *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)_XCT_requestUnsupportedBundleIdentifiersForAutomationSessions:(void (^)(NSSet *, NSError *))arg1;
- (void)_XCT_requestEndpointForTestTargetWithPID:(int)arg1 preferredBackendPath:(NSString *)arg2 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg3;
- (void)_XCT_enableAutomationModeWithReply:(void (^)(NSError *))arg1;
- (void)_XCT_requestSerializedTransportWrapperForIDESessionWithIdentifier:(NSUUID *)arg1 reply:(void (^)(XCTSerializedTransportWrapper *))arg2;
- (void)_XCT_requestSocketForSessionIdentifier:(NSUUID *)arg1 reply:(void (^)(NSFileHandle *))arg2;
- (void)_XCT_exchangeCapabilities:(XCTCapabilities *)arg1 reply:(void (^)(XCTCapabilities *))arg2;
- (void)_XCT_exchangeProtocolVersion:(unsigned long long)arg1 reply:(void (^)(unsigned long long))arg2;
@end

