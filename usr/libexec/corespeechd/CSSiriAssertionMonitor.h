//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSSiriAssertionMonitor
{
    unsigned char _assertionState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000d7207
- (void).cxx_destruct;	// IMP=0x00200000000d76f7
- (_Bool)isEnabled;	// IMP=0x00100000000d76e3
- (void)_notifyObserver:(_Bool)arg1;	// IMP=0x00100000000d7626
- (void)disableAssertionReceived;	// IMP=0x00100000000d7511
- (void)enableAssertionReceived;	// IMP=0x00100000000d73fc
- (void)_stopMonitoring;	// IMP=0x00100000000d737d
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000d7377
- (void)dealloc;	// IMP=0x00100000000d7339
- (id)init;	// IMP=0x00100000000d725c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

