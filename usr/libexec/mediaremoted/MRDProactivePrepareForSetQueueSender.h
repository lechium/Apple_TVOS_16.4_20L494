//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, AFNotifyObserver, NSString;
@protocol OS_dispatch_queue;

@interface MRDProactivePrepareForSetQueueSender : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    AFInstanceContext *_siriInstanceContext;	// 16 = 0x10
    AFNotifyObserver *_siriObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000f4318
- (void)_onQueue_sendPrepareForSetQueueTo:(id)arg1 reason:(id)arg2 type:(long long)arg3;	// IMP=0x00100000000f3976
- (void)handleFirstLaunchAfterBootIfNeeded;	// IMP=0x00100000000f33cc
- (id)systemMediaAppPlayerPathForNotification:(id)arg1;	// IMP=0x00100000000f3246
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x00100000000f2d56
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00100000000f2c48
- (void)unregisterForChanges;	// IMP=0x00100000000f2bf5
- (void)registerForChanges;	// IMP=0x00100000000f2a85
- (void)dealloc;	// IMP=0x00100000000f29c4
- (void)_initialize;	// IMP=0x00100000000f2912
- (id)init;	// IMP=0x00100000000f2871

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

