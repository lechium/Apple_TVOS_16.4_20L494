//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAFamilyFetchActivityScheduler, NSSet;
@protocol OS_dispatch_queue;

@interface FAEventPushHandler : NSObject
{
    NSSet *_events;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_networkingQueue;	// 16 = 0x10
    FAFamilyFetchActivityScheduler *_familyRefreshActivityScheduler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000018981
@property(retain, nonatomic) FAFamilyFetchActivityScheduler *familyRefreshActivityScheduler; // @synthesize familyRefreshActivityScheduler=_familyRefreshActivityScheduler;
- (void)_deliverNotificationWithResponse:(id)arg1 payload:(id)arg2;	// IMP=0x0010000000018838
- (void)process:(id)arg1;	// IMP=0x0010000000018006
- (_Bool)shouldProcess:(id)arg1;	// IMP=0x0010000000017faf
- (id)init;	// IMP=0x0010000000017ec8

@end

