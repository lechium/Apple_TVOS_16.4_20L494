//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSTimer, XCElementSnapshot, XCUIRecorderAction;
@protocol XCAXManager, XCTMessagingChannel_DaemonRecorderToIDE;

@interface XCUIRecorderService_iOS : NSObject
{
    _Bool _recordingEnabled;	// 8 = 0x8
    _Bool;	// 9 = 0x9
    int _processPID;	// 12 = 0xc
    id <XCTMessagingChannel_DaemonRecorderToIDE> _client;	// 16 = 0x10
    id <XCAXManager> _axManager;	// 24 = 0x18
    struct __AXUIElement *_systemWideElement;	// 32 = 0x20
    XCUIRecorderAction *_currentAction;	// 40 = 0x28
    XCElementSnapshot *_snapshotForCurrentEventSequence;	// 48 = 0x30
    NSTimer *_reportRetryTimer;	// 56 = 0x38
    NSNumber *_hidEventNotificationToken;	// 64 = 0x40
    NSNumber *_firstResponderChangedNotificationToken;	// 72 = 0x48
    NSNumber *_nativeFocusChangedNotificationToken;	// 80 = 0x50
    NSArray *_applicationSnapshotAttributes;	// 88 = 0x58
    NSDictionary *_applicationSnapshotParameters;	// 96 = 0x60
    NSArray *_elementSnapshotAttributes;	// 104 = 0x68
    NSDictionary *_elementSnapshotParameters;	// 112 = 0x70
    NSArray *_simpleTargetGestureNames;	// 120 = 0x78
    NSDictionary *_touchBeganLocation;	// 128 = 0x80
    long long _eventCount;	// 136 = 0x88
    long long _keyEventCounter;	// 144 = 0x90
    long long _keyEventCountForLastFirstResponderChanged;	// 152 = 0x98
}

+ (void)provideCapabilitiesToBuilder:(id)arg1;	// IMP=0x002000000002587e
- (void).cxx_destruct;	// IMP=0x0020000000025b11
@property long long keyEventCountForLastFirstResponderChanged; // @synthesize keyEventCountForLastFirstResponderChanged=_keyEventCountForLastFirstResponderChanged;
@property long long keyEventCounter; // @synthesize keyEventCounter=_keyEventCounter;
@property long long eventCount; // @synthesize eventCount=_eventCount;
@property _Bool enabledAccelerometer; // @synthesize enabledAccelerometer=_enabledAccelerometer;
@property(retain) NSDictionary *touchBeganLocation; // @synthesize touchBeganLocation=_touchBeganLocation;
@property(retain) NSArray *simpleTargetGestureNames; // @synthesize simpleTargetGestureNames=_simpleTargetGestureNames;
@property(retain) NSDictionary *elementSnapshotParameters; // @synthesize elementSnapshotParameters=_elementSnapshotParameters;
@property(retain) NSArray *elementSnapshotAttributes; // @synthesize elementSnapshotAttributes=_elementSnapshotAttributes;
@property(retain) NSDictionary *applicationSnapshotParameters; // @synthesize applicationSnapshotParameters=_applicationSnapshotParameters;
@property(retain) NSArray *applicationSnapshotAttributes; // @synthesize applicationSnapshotAttributes=_applicationSnapshotAttributes;
@property int processPID; // @synthesize processPID=_processPID;
@property(retain) NSNumber *nativeFocusChangedNotificationToken; // @synthesize nativeFocusChangedNotificationToken=_nativeFocusChangedNotificationToken;
@property(retain) NSNumber *firstResponderChangedNotificationToken; // @synthesize firstResponderChangedNotificationToken=_firstResponderChangedNotificationToken;
@property(retain) NSNumber *hidEventNotificationToken; // @synthesize hidEventNotificationToken=_hidEventNotificationToken;
@property(retain) NSTimer *reportRetryTimer; // @synthesize reportRetryTimer=_reportRetryTimer;
@property _Bool recordingEnabled; // @synthesize recordingEnabled=_recordingEnabled;
@property(retain) XCElementSnapshot *snapshotForCurrentEventSequence; // @synthesize snapshotForCurrentEventSequence=_snapshotForCurrentEventSequence;
@property(retain) XCUIRecorderAction *currentAction; // @synthesize currentAction=_currentAction;
@property struct __AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property(readonly) id <XCAXManager> axManager; // @synthesize axManager=_axManager;
@property(retain) id <XCTMessagingChannel_DaemonRecorderToIDE> client; // @synthesize client=_client;
- (id)_snapshotForTargetApplicationWithError:(id *)arg1;	// IMP=0x001000000002573f
- (id)_snapshotForApplicationContainingElement:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000254f0
- (void)_processKeyboardEvent:(id)arg1;	// IMP=0x0010000000025441
- (void)_processDeviceOrientationEvent:(id)arg1;	// IMP=0x0010000000025329
- (void)_recognizedGestures:(id)arg1;	// IMP=0x0010000000024ca6
- (void)_recognizedEventTypeName:(id)arg1 atAbsoluteTime:(double)arg2 withStartSnapshot:(id)arg3 endSnapshot:(id)arg4;	// IMP=0x0010000000024a6b
- (id)_recordedEventNames:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 startLocation:(id)arg4 startElementSnapshot:(id)arg5 startApplicationSnapshot:(id)arg6 endLocation:(id)arg7 endElementSnapshot:(id)arg8 endApplicationSnapshot:(id)arg9;	// IMP=0x00100000000248cb
- (void)_reportDeferredActionForEventCount:(id)arg1;	// IMP=0x0010000000024809
- (_Bool)_reportCurrentActionWaitForTimeInterval:(double *)arg1;	// IMP=0x001000000002461c
- (void)_processHandEvent:(id)arg1;	// IMP=0x0010000000024009
- (void)_processButtonUpEventType:(unsigned int)arg1 withHIDTime:(long long)arg2;	// IMP=0x0010000000023e88
- (void)_processButtonDownEventType:(unsigned int)arg1 withHIDTime:(long long)arg2;	// IMP=0x0010000000023b84
- (void)_processButtonUpEvent:(id)arg1;	// IMP=0x0010000000023b0a
- (void)_processButtonDownEvent:(id)arg1;	// IMP=0x0010000000023a90
- (void)_releasePendingEvents:(double)arg1;	// IMP=0x001000000002390f
- (id)stringForHandEventType:(unsigned int)arg1;	// IMP=0x001000000002371c
- (id)_elementSnapshotForLocation:(struct CGPoint)arg1 rootElementSnapshot:(id *)arg2;	// IMP=0x001000000002331f
- (void)_handleHIDEventReceived:(id)arg1;	// IMP=0x0010000000022d28
- (void)stopRecording;	// IMP=0x0010000000022945
- (void)_registerForKeyEventNotification;	// IMP=0x00100000000224a9
- (id)_nativeFocusItemDidChangeAtTime:(double)arg1 parameterSnapshot:(id)arg2 applicationSnapshot:(id)arg3;	// IMP=0x00100000000223df
- (void)_registerForNativeFocusDidChangeNotification;	// IMP=0x0010000000022022
- (void)startRecordingProcessPID:(int)arg1 applicationSnapshotAttributes:(id)arg2 applicationSnapshotParameters:(id)arg3 elementSnapshotAttributes:(id)arg4 elementSnapshotParameters:(id)arg5 simpleTargetGestureNames:(id)arg6;	// IMP=0x0010000000021379
- (void)dealloc;	// IMP=0x00100000000212b1
- (id)initWithAXManager:(id)arg1;	// IMP=0x0010000000021253
- (id)initWithError:(id *)arg1;	// IMP=0x0010000000021197

@end
