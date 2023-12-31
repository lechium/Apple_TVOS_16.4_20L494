//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSXPCConnection, RCPEventStreamRecorder, XCTCapabilities, XCTDInternalTelemetryLogger, XCTDSignpostListener, XCTScreenshotRequest;
@protocol OS_dispatch_queue, OS_os_transaction, XCAXManager, XCTDAutomationModeInterface, XCTDAutomationServicesProviding, XCTDDiagnosticsProviding, XCTDProcessManagementServicesProviding, XCTDScreenshotProviding, XCTDTargetBootstrapSessionProviding, XCTestSessionDelegate;

@interface XCTestSession : NSObject
{
    _Bool _valid;	// 8 = 0x8
    _Bool _hasTestingEntitlement;	// 9 = 0x9
    _Bool _hasInternalClientEntitlement;	// 10 = 0xa
    _Bool _recapIsRunning;	// 11 = 0xb
    NSXPCConnection *_connection;	// 16 = 0x10
    id <XCTDAutomationModeInterface> _automationModeInterface;	// 24 = 0x18
    id <XCTDScreenshotProviding> _screenshotProvider;	// 32 = 0x20
    id <XCTDDiagnosticsProviding> _diagnosticsProvider;	// 40 = 0x28
    id <XCTDProcessManagementServicesProviding> _processManagementServices;	// 48 = 0x30
    id <XCTDAutomationServicesProviding> _automationServices;	// 56 = 0x38
    id <XCTDTargetBootstrapSessionProviding> _targetBootstrapSessionProvider;	// 64 = 0x40
    id <XCTestSessionDelegate> _delegate;	// 72 = 0x48
    CDUnknownBlockType _disconnectionHandler;	// 80 = 0x50
    XCTCapabilities *_remoteInterfaceCapabilities;	// 88 = 0x58
    NSString *_clientBundleID;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    NSObject<OS_os_transaction> *_osTransaction;	// 112 = 0x70
    XCTDSignpostListener *_signpostListener;	// 120 = 0x78
    CDUnknownBlockType;	// 128 = 0x80
    NSError *_automationServicesError;	// 136 = 0x88
    XCTDInternalTelemetryLogger *_internalTelemetryLogger;	// 144 = 0x90
    RCPEventStreamRecorder *_recapEventRecorder;	// 152 = 0x98
}

+ (_Bool)supportsHIDEventRecording;	// IMP=0x00200000000117c4
+ (_Bool)supportsPostingTelemetryData;	// IMP=0x00100000000115fb
+ (id)capabilitiesBuilder;	// IMP=0x001000000000beaf
- (void).cxx_destruct;	// IMP=0x0010000000011ed9
@property _Bool recapIsRunning; // @synthesize recapIsRunning=_recapIsRunning;
- (_Bool);	// IMP=0x0010000000011ec5
@property(retain) RCPEventStreamRecorder *recapEventRecorder; // @synthesize recapEventRecorder=_recapEventRecorder;
@property(readonly) XCTDInternalTelemetryLogger *internalTelemetryLogger; // @synthesize internalTelemetryLogger=_internalTelemetryLogger;
@property(retain) NSError *automationServicesError; // @synthesize automationServicesError=_automationServicesError;
@property(readonly) CDUnknownBlockType automationServicesFactory; // @synthesize automationServicesFactory=_automationServicesFactory;
@property(readonly) XCTDSignpostListener *signpostListener; // @synthesize signpostListener=_signpostListener;
@property(retain) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain) XCTCapabilities *remoteInterfaceCapabilities; // @synthesize remoteInterfaceCapabilities=_remoteInterfaceCapabilities;
@property(readonly) _Bool hasInternalClientEntitlement; // @synthesize hasInternalClientEntitlement=_hasInternalClientEntitlement;
@property(readonly) _Bool hasTestingEntitlement; // @synthesize hasTestingEntitlement=_hasTestingEntitlement;
@property(copy) CDUnknownBlockType disconnectionHandler; // @synthesize disconnectionHandler=_disconnectionHandler;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property __weak id <XCTestSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <XCTDTargetBootstrapSessionProviding> targetBootstrapSessionProvider; // @synthesize targetBootstrapSessionProvider=_targetBootstrapSessionProvider;
@property(retain) id <XCTDAutomationServicesProviding> automationServices; // @synthesize automationServices=_automationServices;
@property(readonly) id <XCTDProcessManagementServicesProviding> processManagementServices; // @synthesize processManagementServices=_processManagementServices;
@property(readonly) id <XCTDDiagnosticsProviding> diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(readonly) id <XCTDScreenshotProviding> screenshotProvider; // @synthesize screenshotProvider=_screenshotProvider;
@property(readonly) id <XCTDAutomationModeInterface> automationModeInterface; // @synthesize automationModeInterface=_automationModeInterface;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_XCT_playBackHIDEventRecordingFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011b14
- (void)_XCT_stopHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000119ee
- (void)_XCT_startHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000117d5
- (void)_XCT_postTelemetryData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001160c
- (void)_XCT_resetAuthorizationStatusForBundleIdentifier:(id)arg1 resourceIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000114bc
- (void)_XCT_injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001139a
- (void)_XCT_injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011278
- (void)_XCT_startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011156
- (void)_XCT_startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011034
- (void)_XCT_requestSiriEnabledStatus:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010f55
- (void)_XCT_getInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010e90
- (void)_XCT_sendString:(id)arg1 maximumFrequency:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010db1
- (void)_XCT_performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010c5e
- (void)_XCT_synthesizeEvent:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010aef
- (void)_XCT_synthesizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001099c
- (void)_XCT_requestPressureEventsSupported:(CDUnknownBlockType)arg1;	// IMP=0x00100000000108d9
- (void)_XCT_hasHardwareButton:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000107d7
- (void)_XCT_requestProcessSpecifierForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000105dd
- (void)_XCT_requestBundleIDForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001045a
- (void)_XCT_startMonitoringApplicationWithBundleID:(id)arg1 path:(id)arg2;	// IMP=0x00100000000103b4
- (void)_XCT_startMonitoringApplicationWithBundleID:(id)arg1;	// IMP=0x00100000000103a0
- (void)_XCT_openURL:(id)arg1 usingApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010296
- (void)_XCT_openDefaultApplicationForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000101a2
- (void)_XCT_terminateApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001018b
- (void)_XCT_terminateApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001003e
- (void)_XCT_launchApplicationWithBundleID:(id)arg1 path:(id)arg2 arguments:(id)arg3 environment:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000000feaa
- (void)_XCT_launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000fe80
- (void)applicationDidUpdateState:(id)arg1;	// IMP=0x001000000000fa93
- (void)_XCT_getDeviceOrientationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f9d3
- (void)_XCT_updateDeviceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f917
- (void)_XCT_enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f85b
- (void)_XCT_setLocalizableStringsDataGatheringEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f793
- (void)_XCT_requestElementAtPoint:(struct CGPoint)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f685
- (void)_XCT_fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f515
- (void)_XCT_fetchParameterizedAttributeForElement:(id)arg1 attributes:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f3cb
- (void)_XCT_setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f29b
- (void)_XCT_fetchAttributes:(id)arg1 forElement:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f14a
- (void)_XCT_runAccessibilityAuditForElement:(id)arg1 withConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000eff9
- (_Bool)ensureUITestingIsReadyWithError:(id *)arg1;	// IMP=0x001000000000efdf
- (void)_XCT_fetchSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000eb56
- (void)_XCT_requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ea0b
- (void)_XCT_snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000e98b
- (void)_XCT_unregisterForAccessibilityNotification:(int)arg1 withRegistrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e89a
- (void)_XCT_registerForAccessibilityNotification:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e49d
- (void)_XCT_performAccessibilityAction:(int)arg1 onElement:(id)arg2 withValue:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000e39a
- (void)_XCT_setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e2d9
- (void)_XCT_loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e1b8
- (void)_XCT_unloadAccessibility:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e13a
- (void)_XCT_fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e0ba
- (_Bool)ensureUITestingIsReadyWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x001000000000de3b
- (void)_XCT_setSimulatedLocation:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000dcbe
- (void)_XCT_getSimulatedLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000db99
- (void)_XCT_clearSimulatedLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000da94
- (void)_XCT_getAppearanceModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d959
- (void)_XCT_updateAppearanceMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d7fd
- (void)_XCT_requestBackgroundAssertionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d740
- (void)_XCT_requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d6aa
- (void)_XCT_unregisterForSignpostsWithToken:(id)arg1;	// IMP=0x001000000000d638
- (void)_XCT_registerForSignpostsFromSubsystem:(id)arg1 category:(id)arg2 intervalTimeout:(double)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000d429
- (void)_XCT_requestTailspinWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d26d
- (void)_XCT_requestSpindumpWithSpecification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d06d
- (void)_XCT_requestScreenshot:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d05b
- (void)_XCT_requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 uti:(id)arg3 compressionQuality:(double)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000cfdb
- (void)_XCT_requestScreenshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cf5b
- (void)_XCT_requestDTServiceHubConnectionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ce06
- (void)_XCT_requestUnsupportedBundleIdentifiersForAutomationSessions:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cbf4
- (void)_XCT_requestEndpointForTestTargetWithPID:(int)arg1 preferredBackendPath:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c93c
- (void)_XCT_requestSerializedTransportWrapperForIDESessionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c76b
- (void)_XCT_enableAutomationModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c572
- (void)_XCT_requestSocketForSessionIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c3c8
- (void)_XCT_exchangeCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c28c
- (void)_XCT_exchangeProtocolVersion:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bdfb
@property(readonly, nonatomic) id <XCAXManager> axManager;
- (id)gesturePerformer;	// IMP=0x001000000000bd5b
- (id)systemConfiguration;	// IMP=0x001000000000bd0b
- (id)remoteObjectProxy;	// IMP=0x001000000000bb62
- (_Bool)isAuthorizedInternalClientWithProcessID:(int)arg1;	// IMP=0x001000000000bb0e
@property(readonly, nonatomic) _Bool allowsUITestControl;
@property(readonly) int processIdentifier;
- (void)_takeAssertionForAndMonitorConnectionProcess;	// IMP=0x001000000000b727
@property(readonly, copy) NSString *description;
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 automationModeInterface:(id)arg3 diagnosticsProvider:(id)arg4 screenshotProvider:(id)arg5 processManagementServices:(id)arg6 targetBootstrapSessionProvider:(id)arg7 automationServicesFactory:(CDUnknownBlockType)arg8;	// IMP=0x001000000000b03a
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 diagnosticsProvider:(id)arg3 processManagementServices:(id)arg4 targetBootstrapSessionProvider:(id)arg5;	// IMP=0x001000000000aea2
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 diagnosticsProvider:(id)arg3 targetBootstrapSessionProvider:(id)arg4;	// IMP=0x001000000000ade0
- (void)invalidate;	// IMP=0x001000000000aae1
- (void)dealloc;	// IMP=0x001000000000a9b4
- (void)_XCT_requestScreenshot:(XCTScreenshotRequest *)arg1 completion:(void (^)(XCTImage *, NSError *))arg2;	// IMP=0x00100000000476de
- (void)_loadAccessibilityWithTimeout:(double)arg1 reply:(void (^)(_Bool, NSError *))arg2;	// IMP=0x0010000000047ecd
- (void)_XCT_resetAuthorizationStatusOfProtectedResourceWithIdentifier:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 auditToken:(CDStruct_6ad76789)arg3 completion:(void (^)(NSError *))arg4;	// IMP=0x001000000004b669

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

