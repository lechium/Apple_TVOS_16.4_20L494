//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKOrientationManager, BSCompoundAssertion, BSMutableIntegerMap, BrightnessSystem, NSDictionary, NSString;
@protocol BSInvalidatable;

@interface BKDisplayBrightnessController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    float _brightnessLevel;	// 12 = 0xc
    int _brightnessLevelCurve;	// 16 = 0x10
    unsigned long long _previousDarwinNotificationBrightnessLevel;	// 24 = 0x18
    unsigned long long _previousBrightnessLevelOptions;	// 32 = 0x20
    NSString *_previousBrightnessLevelKey;	// 40 = 0x28
    NSDictionary *_previousBrightnessLevelValue;	// 48 = 0x30
    id <BSInvalidatable> _systemShellObserving;	// 56 = 0x38
    BKOrientationManager *_orientationManager;	// 64 = 0x40
    _Bool _didSetBrightnessCurve;	// 72 = 0x48
    int _notificationToken;	// 76 = 0x4c
    BSMutableIntegerMap *_backlightClientPerPID;	// 80 = 0x50
    BrightnessSystem *_brightnessSystem;	// 88 = 0x58
    BSCompoundAssertion *_suppressClientNotificationsAssertion;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x0020000000068b75
- (void).cxx_destruct;	// IMP=0x0020000000068231
- (void)orientationManager:(id)arg1 userInterfaceOrientationMayHaveChanged:(long long)arg2 isDeviceOrientationLocked:(_Bool)arg3;	// IMP=0x00100000000681c4
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x00100000000681a9
- (void)clientDied:(id)arg1;	// IMP=0x0010000000068119
- (void)setBacklightFeatures:(id)arg1 forPID:(int)arg2;	// IMP=0x0010000000067fde
- (void)setBacklightLocked:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0010000000067e18
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000067da0
- (id)propertyForKey:(id)arg1;	// IMP=0x0010000000067d39
@property(nonatomic) int displayBrightnessCurve;
- (void)setAutoBrightnessEnabled:(_Bool)arg1;	// IMP=0x0010000000067c86
@property(readonly, nonatomic, getter=isALSSupported) _Bool ALSSupported;
@property(readonly, nonatomic, getter=isBrightnessLevelControlAvailable) _Bool brightnessLevelControlAvailable;
@property(readonly, nonatomic, getter=isAutoBrightnessAvailable) _Bool autoBrightnessAvailable;
- (void)setBrightnessLevel:(float)arg1 reason:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0010000000067711
@property(readonly, nonatomic) float brightnessLevel;
@property(readonly, nonatomic) float unentitledBrightnessLevel;
- (void)setMinimumBrightnessLevel:(float)arg1 fadeDuration:(float)arg2;	// IMP=0x0010000000067525
- (unsigned char)backlightArchitectureVersion;	// IMP=0x00100000000674a5
- (id)suppressBrightnessNotificationsForReason:(id)arg1;	// IMP=0x0010000000067436
- (void)dealloc;	// IMP=0x00100000000673bb
- (id)_initWithBrightnessSystem:(id)arg1 systemShellSentinel:(id)arg2 orientationManager:(id)arg3;	// IMP=0x00100000000671ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

