//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LogKey, NSDictionary, NSNumber, NSString;

@interface MetricsHandler : NSObject
{
    NSString *_os;	// 8 = 0x8
    NSString *_platform;	// 16 = 0x10
    NSNumber *_activeDSID;	// 24 = 0x18
    LogKey *_baseLogKey;	// 32 = 0x20
    NSDictionary *_currentApps;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000012f5ce
@property(readonly, nonatomic) NSString *topic;
@property(readonly, nonatomic) _Bool shouldCollectMetrics;
- (void)resetMetrics;	// IMP=0x001000000012f5b8
- (void)recordSupplementalAppMetricsEvents;	// IMP=0x001000000012f5b2
- (void)recordLaunches:(id)arg1;	// IMP=0x001000000012f5ac
- (void)recordInstallEventsForBundleIDs:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x001000000012f5a6
- (void)recordDeletedBundleIDs:(id)arg1;	// IMP=0x001000000012f5a0
- (void)postMetrics;	// IMP=0x001000000012f59a
- (id)getAppEventsWithError:(id *)arg1;	// IMP=0x001000000012f592
@property(readonly, nonatomic) LogKey *logKey;
@property(readonly, nonatomic) NSString *deviceID;
- (id)createAppEventFromAppMetadata:(id)arg1;	// IMP=0x001000000012f57a

@end
