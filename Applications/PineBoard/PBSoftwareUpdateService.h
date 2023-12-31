//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, PBSystemOverlayController, PCSimpleTimer, TVSBackgroundTask, TVSUIOSUpdateViewController;

@interface PBSoftwareUpdateService : NSObject
{
    _Bool _monitoringEnabled;	// 8 = 0x8
    _Bool _precheckingOSUpdateConditions;	// 9 = 0x9
    TVSBackgroundTask *_osSoftwareUpdateInitialCheckTask;	// 16 = 0x10
    TVSBackgroundTask *_osSoftwareUpdatePeriodicCheckTask;	// 24 = 0x18
    PCSimpleTimer *_darkWakeTimer;	// 32 = 0x20
    PCSimpleTimer *_updateDelayExpirationTimer;	// 40 = 0x28
    NSTimer *_vendorBagRefetchTimeoutTimer;	// 48 = 0x30
    PCSimpleTimer *_dailyReportingTimer;	// 56 = 0x38
    CDUnknownBlockType _osSoftwareUpdateCheckResponse;	// 64 = 0x40
    PBSystemOverlayController *_overlayController;	// 72 = 0x48
    TVSUIOSUpdateViewController *_updateViewController;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x002000000017e178
+ (id)dependencyDescription;	// IMP=0x001000000017e004
- (void).cxx_destruct;	// IMP=0x002000000018b050
@property(readonly, nonatomic) TVSUIOSUpdateViewController *updateViewController; // @synthesize updateViewController=_updateViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(copy, nonatomic) CDUnknownBlockType osSoftwareUpdateCheckResponse; // @synthesize osSoftwareUpdateCheckResponse=_osSoftwareUpdateCheckResponse;
@property(retain, nonatomic) PCSimpleTimer *dailyReportingTimer; // @synthesize dailyReportingTimer=_dailyReportingTimer;
@property(nonatomic) __weak NSTimer *vendorBagRefetchTimeoutTimer; // @synthesize vendorBagRefetchTimeoutTimer=_vendorBagRefetchTimeoutTimer;
@property(retain, nonatomic) PCSimpleTimer *updateDelayExpirationTimer; // @synthesize updateDelayExpirationTimer=_updateDelayExpirationTimer;
@property(retain, nonatomic) PCSimpleTimer *darkWakeTimer; // @synthesize darkWakeTimer=_darkWakeTimer;
@property(retain, nonatomic) TVSBackgroundTask *osSoftwareUpdatePeriodicCheckTask; // @synthesize osSoftwareUpdatePeriodicCheckTask=_osSoftwareUpdatePeriodicCheckTask;
@property(retain, nonatomic) TVSBackgroundTask *osSoftwareUpdateInitialCheckTask; // @synthesize osSoftwareUpdateInitialCheckTask=_osSoftwareUpdateInitialCheckTask;
@property(nonatomic) _Bool precheckingOSUpdateConditions; // @synthesize precheckingOSUpdateConditions=_precheckingOSUpdateConditions;
@property(nonatomic) _Bool monitoringEnabled; // @synthesize monitoringEnabled=_monitoringEnabled;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)osUpdateProcessDidFinishApplyWithData:(id)arg1;	// IMP=0x001000000018a93f
- (void)osUpdateProcessDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x001000000018a679
- (void)osUpdateProcessDidStartApplyWithData:(id)arg1;	// IMP=0x001000000018a34a
- (void)osUpdateProcessDidStartRedownloadWithData:(id)arg1;	// IMP=0x001000000018a147
- (void)osUpdateProcessDidFinishDownloadWithData:(id)arg1;	// IMP=0x0010000000189d58
- (void)osUpdateProcessDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x0010000000189bbf
- (void)osUpdateProcessDidStartDownloadWithData:(id)arg1;	// IMP=0x00100000001899bc
- (void)osUpdateProcessDidFinishCheckWithData:(id)arg1;	// IMP=0x00100000001892c0
- (void)osUpdateProcessDidStartCheckWithData:(id)arg1;	// IMP=0x0010000000189127
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000188fd5
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000188f8f
- (_Bool)powerManagerAllowSystemToSleep:(id)arg1;	// IMP=0x0010000000188f7a
- (void)_dismiss;	// IMP=0x0010000000188e05
- (void)_presentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000188c6f
- (void)_showOSUpdateUpToDateDialog:(_Bool)arg1;	// IMP=0x0010000000188a97
- (void)_showOSUpdateError:(id)arg1 inDomain:(id)arg2 description:(id)arg3;	// IMP=0x0010000000188412
- (void)_promptForApplyConfirmationWithData:(id)arg1 thenDo:(CDUnknownBlockType)arg2;	// IMP=0x0010000000187e05
- (void)_showApplyConfirmationDialogIfNeededWithData:(id)arg1;	// IMP=0x0010000000187168
- (void)_showOSUpdateDownloadAndApplyConfirmationForUpdate:(id)arg1 largeUpdate:(_Bool)arg2 assetIsDownloaded:(_Bool)arg3;	// IMP=0x0010000000186cc7
- (id)_versionForUpdate:(id)arg1;	// IMP=0x0010000000186b98
- (void)_handleManagedConfigurationSettingsChangedNotification:(id)arg1;	// IMP=0x0010000000186b85
- (void)_handleOSUpdatePrefsDidChange;	// IMP=0x00100000001868c3
- (void)_handlePineBoardPrefsDidChange;	// IMP=0x0010000000186553
- (void)_precheckConditionsAndPerformAction:(unsigned long long)arg1;	// IMP=0x0010000000185f7a
- (void)_startOSUpdateCheckForAction:(unsigned long long)arg1;	// IMP=0x0010000000185b5f
- (_Bool)_serverAllowsAutoApplyUpdates;	// IMP=0x001000000018507f
- (void)_postVendorBagReloadContinueAutoApply;	// IMP=0x0010000000184527
- (void)_reloadVendorBag;	// IMP=0x0010000000184318
- (void)_dailyOSUpdateReportingTimerFired:(id)arg1;	// IMP=0x0010000000183f90
- (void)_scheduleDailyOSUpdateReporting;	// IMP=0x001000000018381a
- (void)_osUpdateDelayedUpdateExpirationTimerFired:(id)arg1;	// IMP=0x00100000001835bc
- (void)_scheduleOSUpdateCheckForExpiredDelay;	// IMP=0x0010000000183095
- (void)_osUpdateDarkWakeTimerFired:(id)arg1;	// IMP=0x0010000000182ad1
- (void)_scheduleOSUpdateDarkWakeAt:(id)arg1;	// IMP=0x0010000000182777
- (void)_cancelOSUpdateDarkWakeTimer;	// IMP=0x0010000000182702
- (void)_scheduleOSUpdateTimerForNextDarkWake;	// IMP=0x001000000018237b
- (void)_scheduleOSUpdateOnSleepCheck;	// IMP=0x0010000000181d90
- (void)_scheduleOSUpdateCheck;	// IMP=0x0010000000181230
- (_Bool)_okToCheckForOSSoftwareUpdate;	// IMP=0x0010000000181228
- (void)purgeAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001811b3
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018113e
- (void)notePlaybackStateChanged;	// IMP=0x0010000000180b29
- (void)cancelOSSoftwareUpdate;	// IMP=0x0010000000180adf
- (void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x001000000018072c
- (void)reallyPerformOSSoftwareRestore;	// IMP=0x00100000001805a5
- (void)purgeDownload:(CDUnknownBlockType)arg1;	// IMP=0x0010000000180202
- (void)cancelDownload:(CDUnknownBlockType)arg1;	// IMP=0x001000000017ffb7
- (void)startDownload:(CDUnknownBlockType)arg1;	// IMP=0x001000000017fb77
- (void)reallyPerformMDMOSSoftwareUpdateCheck;	// IMP=0x001000000017fad5
- (void)reallyPerformOSSoftwareUpdateCheck;	// IMP=0x001000000017fa33
- (void)checkForOSUpdatesWithOptions:(id)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x001000000017f7b7
- (void)isUpdate:(id)arg1 readyForInstallation:(CDUnknownBlockType)arg2;	// IMP=0x001000000017f05d
- (void)isOSSoftwareUpdateRunning:(CDUnknownBlockType)arg1;	// IMP=0x001000000017efda
- (void)setAssetDownloadIsDiscretionary:(_Bool)arg1;	// IMP=0x001000000017ef86
- (void)currentDownload:(CDUnknownBlockType)arg1;	// IMP=0x001000000017ebdb
- (void)isOSSoftwareUpdateDownloading:(CDUnknownBlockType)arg1;	// IMP=0x001000000017eb58
- (void)isOSSoftwareUpdateChecking:(CDUnknownBlockType)arg1;	// IMP=0x001000000017ead5
- (void)startSoftwareUpdateMonitoring;	// IMP=0x001000000017e63d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000017e5f3
- (id)init;	// IMP=0x001000000017e1cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

