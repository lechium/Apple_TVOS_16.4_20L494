//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString, _SFECKeyPair;

@interface CKKSAccountInfo : NSObject
{
    _SFECKeyPair *_signingKey;	// 8 = 0x8
    NSDictionary *_peerVerifyingKeys;	// 16 = 0x10
    NSString *_egoPeerID;	// 24 = 0x18
    NSError *_setupError;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000131c01
@property(retain) NSError *setupError; // @synthesize setupError=_setupError;
@property(retain) NSString *egoPeerID; // @synthesize egoPeerID=_egoPeerID;
@property(retain) NSDictionary *peerVerifyingKeys; // @synthesize peerVerifyingKeys=_peerVerifyingKeys;
@property(retain) _SFECKeyPair *signingKey; // @synthesize signingKey=_signingKey;

@end

