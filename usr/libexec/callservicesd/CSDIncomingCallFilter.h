//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDIncomingCallFilterDataSource, CXCallDirectorySanitizer, CXCallDirectoryStore, NSString;
@protocol CSDCallCenterObserver, CSDDeviceLockStateObserver, OS_dispatch_queue;

@interface CSDIncomingCallFilter : NSObject
{
    double _twoTimeCallthroughInterval;	// 8 = 0x8
    CXCallDirectoryStore *_callDirectoryStore;	// 16 = 0x10
    CSDIncomingCallFilterDataSource *_dataSource;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <CSDDeviceLockStateObserver> _deviceLockObserver;	// 40 = 0x28
    id <CSDCallCenterObserver> _callCenterObserver;	// 48 = 0x30
    CXCallDirectorySanitizer *_callDirectorySanitizer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001234c4
@property(readonly, nonatomic) CXCallDirectorySanitizer *callDirectorySanitizer; // @synthesize callDirectorySanitizer=_callDirectorySanitizer;
@property(readonly, nonatomic) id <CSDCallCenterObserver> callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) id <CSDDeviceLockStateObserver> deviceLockObserver; // @synthesize deviceLockObserver=_deviceLockObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSDIncomingCallFilterDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CXCallDirectoryStore *callDirectoryStore; // @synthesize callDirectoryStore=_callDirectoryStore;
@property(nonatomic) double twoTimeCallthroughInterval; // @synthesize twoTimeCallthroughInterval=_twoTimeCallthroughInterval;
- (void)callsChangedForCallCenterObserver:(id)arg1;	// IMP=0x00100000001233d9
- (id)_callDirectoryPhoneNumberVariantsForSourceAddress:(id)arg1 countryCode:(id)arg2;	// IMP=0x001000000012315b
- (_Bool)callDirectoryAllowsCallFromSourceAddress:(id)arg1 countryCode:(id)arg2;	// IMP=0x0010000000122ed3
- (_Bool)callDirectoryAllowsCallFromSourceAddress:(id)arg1;	// IMP=0x0010000000122e3b
- (_Bool)_doNotDisturbAllowsCallFromSourceAddress:(id)arg1 providerIdentifier:(id)arg2;	// IMP=0x0010000000122df6
- (id)_callFilterIdentifier;	// IMP=0x0010000000122da3
- (CDUnknownBlockType)_callFilterBlock;	// IMP=0x0010000000122b4f
- (id)initWithDataSource:(id)arg1 deviceLockObserver:(id)arg2 callCenterObserver:(id)arg3 callDirectoryStoreBuilder:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x00100000001229d5
- (id)init;	// IMP=0x0010000000122704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

