//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSSet, NSString, TPPBSecureElementIdentity;

@interface TrustedPeersHelperPeer : NSObject
{
    NSString *_peerID;	// 8 = 0x8
    NSData *_signingSPKI;	// 16 = 0x10
    NSData *_encryptionSPKI;	// 24 = 0x18
    NSSet *_viewList;	// 32 = 0x20
    TPPBSecureElementIdentity *_secureElementIdentity;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001c18f7
- (void).cxx_destruct;	// IMP=0x00200000001c18ae
@property(retain) TPPBSecureElementIdentity *secureElementIdentity; // @synthesize secureElementIdentity=_secureElementIdentity;
@property(retain) NSSet *viewList; // @synthesize viewList=_viewList;
@property(retain) NSData *encryptionSPKI; // @synthesize encryptionSPKI=_encryptionSPKI;
@property(retain) NSData *signingSPKI; // @synthesize signingSPKI=_signingSPKI;
@property(retain) NSString *peerID; // @synthesize peerID=_peerID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001c16b3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001c14ac
- (id)description;	// IMP=0x00100000001c1355
- (id)initWithPeerID:(id)arg1 signingSPKI:(id)arg2 encryptionSPKI:(id)arg3 secureElementIdentity:(id)arg4 viewList:(id)arg5;	// IMP=0x00100000001c1253

@end

