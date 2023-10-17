//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSMapTable, NSMutableSet, NSString, _UIAssociationTable, _UILazyMapTable, _UIMotionEffectEvent, _UIMotionEffectEventProvider;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngine : NSObject
{
    _UIAssociationTable *_effectViewAssociationTable;	// 8 = 0x8
    _UILazyMapTable *_analyzerSettingsToAnalyzers;	// 16 = 0x10
    NSMapTable *_analyzersToEffects;	// 24 = 0x18
    NSMapTable *_suspendedViewsToEffectSets;	// 32 = 0x20
    _UIMotionEffectEventProvider *_eventProvider;	// 40 = 0x28
    _Bool _hasReceivedAtLeastOneEventSinceStarting;	// 48 = 0x30
    _UIMotionEffectEvent *_pendingEvent;	// 56 = 0x38
    struct os_unfair_lock_s _pendingEventLock;	// 64 = 0x40
    CADisplayLink *_displayLink;	// 72 = 0x48
    _Bool _generatingUpdates;	// 80 = 0x50
    NSMutableSet *_suspendReasons;	// 88 = 0x58
    _UIMotionEffectEvent *_lastEvent;	// 96 = 0x60
    _Bool _slowUpdatesEnabled;	// 104 = 0x68
    _Bool _pendingSlowDown;	// 105 = 0x69
    long long _eventProviderStatus;	// 112 = 0x70
    _Bool _allAnalyzersAreCentered;	// 120 = 0x78
    _Bool _hasAppliedAtLeastOneUpdateSinceStarting;	// 121 = 0x79
    _Bool _isPendingReset;	// 122 = 0x7a
    int _thermalNotificationToken;	// 124 = 0x7c
    int _screenDimmingNotificationToken;	// 128 = 0x80
    long long _targetInterfaceOrientation;	// 136 = 0x88
}

+ (Class)_analyzerClass;	// IMP=0x0010000000ba73ae
+ (Class)_eventProviderClass;	// IMP=0x0010000000ba739d
+ (_Bool)_motionEffectsSupported;	// IMP=0x0010000000ba7372
+ (_Bool)_motionEffectsEnabled;	// IMP=0x0010000000ba7131
- (void).cxx_destruct;	// IMP=0x0000000000ba9bba
@property(nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation; // @synthesize _targetInterfaceOrientation;
@property(readonly, copy) NSString *debugDescription;
- (void)_unapplyAllEffects;	// IMP=0x0000000000ba98d4
- (_Bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;	// IMP=0x0000000000ba9849
- (_Bool)_hasMotionEffectsForView:(id)arg1;	// IMP=0x0000000000ba97c3
- (id)_motionEffectsForView:(id)arg1;	// IMP=0x0000000000ba9709
- (void)_unregisterAllMotionEffectsForView:(id)arg1;	// IMP=0x0000000000ba9561
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;	// IMP=0x0000000000ba942b
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;	// IMP=0x0000000000ba9293
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;	// IMP=0x0000000000ba8f2d
@property(readonly, nonatomic) NSArray *suspensionReasons;
- (_Bool)_motionEffectsAreSuspendedForView:(id)arg1;	// IMP=0x0000000000ba8ee0
- (void)endSuspendingMotionEffectsForView:(id)arg1;	// IMP=0x0000000000ba8cfc
- (void)beginSuspendingMotionEffectsForView:(id)arg1;	// IMP=0x0000000000ba8a8e
- (_Bool)_isSuspended;	// IMP=0x0000000000ba8a71
- (void)_updateDisplayLinkInterval;	// IMP=0x0000000000ba8965
- (void)_stopGeneratingUpdates;	// IMP=0x0000000000ba891c
- (void)_startGeneratingUpdates;	// IMP=0x0000000000ba86fd
- (void)_startOrStopGeneratingUpdates;	// IMP=0x0000000000ba86af
- (_Bool)_shouldGenerateUpdates;	// IMP=0x0000000000ba865b
- (void)endSuspendingForReason:(id)arg1;	// IMP=0x0000000000ba8629
- (void)beginSuspendingForReason:(id)arg1;	// IMP=0x0000000000ba85f7
- (void)updateEventProviderStatus:(long long)arg1;	// IMP=0x0000000000ba85d9
- (void)updateWithEvent:(id)arg1;	// IMP=0x0000000000ba8501
- (void)resetMotionAnalysis;	// IMP=0x0000000000ba8371
- (void)_applyEffectsFromAnalyzer:(id)arg1;	// IMP=0x0000000000ba8152
- (void)_handleLatestDeviceMotion;	// IMP=0x0000000000ba7b9c
- (void)_toggleSlowUpdates;	// IMP=0x0000000000ba7b57
- (void)dealloc;	// IMP=0x0000000000ba7a9b
- (id)init;	// IMP=0x0000000000ba73bf

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
