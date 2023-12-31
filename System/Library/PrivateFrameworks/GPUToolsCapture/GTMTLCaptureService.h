//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTCaptureDescriptor, MTLCaptureDescriptorInternal, NSMutableDictionary, NSURL;
@protocol OS_dispatch_semaphore, OS_os_log;

@interface GTMTLCaptureService : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    GTCaptureDescriptor *_currentDescriptor;	// 16 = 0x10
    NSURL *_currentCaptureURL;	// 24 = 0x18
    MTLCaptureDescriptorInternal *_activeCaptureDesc;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_interposeSemaphore;	// 40 = 0x28
    NSMutableDictionary *_observerIdToObserver;	// 48 = 0x30
    unsigned long long _nextObserverId;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003d7d8
- (void)notifyCaptureRequest:(id)arg1;	// IMP=0x000000000003d583
- (void)notifyUnsupportedFenum:(id)arg1;	// IMP=0x000000000003d32e
- (void)notifyCaptureProgress:(id)arg1;	// IMP=0x000000000003d0d9
- (void)notifyCaptureObjectsChanged:(id)arg1;	// IMP=0x000000000003ce84
- (_Bool)highlight:(unsigned long long)arg1;	// IMP=0x000000000003c9e5
- (void)startWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c563
- (_Bool)hasObservers;	// IMP=0x000000000003c546
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x000000000003c474
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x000000000003c379
- (void)stop;	// IMP=0x000000000003c335
- (id)allCaptureObjects;	// IMP=0x000000000003c324
- (void)waitForInterposeSignal;	// IMP=0x000000000003c2ea
- (void)signalInterposeSemaphore;	// IMP=0x000000000003c2d5
- (id)initWithGuestApp:(struct GTMTLGuestAppClient *)arg1;	// IMP=0x000000000003c1f5

@end

