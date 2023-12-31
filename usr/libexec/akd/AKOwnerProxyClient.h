//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCredentialRequestContext;

@interface AKOwnerProxyClient
{
    AKCredentialRequestContext *_credentialRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000093b3
- (id)teamID;	// IMP=0x0010000000009396
- (id)appID;	// IMP=0x0010000000009379
- (id)bundleID;	// IMP=0x001000000000935c
- (id)localizedAppName;	// IMP=0x001000000000933f
- (id)name;	// IMP=0x001000000000926a
- (_Bool)hasOwnerAccess;	// IMP=0x0010000000009262
- (_Bool)hasWriteAccess;	// IMP=0x001000000000925a
- (_Bool)hasPublicAccess;	// IMP=0x0010000000009252
- (_Bool)hasPrivateSignedAccess;	// IMP=0x001000000000924a
- (_Bool)hasPrivateAccess;	// IMP=0x0010000000009242
- (_Bool)hasInternalAccess;	// IMP=0x001000000000923a
- (id)description;	// IMP=0x00100000000091ce
- (id)initWithCredentialRequest:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000009156
- (id)initWithCredentialRequest:(id)arg1;	// IMP=0x00100000000090e6

@end

