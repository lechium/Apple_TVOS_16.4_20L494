//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _SFECKeyPair, _SFECPublicKey, _SFIdentity;

@interface OctagonSelfPeer : NSObject
{
    NSString *_peerID;	// 8 = 0x8
    _SFIdentity *_encryptionIdentity;	// 16 = 0x10
    _SFIdentity *_signingIdentity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000044301
@property(retain) _SFIdentity *signingIdentity; // @synthesize signingIdentity=_signingIdentity;
@property(retain) _SFIdentity *encryptionIdentity; // @synthesize encryptionIdentity=_encryptionIdentity;
@property(readonly) NSString *peerID; // @synthesize peerID=_peerID;
- (_Bool)matchesPeer:(id)arg1;	// IMP=0x0010000000044207
@property(readonly) _SFECKeyPair *signingKey;
@property(readonly) _SFECKeyPair *encryptionKey;
@property(readonly) _SFECPublicKey *publicSigningKey;
@property(readonly) _SFECPublicKey *publicEncryptionKey;
@property(readonly, copy) NSString *description;
- (id)initWithPeerID:(id)arg1 signingIdentity:(id)arg2 encryptionIdentity:(id)arg3;	// IMP=0x0010000000043f94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

