//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject
{
    NSMutableDictionary *_requestContextMap;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _requestContextMapLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a5696
- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;	// IMP=0x00000000000a53e6
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;	// IMP=0x00000000000a533a
- (id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;	// IMP=0x00000000000a51e3
- (void)_criticalInvokeTimeoutBlockForRequestID:(id)arg1;	// IMP=0x00000000000a5091
- (void)_handleSystemTimerFired:(id)arg1;	// IMP=0x00000000000a4fcf
- (id)_criticalFindRequestContextWithResponseHandler:(id)arg1;	// IMP=0x00000000000a4e18
- (id)scheduleTimeoutWithResponseHandler:(id)arg1 timeoutInterval:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4b35
- (long long)inFlightRequestCount;	// IMP=0x00000000000a4a61
- (id)init;	// IMP=0x00000000000a49fd
- (void)dealloc;	// IMP=0x00000000000a49c3
- (void)_accessRequestContextMapInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a4986

@end

