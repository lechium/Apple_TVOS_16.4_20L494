//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXElement, AXUpdateElementVisualsCoalescer, NSMutableArray, NSString;
@protocol OS_dispatch_queue, XADInspectorManagerDelegate;

@interface XADInspectorManager : NSObject
{
    _Bool _showVisuals;	// 8 = 0x8
    id <XADInspectorManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    unsigned long long _monitoredEventType;	// 32 = 0x20
    struct __AXObserver *__axEventObserver;	// 40 = 0x28
    NSMutableArray *__focusedElementHistory;	// 48 = 0x30
    AXElement *;	// 56 = 0x38
    AXUpdateElementVisualsCoalescer *__elementVisualsCoalescer;	// 64 = 0x40
    struct CGPoint __lastPoint;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x002000000000291c
- (void).cxx_destruct;	// IMP=0x0020000000007061
@property(retain, nonatomic) AXUpdateElementVisualsCoalescer *_elementVisualsCoalescer; // @synthesize _elementVisualsCoalescer=__elementVisualsCoalescer;
@property(nonatomic) struct CGPoint _lastPoint; // @synthesize _lastPoint=__lastPoint;
@property(retain, nonatomic, setter=_setCurrentElement:) AXElement *_currentElement; // @synthesize _currentElement=__currentElement;
@property(retain, nonatomic) NSMutableArray *_focusedElementHistory; // @synthesize _focusedElementHistory=__focusedElementHistory;
@property(nonatomic) struct __AXObserver *_axEventObserver; // @synthesize _axEventObserver=__axEventObserver;
@property(nonatomic) _Bool showVisuals; // @synthesize showVisuals=_showVisuals;
@property(nonatomic) unsigned long long monitoredEventType; // @synthesize monitoredEventType=_monitoredEventType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <XADInspectorManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateAttributesIfElementIsValid;	// IMP=0x0010000000006ee7
- (_Bool)_initializeAXObserverIfNeeded;	// IMP=0x0010000000006d40
- (void)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x0010000000006b42
- (id)_accessibilityNotificationsToObserve;	// IMP=0x0010000000006b35
- (void)deviceDidGetTargeted;	// IMP=0x0010000000006ad4
- (void)moveInDirection:(unsigned long long)arg1 allowMovingToContainers:(_Bool)arg2 allowMoveToNonAXElements:(_Bool)arg3;	// IMP=0x00100000000069a8
- (id)_nextElementNavigationInDirection:(long long)arg1 forElement:(id)arg2;	// IMP=0x001000000000672d
- (id)lastElementInHierarchy:(id)arg1;	// IMP=0x00100000000063f4
- (id)firstElementInHierarchy:(id)arg1;	// IMP=0x001000000000634f
- (id)fetchElementAtNormalizedDeviceCoordinate:(struct CGPoint)arg1;	// IMP=0x0010000000006268
- (id)fetchSpecialElement:(long long)arg1;	// IMP=0x00100000000061a2
- (void)element:(id)arg1 valueForParameterizedAttribute:(id)arg2 withObject:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006192
- (void)element:(id)arg1 valueForAttribute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000059e8
- (void)element:(id)arg1 performAction:(id)arg2 withValue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004d2f
- (_Bool)allowDeveloperActionsOnElement:(id)arg1;	// IMP=0x0010000000004cef
- (void)previewOnElement:(id)arg1;	// IMP=0x0010000000004c39
- (void)focusOnElement:(id)arg1;	// IMP=0x0010000000004bca
- (void)focusOnElementAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000004a93
- (void)focusOnAXElement:(id)arg1;	// IMP=0x0010000000004a10
- (void)focusOnAXElement:(id)arg1 scrollToVisible:(_Bool)arg2;	// IMP=0x001000000000498c
- (id)_elementDataFromSimulatorToken:(id)arg1;	// IMP=0x0010000000004922
- (_Bool)_elementTokenIsSumulatorToken:(id)arg1;	// IMP=0x00100000000048cd
- (void)_addElementToHistory:(id)arg1;	// IMP=0x00100000000045dd
- (void)_updateElementHighlight;	// IMP=0x0010000000004555
- (void)_initializeElementVisualsCoalescer;	// IMP=0x0010000000004268
- (void)_informDelegateOfInspectorFocus;	// IMP=0x00100000000041f7
- (id)_generateSpokenDescriptionForElement:(id)arg1;	// IMP=0x0010000000003e22
- (id)_auditInspectorFocuseObject;	// IMP=0x0010000000003d19
- (id)_AXAuditElementFromAXElement:(id)arg1;	// IMP=0x0010000000003c6f
- (id)_inspectorSections;	// IMP=0x0010000000003b66
- (id)_actionSection;	// IMP=0x0010000000003597
- (id)_humanReadableStringForAction:(int)arg1;	// IMP=0x0010000000003569
- (id)_hierarchySection;	// IMP=0x0010000000003467
- (id)_basicSection;	// IMP=0x00100000000031cd
- (id)_elementSection;	// IMP=0x0010000000002f81
- (id)_internalAttributes;	// IMP=0x0010000000002f31
- (id)addAttribute:(id)arg1 toSection:(id)arg2 withPrefix:(id)arg3 performsAction:(_Bool)arg4 settable:(_Bool)arg5 humanReadable:(id)arg6 valueType:(long long)arg7 overrideIsInternalWithValue:(id)arg8;	// IMP=0x0010000000002da7
- (id)_developerOnlyAttributes;	// IMP=0x0010000000002d9a
- (void)hideVisualsSynchronously;	// IMP=0x0010000000002be7
- (void)lockOnCurrentElement;	// IMP=0x0010000000002a09
- (id)init;	// IMP=0x00100000000029a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

