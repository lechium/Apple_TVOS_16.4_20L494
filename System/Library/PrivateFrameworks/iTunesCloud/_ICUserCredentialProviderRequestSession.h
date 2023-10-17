//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentityProperties, ICUserIdentityStore, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _ICUserCredentialProviderRequestSession : NSObject
{
    ICUserIdentityProperties *_activeICloudAccountProperties;	// 8 = 0x8
    NSArray *_credentialRequests;	// 16 = 0x10
    NSMapTable *_delegationCredentialRequestToSpecificUserIdentity;	// 24 = 0x18
    NSMapTable *_delegationCredentialRequestToIdentityProperties;	// 32 = 0x20
    NSMutableDictionary *_delegationUserIdentityToUUIDs;	// 40 = 0x28
    long long _maximumQualityOfService;	// 48 = 0x30
    NSMutableArray *_pendingPropertyLoadCredentialRequests;	// 56 = 0x38
    NSMutableArray *_pendingResponseCredentialRequests;	// 64 = 0x40
    CDUnknownBlockType _responseHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001d1710
@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSMutableArray *pendingResponseCredentialRequests; // @synthesize pendingResponseCredentialRequests=_pendingResponseCredentialRequests;
@property(retain, nonatomic) NSMutableArray *pendingPropertyLoadCredentialRequests; // @synthesize pendingPropertyLoadCredentialRequests=_pendingPropertyLoadCredentialRequests;
@property(readonly, nonatomic) long long maximumQualityOfService; // @synthesize maximumQualityOfService=_maximumQualityOfService;
@property(retain, nonatomic) NSMutableDictionary *delegationUserIdentityToUUIDs; // @synthesize delegationUserIdentityToUUIDs=_delegationUserIdentityToUUIDs;
@property(retain, nonatomic) NSMapTable *delegationCredentialRequestToIdentityProperties; // @synthesize delegationCredentialRequestToIdentityProperties=_delegationCredentialRequestToIdentityProperties;
@property(retain, nonatomic) NSMapTable *delegationCredentialRequestToSpecificUserIdentity; // @synthesize delegationCredentialRequestToSpecificUserIdentity=_delegationCredentialRequestToSpecificUserIdentity;
@property(readonly, copy, nonatomic) NSArray *credentialRequests; // @synthesize credentialRequests=_credentialRequests;
@property(copy, nonatomic) ICUserIdentityProperties *activeICloudAccountProperties; // @synthesize activeICloudAccountProperties=_activeICloudAccountProperties;
@property(readonly, nonatomic) ICUserIdentityStore *identityStore;
@property(readonly, nonatomic) _Bool hasPendingResponses;
- (id)initWithCredentialRequests:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d13bd

@end

