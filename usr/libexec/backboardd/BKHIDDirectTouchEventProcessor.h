//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDigitizerEventSchedulerBase, BKDisplayController, BKIOHIDService, BKIOHIDServicePersistentPropertyController, BKTouchEventServer, BSContinuousMachTimer, BSProcessDeathWatcher, NSArray, NSMutableDictionary, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKHIDDirectTouchEventProcessor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BKTouchEventServer *_touchEventServer;	// 16 = 0x10
    BKDigitizerEventSchedulerBase *_scheduler;	// 24 = 0x18
    BKIOHIDServicePersistentPropertyController *_persistentPropertyController;	// 32 = 0x20
    NSArray *_matchers;	// 40 = 0x28
    BKIOHIDService *_queue_mainDisplayDigitizerService;	// 48 = 0x30
    BKIOHIDService *_queue_mainDisplayAOPDigitizerService;	// 56 = 0x38
    BKIOHIDService *_queue_mainDisplayPencilDigitizerService;	// 64 = 0x40
    double _queue_startMainDisplayDigitizerMatchingTime;	// 72 = 0x48
    BSContinuousMachTimer *_queue_mainDisplayDigitizerSentinelTimer;	// 80 = 0x50
    long long _queue_interfaceOrientation;	// 88 = 0x58
    long long _queue_activeModifiers;	// 96 = 0x60
    id <BSInvalidatable> _globalKeyboardObserver;	// 104 = 0x68
    NSMutableDictionary *_queue_perDisplayInfo;	// 112 = 0x70
    NSMutableDictionary *_queue_referenceToTouchStreamClient;	// 120 = 0x78
    unsigned int _queue_previousVendedTouchStreamReference;	// 128 = 0x80
    NSMutableDictionary *_queue_slotIDToSlotRecord;	// 136 = 0x88
    BSProcessDeathWatcher *_queue_zoomDeathWatcher;	// 144 = 0x90
    NSArray *_queue_zoomExcludedContextIDs;	// 152 = 0x98
    long long _queue_zoomExcludedContextsSeed;	// 160 = 0xa0
    struct os_unfair_lock_s _lock;	// 168 = 0xa8
    _Bool _lock_shouldIgnoreTouchesWhileObjectInProximity;	// 172 = 0xac
    BKDisplayController *_defaultDisplayController;	// 176 = 0xb0
}

+ (id)digitizerMatchingDictionaries;	// IMP=0x002000000003b071
- (void).cxx_destruct;	// IMP=0x0020000000035343
- (id)_queue_servicesMatchingSenderDescriptor:(id)arg1;	// IMP=0x0010000000034fb6
- (void)_queue_addServicesMatchingSenderDescriptor:(id)arg1 inPerDisplayInfo:(id)arg2 toArray:(id)arg3;	// IMP=0x0010000000034da5
- (id)_determineServiceForEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 fromTouchPad:(_Bool *)arg3;	// IMP=0x0010000000034a9c
- (void)_handleDirectTouchEvent:(struct __IOHIDEvent *)arg1 service:(id)arg2;	// IMP=0x0010000000034977
- (id)_queue_contextIDsToIgnoreForZoomSenders;	// IMP=0x0010000000034953
- (id)_queue_slotRecordForSlotID:(unsigned int)arg1;	// IMP=0x00100000000348bb
- (id)_queue_applyCachedPropertiesToMultitouchService:(id)arg1;	// IMP=0x00100000000345f3
- (id)_queue_touchStreamClientForReference:(unsigned int)arg1;	// IMP=0x0010000000034567
- (unsigned int)_queue_addTouchStreamClient:(id)arg1 toDisplayUUID:(id)arg2 versionedPID:(long long)arg3;	// IMP=0x0010000000034196
- (id)_queue_touchStreamInfoForDisplayUUID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x001000000003405a
- (id)_queue_digitizerStateForService:(id)arg1;	// IMP=0x0010000000033f3a
- (id)_queue_addDigitizerStateForService:(id)arg1;	// IMP=0x001000000003372d
- (id)_queue_displayInfoForDisplay:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0010000000033572
- (void)globalKeyboardModifiersDidChange:(long long)arg1;	// IMP=0x0010000000033523
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x00100000000330dc
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x0010000000032a28
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0010000000032746
- (long long)setPersistentProperties:(id)arg1 forServicesMatchingDescriptor:(id)arg2;	// IMP=0x001000000003227e
- (id)_persistentPropertyKeyDenylist;	// IMP=0x001000000003224e
- (_Bool)_allowsPersistentPropertiesForSenderDescriptor:(id)arg1;	// IMP=0x0010000000031fd0
- (void)_queue_enumerateTouchStreamsForAllDisplaysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031f63
- (void)_queue_enumerateDigitizersForAllDisplaysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031ef6
- (void)_queue_enumerateDigitizersForDisplay:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031d08
- (void)_queue_windowServerDidDeleteSlotID:(unsigned int)arg1;	// IMP=0x0010000000031bef
- (id)authenticationMessageForTouchAtScreenPoint:(struct CGPoint)arg1 displayUUID:(id)arg2 eventType:(unsigned int)arg3 secureName:(unsigned int)arg4 excludeContextIDs:(id)arg5;	// IMP=0x0010000000031ad9
- (void)addTouchAuthenticationSpecifications:(id)arg1 registrantEntitled:(_Bool)arg2;	// IMP=0x0010000000031a87
- (id)authenticationSpecificationForSlotID:(unsigned int)arg1 registrantEntitled:(out _Bool *)arg2;	// IMP=0x00100000000319b7
- (void)setBuiltInDisplayInterfaceOrientation:(long long)arg1;	// IMP=0x0010000000031835
- (void)setExcludedZoomContextIDs:(id)arg1 fromVersionedPID:(long long)arg2;	// IMP=0x00100000000317e2
@property(nonatomic) _Bool shouldIgnoreTouchesWhileObjectInProximity;
- (void)postTouchAnnotations:(id)arg1 sourcePID:(int)arg2;	// IMP=0x001000000003172a
- (void)setOffset:(struct CGPoint)arg1 forTouchesWithUserIdentifier:(unsigned int)arg2;	// IMP=0x0010000000031673
- (void)setRoutingPolicy:(id)arg1 forTouchesWithUserIdentifier:(unsigned int)arg2;	// IMP=0x00100000000315c2
- (_Bool)detachTouchIdentifiers:(unsigned int *)arg1 count:(long long)arg2 assignUserIdentifier:(unsigned int)arg3 policy:(id)arg4 offset:(struct CGPoint)arg5;	// IMP=0x0010000000031511
- (void)transferTouchIdentifiers:(unsigned int *)arg1 count:(long long)arg2 toContextID:(unsigned int)arg3;	// IMP=0x00100000000314ba
- (void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3 forTouchStreamIdentifier:(unsigned int)arg4;	// IMP=0x0010000000031404
- (void)invalidateTouchStreamReference:(unsigned int)arg1;	// IMP=0x00100000000313b6
- (unsigned int)addTouchStreamForContextID:(unsigned int)arg1 display:(id)arg2 versionedPID:(long long)arg3 identifier:(unsigned int)arg4 shouldSendAmbiguityRecommendations:(_Bool)arg5;	// IMP=0x001000000003130e
- (void)setHitTestRegions:(id)arg1 forDisplay:(id)arg2;	// IMP=0x00100000000312bb
- (id)cancelAndSuppressTouchesOnDisplay:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000310f6
- (void)cancelTouchesOnAllDisplays;	// IMP=0x0010000000031005
- (void)cancelTouchesOnMainDisplay;	// IMP=0x0010000000030ff1
- (void)cancelTouchesOnDisplay:(id)arg1;	// IMP=0x0010000000030e59
- (void)cancelTouchesWithIdentifiers:(id)arg1;	// IMP=0x0010000000030d10
@property(readonly, retain) BKIOHIDService *mainDisplayPencilDigitizerService;
@property(readonly, retain) BKIOHIDService *mainDisplayAOPDigitizerService;
@property(readonly, retain) BKIOHIDService *mainDisplayDigitizerService;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000030a56
- (void)didInitializeRegistryWithContext:(id)arg1;	// IMP=0x00100000000309a1
- (void)dealloc;	// IMP=0x0010000000030972
- (id)initWithContext:(id)arg1;	// IMP=0x001000000002ffec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
