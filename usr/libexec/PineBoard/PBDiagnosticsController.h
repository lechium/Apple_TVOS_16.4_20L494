//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBDiagnosticsUIController;

@interface PBDiagnosticsController : NSObject
{
    int _screenshotCapturedNotificationToken;	// 8 = 0x8
    PBDiagnosticsUIController *_uiController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006c522
@property(readonly, nonatomic) int screenshotCapturedNotificationToken; // @synthesize screenshotCapturedNotificationToken=_screenshotCapturedNotificationToken;
@property(readonly, nonatomic) PBDiagnosticsUIController *uiController; // @synthesize uiController=_uiController;
- (void)_handleBlackScreenRecoveryEvent:(id)arg1;	// IMP=0x001000000006c3f6
- (void)_handleScreenshotEvent:(id)arg1;	// IMP=0x001000000006c31e
- (void)_handleSysdiagnoseEvent:(id)arg1;	// IMP=0x001000000006c223
- (void)_setupSystemKeychordGesturesUsingSystemGestureManager:(id)arg1;	// IMP=0x001000000006c177
- (void)_showScreenshotCapturedIndication;	// IMP=0x001000000006c160
- (void)showStackShotIndication;	// IMP=0x001000000006c149
- (void)hideSysdiagnoseRunningIndication;	// IMP=0x001000000006c132
- (_Bool)showSysdiagnoseRunningIndication;	// IMP=0x001000000006c0fb
- (void)invalidate;	// IMP=0x001000000006c0b4
- (void)dealloc;	// IMP=0x001000000006bf1e
- (id)initWithUIController:(id)arg1 systemGestureManager:(id)arg2 screenshotNotificationName:(const char *)arg3;	// IMP=0x001000000006bab2
- (id)init;	// IMP=0x001000000006ba33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

