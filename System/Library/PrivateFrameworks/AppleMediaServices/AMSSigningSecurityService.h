//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AMSDServiceBrokerProtocol;

__attribute__((visibility("hidden")))
@interface AMSSigningSecurityService : NSObject
{
    id <AMSDServiceBrokerProtocol> _serviceBroker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000304ce0
@property(readonly, nonatomic) id <AMSDServiceBrokerProtocol> serviceBroker; // @synthesize serviceBroker=_serviceBroker;
- (void)_handleSecurityServicePromise:(id)arg1 onConnected:(CDUnknownBlockType)arg2 onDenied:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;	// IMP=0x0000000000304af1
- (id)_defaultSecurityServiceWithDelegate:(id)arg1;	// IMP=0x0000000000304a87
- (id)_headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 securityServicePromise:(id)arg4 onDenied:(CDUnknownBlockType)arg5;	// IMP=0x00000000003047a2
- (id)_handleResponse:(id)arg1 bag:(id)arg2 securityServicePromise:(id)arg3 onDenied:(CDUnknownBlockType)arg4;	// IMP=0x00000000003044c3
- (id)signatureForRequest:(id)arg1;	// IMP=0x0000000000304328
- (id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3;	// IMP=0x00000000003041a0
- (id)handleResponse:(id)arg1 bag:(id)arg2;	// IMP=0x0000000000304007
- (id)initWithServiceBroker:(id)arg1;	// IMP=0x0000000000303f9c
- (id)init;	// IMP=0x0000000000303f5c

@end

