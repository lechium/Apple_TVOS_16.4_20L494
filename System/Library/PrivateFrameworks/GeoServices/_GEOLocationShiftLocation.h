//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOLatLng;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShiftLocation : NSObject
{
    GEOLatLng *_latLng;	// 8 = 0x8
    GEOApplicationAuditToken *_auditToken;	// 16 = 0x10
    double _accuracy;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    CDUnknownBlockType _errorHandler;	// 40 = 0x28
    CDUnknownBlockType _mustGoToNetworkCallback;	// 48 = 0x30
    CDUnknownBlockType _functionHandler;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000076b001
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
- (void)performMustGoToNetwork;	// IMP=0x000000000076af7f
- (void)performErrorHandler:(id)arg1;	// IMP=0x000000000076aed6
- (void)performCompletionHandlerWithShiftedCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 function:(id)arg3;	// IMP=0x000000000076adc4
- (void)_performOnCallbackQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000076ad83
- (id)initWithLatLng:(id)arg1 auditToken:(id)arg2 functionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;	// IMP=0x000000000076ac4b
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;	// IMP=0x000000000076ac03
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6 auditToken:(id)arg7;	// IMP=0x000000000076ab63
- (id)_initWithLatLng:(id)arg1 accuracy:(double)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 mustGoToNetworkCallback:(CDUnknownBlockType)arg6;	// IMP=0x000000000076aa0f

@end

