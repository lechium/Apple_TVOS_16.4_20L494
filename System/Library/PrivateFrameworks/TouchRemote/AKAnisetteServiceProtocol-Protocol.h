//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TouchRemote/NSObject-Protocol.h>

@class NSData, NSString, NSURLRequest;

@protocol AKAnisetteServiceProtocol <NSObject>
- (void)legacyAnisetteDataForDSID:(NSString *)arg1 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg2;
- (void)eraseAnisetteWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)syncAnisetteWithSIMData:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)provisionAnisetteWithCompletion:(void (^)(_Bool, NSError *))arg1;

@optional
- (void)fetchPeerAttestationDataForRequest:(NSURLRequest *)arg1 completion:(void (^)(AKAttestationData *, NSError *))arg2;
@end

