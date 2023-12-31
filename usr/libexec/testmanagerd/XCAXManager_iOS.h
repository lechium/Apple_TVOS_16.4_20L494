//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, XCTDAccessibilitySessionToken, XCTDAccessibilitySystem;

@interface XCAXManager_iOS : NSObject
{
    _Bool _valid;	// 8 = 0x8
    id <XCTDAccessibilitySystem> _accessibilitySystem;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 32 = 0x20
    id <XCTDAccessibilitySessionToken> _accessibilitySessionToken;	// 40 = 0x28
    struct __AXUIElement *_systemWideElement;	// 48 = 0x30
    struct __AXObserver *_accessibilityObserver;	// 56 = 0x38
    NSMutableDictionary *_notificationHandlers;	// 64 = 0x40
    NSMutableDictionary *_userTestingNotificationHandlers;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x0020000000038ac2
- (void).cxx_destruct;	// IMP=0x002000000003c4e2
@property(retain) NSMutableDictionary *userTestingNotificationHandlers; // @synthesize userTestingNotificationHandlers=_userTestingNotificationHandlers;
@property(retain) NSMutableDictionary *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property struct __AXObserver *accessibilityObserver; // @synthesize accessibilityObserver=_accessibilityObserver;
@property struct __AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property(retain) id <XCTDAccessibilitySessionToken> accessibilitySessionToken; // @synthesize accessibilitySessionToken=_accessibilitySessionToken;
@property(retain) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain) id <XCTDAccessibilitySystem> accessibilitySystem; // @synthesize accessibilitySystem=_accessibilitySystem;
- (int)setAXTimeout:(double)arg1;	// IMP=0x001000000003c29a
@property _Bool accelerometerEnabled;
- (_Bool)disableSystemAccelerometer:(id *)arg1;	// IMP=0x001000000003c1f3
@property _Bool passiveListeningModeEnabled;
- (id)runAccessibilityAuditForApplication:(id)arg1 withConfiguration:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003c194
@property(readonly) long long systemUIOrientation;
- (void)performAccessibilityAction:(int)arg1 onElement:(id)arg2 withValue:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000003baeb
- (void)notifyOnNextOccurrenceOfUserTestingEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b8b5
- (void)handleUserTestingNotification:(id)arg1;	// IMP=0x001000000003b4ad
- (void)handleNotification:(int)arg1 fromElement:(id)arg2 payload:(id)arg3;	// IMP=0x001000000003afee
- (id)unregisterForAccessibilityNotification:(int)arg1 withRegistrationToken:(id)arg2;	// IMP=0x001000000003ac84
- (id)registerForAccessibilityNotification:(int)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a6be
- (id)elementAtPoint:(struct CGPoint)arg1 error:(id *)arg2;	// IMP=0x001000000003a520
- (id)parameterizedAttributeForElement:(id)arg1 attribute:(id)arg2 parameter:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000039d58
- (_Bool)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 error:(id *)arg4;	// IMP=0x001000000003995a
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000039899
- (id)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 timeoutControls:(id)arg4 error:(id *)arg5;	// IMP=0x001000000003972d
- (void)_performWithRetries:(long long)arg1 untilAXServerFound:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000395e9
- (struct __AXUIElement *)_synchronized_systemWideElement;	// IMP=0x001000000003951b
- (void)enableFauxCollectionViewCells;	// IMP=0x001000000003950c
- (void)setLocalizableStringsDataGatheringEnabled:(_Bool)arg1;	// IMP=0x0010000000039500
- (void)invalidate;	// IMP=0x0010000000039352
- (void)_dispatchSyncIfValidOrAssert:(CDUnknownBlockType)arg1;	// IMP=0x00100000000391a2
- (void)dealloc;	// IMP=0x00100000000390f0
- (_Bool)_finishConfiguringAccessibility:(id *)arg1;	// IMP=0x0010000000038d04
- (id)initWithAccessibilitySystem:(id)arg1 timeout:(double)arg2 error:(id *)arg3;	// IMP=0x0010000000038b26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

