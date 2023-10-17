//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject
{
    IMTimer *_getDependentHeartbeatTimer;	// 8 = 0x8
    NSMutableDictionary *_usersToHeartbeatDatesMap;	// 16 = 0x10
    _Bool _isSetup;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x002000000000b5b0
- (void).cxx_destruct;	// IMP=0x002000000000e7b0
- (void)systemDidWake;	// IMP=0x001000000000e780
- (void)_cleanupKeychain;	// IMP=0x001000000000e630
- (_Bool)_fetchExpiryDatesIfNecessary;	// IMP=0x001000000000df10
- (void)accountsChanged;	// IMP=0x001000000000d670
- (void)_updateExpiry:(double)arg1 forUser:(id)arg2;	// IMP=0x001000000000cff0
- (void)resetExpiryForUser:(id)arg1;	// IMP=0x001000000000cec0
- (void)_updateDependentRegistrations;	// IMP=0x001000000000cdc0
- (void)_heartbeatTimerFiredOnMain;	// IMP=0x001000000000ccf0
- (void)_scheduleRescueHeartBeat;	// IMP=0x001000000000ca90
- (void)_updateDependentRegistrationTimerFiredOnMain;	// IMP=0x001000000000c9c0
- (_Bool)_scheduleDependentRegistrations;	// IMP=0x001000000000c6a0
- (void)invalidateTimer;	// IMP=0x001000000000c660
- (void)printInfo;	// IMP=0x001000000000c040
- (void)dealloc;	// IMP=0x001000000000bfb0
- (id)_getNextExpirationDate;	// IMP=0x001000000000b920
- (void)_heartBeat;	// IMP=0x001000000000b7f0
- (void)setup;	// IMP=0x001000000000b770
- (id)init;	// IMP=0x001000000000b670

@end
