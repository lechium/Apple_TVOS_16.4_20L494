//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMMLogEventSubmitting-Protocol.h>
#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAppleMediaAccessory, HMDBulletinBoard, HMDBulletinBoardNotification, HMDDevice, HMDHome, HMEEvent, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMEEventForwarder, HMELastEventStoreReadHandle, OS_dispatch_queue;

@protocol HMDAudioAnalysisEventSubscriberContext <NSObject, HMMLogEventSubmitting>
@property(readonly) _Bool dropInEnabled;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue;
@property(readonly) __weak HMDAppleMediaAccessory *accessory;
@property(readonly) __weak id <HMEEventForwarder> eventForwarder;
@property(readonly) __weak id <HMELastEventStoreReadHandle> eventStoreReadHandle;
@property(readonly, getter=isCurrentAccessory) _Bool currentAccessory;
@property(readonly) HMDBulletinBoard *bulletinBoard;
@property(readonly) __weak HMDHome *home;
@property(readonly, copy) NSString *roomName;
@property(readonly, copy) NSUUID *spiClientIdentifier;
@property(readonly, copy) NSUUID *uuid;
@property(readonly, copy) NSString *name;
@property(readonly) HMDBulletinBoardNotification *audioAnalysisEventNotification;
@property(readonly) HMFMessageDispatcher *dispatcher;
@property(readonly) HMDDevice *device;
- (void)forwardEvent:(HMEEvent *)arg1 topic:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end
