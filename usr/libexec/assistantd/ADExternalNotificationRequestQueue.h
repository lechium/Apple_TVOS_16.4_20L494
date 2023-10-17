//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAnnounceNotificationRequest, AFQueue, NSMutableDictionary;

@interface ADExternalNotificationRequestQueue : NSObject
{
    ADAnnounceNotificationRequest *_currentRequest;	// 8 = 0x8
    AFQueue *_queuedNotificationRequestIdentifiers;	// 16 = 0x10
    NSMutableDictionary *_queuedRequestMap;	// 24 = 0x18
    ADAnnounceNotificationRequest *_incomingCallRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000118fe6
@property(retain, nonatomic) ADAnnounceNotificationRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (_Bool)_isIncomingCallNotificationRequestQueued;	// IMP=0x0010000000118fbd
- (unsigned long long)_numberOfNotificationRequests;	// IMP=0x0010000000118e79
- (unsigned long long)_numberOfThreads;	// IMP=0x0010000000118e31
- (void)fetchUnreadNotificationsFromThreadAfterNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000118948
- (_Bool)removeAnnouncementRequest:(id)arg1;	// IMP=0x0010000000118633
- (id)notificationRequestForNotificationIdentifierInAnnouncementQueue:(id)arg1;	// IMP=0x0010000000118249
- (_Bool)_isAnnounceNotificationRequest:(id)arg1 equalToRequest:(id)arg2;	// IMP=0x001000000011808a
- (void)clearRequestQueue;	// IMP=0x0010000000117e61
- (void)completeCurrentRequestWithSuccess:(_Bool)arg1 forReason:(long long)arg2 shouldEmitInstrumentationEvent:(_Bool)arg3;	// IMP=0x0010000000117bae
- (id)_nextRequestIdentifier;	// IMP=0x0010000000117b35
- (id)nextAnnouncementRequest;	// IMP=0x00100000001176a0
- (void)enqueueAnnouncementRequest:(id)arg1;	// IMP=0x001000000011711e
- (long long)_lastRequestAnnouncementTypeInQueue;	// IMP=0x0010000000117074
- (id)_lastRequestIdentifierInQueue;	// IMP=0x001000000011703d
- (id)init;	// IMP=0x0010000000116fb9
- (id)_identifierForNotificationRequest:(id)arg1;	// IMP=0x0010000000116ec7

@end

