//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext, NSString;
@protocol AKAnisetteProvisioningClientProtocol;

@interface AKClientAnisetteService : NSObject
{
    id <AKAnisetteProvisioningClientProtocol> _clientProxy;	// 8 = 0x8
    AKAppleIDAuthenticationContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000902b6
- (void)fetchPeerAttestationDataForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000090137
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000090059
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008ff9b
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008fedd
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008fdff
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008fd39
- (id)initWithClient:(id)arg1 context:(id)arg2;	// IMP=0x001000000008fc3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

