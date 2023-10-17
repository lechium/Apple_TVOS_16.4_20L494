//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBBulletinService, PBSBulletin;

@interface PBDiagnosticsUIController : NSObject
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    PBSBulletin *_sysdiagnoseReleaseKeychordBulletin;	// 16 = 0x10
    PBSBulletin *_sysdiagnoseRunningBulletin;	// 24 = 0x18
    PBSBulletin *_screenshotCapturedBulletin;	// 32 = 0x20
}

+ (id)_newStackshotBulletin;	// IMP=0x002000000012507c
+ (id)_newScreenshotCapturedBulletin;	// IMP=0x0010000000124f24
+ (id)_newSysdiagnoseRunningBulletin;	// IMP=0x0010000000124dea
+ (id)_newSysdiagnoseReleaseKeychordBulletin;	// IMP=0x0010000000124c7a
- (void).cxx_destruct;	// IMP=0x00200000001251de
@property(readonly, nonatomic) PBSBulletin *screenshotCapturedBulletin; // @synthesize screenshotCapturedBulletin=_screenshotCapturedBulletin;
@property(readonly, nonatomic) PBSBulletin *sysdiagnoseRunningBulletin; // @synthesize sysdiagnoseRunningBulletin=_sysdiagnoseRunningBulletin;
@property(readonly, nonatomic) PBSBulletin *sysdiagnoseReleaseKeychordBulletin; // @synthesize sysdiagnoseReleaseKeychordBulletin=_sysdiagnoseReleaseKeychordBulletin;
@property(readonly, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
- (void)_didDismissBulletin:(id)arg1;	// IMP=0x0010000000124c11
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0010000000124b56
- (void)showScreenshotCapturedIndication;	// IMP=0x00100000001248f6
- (void)showStackShotIndication;	// IMP=0x00100000001248a6
- (void)hideSysdiagnoseRunningIndication;	// IMP=0x001000000012483b
- (void)showSysdiagnoseRunningIndication;	// IMP=0x0010000000124751
- (void)hideSysdiagnoseReleaseKeychordIndication;	// IMP=0x0010000000124715
- (void)showSysdiagnoseReleaseKeychordIndication;	// IMP=0x001000000012465e
- (void);	// IMP=0x001000000012462b
- (void)dealloc;	// IMP=0x0010000000124495
- (id)initWithBulletinService:(id)arg1;	// IMP=0x00100000001242e8
- (id)init;	// IMP=0x001000000012428c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

