//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TestFlightServiceHost;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface TestFlightExtensionSyncActivity : NSObject
{
    TestFlightServiceHost *_serviceHost;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    unsigned long long _syncIntervalMinutes;	// 24 = 0x18
    unsigned long long _syncGracePeriodMinutes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001dee3f
- (void)run;	// IMP=0x00100000001dedde
@property(readonly) const char *registeredName;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) NSString *descriptiveName;
@property(readonly) long long deadline;
@property(readonly) NSObject<OS_xpc_object> *criteria;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

