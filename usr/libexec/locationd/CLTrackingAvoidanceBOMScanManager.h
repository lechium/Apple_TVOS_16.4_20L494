//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLAvengerScannerClient;
@protocol OS_dispatch_queue;

@interface CLTrackingAvoidanceBOMScanManager : NSObject
{
    unsigned int _dailyStartingValue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CLAvengerScannerClient *_controller;	// 24 = 0x18
    double _coolDownScan;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned int dailyStartingValue; // @synthesize dailyStartingValue=_dailyStartingValue;
@property(readonly, nonatomic) double coolDownScan; // @synthesize coolDownScan=_coolDownScan;
@property(nonatomic) CLAvengerScannerClient *controller; // @synthesize controller=_controller;
@property(readonly, retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)scheduleDailyResetBOMScan;	// IMP=0x00100000000d12e3
- (_Bool)checkDailyResetEligible:(id)arg1;	// IMP=0x00100000000d11af
- (void)resetBOMScanIfNeeded;	// IMP=0x00100000000d107a
- (void)submitBOMMetricsScansCompleted:(unsigned long long)arg1 andTimeSinceLastDisable:(double)arg2;	// IMP=0x00100000000d0e4c
- (void)submitBOMMetricsBoot;	// IMP=0x00100000000d0e27
- (void)scanCompleted;	// IMP=0x00100000000d0ccb
- (void)dispatchEnableBomScanAfterBackoff;	// IMP=0x00100000000d0c25
- (double)computeBOMScanBackoffOfDate:(id)arg1;	// IMP=0x00100000000d0bc2
- (void)enableBOMScan;	// IMP=0x00100000000d09f7
- (void)handleUnRegisterController;	// IMP=0x00100000000d092f
- (void)handleRegisterWithController:(id)arg1;	// IMP=0x00100000000d0850
- (unsigned int)remainingBOMScans;	// IMP=0x00100000000d0750
- (void)setRemainingBOMScansTo:(unsigned int)arg1;	// IMP=0x00100000000d0669
- (id)timestampOfLastBOMDailyLimitResetDate;	// IMP=0x00100000000d052e
- (void)setTimestampLastBOMDailyLimitResetDate:(double)arg1;	// IMP=0x00100000000d0420
- (id)timestampOfLastBeepOnMoveScanDate;	// IMP=0x00100000000d02e5
- (void)setTimeStampLastBeepOnMoveScan:(double)arg1;	// IMP=0x00100000000d01d7
- (id)initAndStartWithQueue:(id)arg1 andController:(id)arg2;	// IMP=0x00100000000d0185
- (id)initWithQueue:(id)arg1 andController:(id)arg2;	// IMP=0x00100000000cff36

@end
