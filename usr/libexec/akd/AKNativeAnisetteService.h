//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKClient, NSString;

@interface AKNativeAnisetteService : NSObject
{
    AKClient *_client;	// 8 = 0x8
}

+ (unsigned long long)activeAnisetteDSIDWithEnvironment:(unsigned long long)arg1;	// IMP=0x00200000000277ac
+ (unsigned long long)lastKnownActiveAnisetteDSID;	// IMP=0x0010000000027746
+ (void)initialize;	// IMP=0x001000000002395e
- (void).cxx_destruct;	// IMP=0x0020000000027825
- (void)_signRequestWithProvisioningHeaders:(id)arg1 forUrlKey:(id)arg2;	// IMP=0x0010000000027615
- (id)_createSyncURLRequestWithMID:(id)arg1 SRM:(id)arg2 routingInfo:(unsigned long long)arg3;	// IMP=0x0010000000027367
- (id)_createProvisioningEndURLRequestWithCPIM:(id)arg1;	// IMP=0x0010000000027144
- (id)_createProvisioningStartURLRequestWithCompletion;	// IMP=0x0010000000026fb4
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026d8e
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025f13
- (void)_signWithBAAHeadersIfNeededForKey:(id)arg1 withRequest:(id)arg2;	// IMP=0x0010000000025c69
- (void)_unsafe_provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002458b
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000244e0
- (id)_unsafe_anisetteDataForDSID:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x0010000000024245
- (id)_unsafe_anisetteDataWithRoutingInfoForDSID:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x0010000000024150
- (void)fetchPeerAttestationDataForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002403e
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023e7c
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023a29
- (id)initWithClient:(id)arg1;	// IMP=0x00100000000239be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
