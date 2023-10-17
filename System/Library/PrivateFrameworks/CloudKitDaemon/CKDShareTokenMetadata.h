//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CKDShareTokenMetadata : NSObject
{
    _Bool _forceDSRefetch;	// 8 = 0x8
    NSString *_routingKey;	// 16 = 0x10
    NSData *_shortSharingTokenData;	// 24 = 0x18
    NSData *_publicTokenData;	// 32 = 0x20
    NSData *_privateTokenData;	// 40 = 0x28
    NSString *_participantID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000cb7f2
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) NSData *privateTokenData; // @synthesize privateTokenData=_privateTokenData;
@property(retain, nonatomic) NSData *publicTokenData; // @synthesize publicTokenData=_publicTokenData;
@property(nonatomic) _Bool forceDSRefetch; // @synthesize forceDSRefetch=_forceDSRefetch;
@property(retain, nonatomic) NSData *shortSharingTokenData; // @synthesize shortSharingTokenData=_shortSharingTokenData;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(readonly, nonatomic) NSData *shortSharingTokenHashData;
@property(readonly, nonatomic) NSString *shortSharingToken;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cb439

@end
