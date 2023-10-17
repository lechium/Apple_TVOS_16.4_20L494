//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface PeerRateLimiter
{
    NSString *peerID;	// 8 = 0x8
    NSMutableDictionary *_accessGroupRateLimitState;	// 16 = 0x10
    NSMutableDictionary *_accessGroupToTimer;	// 24 = 0x18
    NSMutableDictionary *_accessGroupToNextMessageToSend;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000022f69c
@property(retain) NSMutableDictionary *accessGroupToNextMessageToSend; // @synthesize accessGroupToNextMessageToSend=_accessGroupToNextMessageToSend;
@property(retain) NSMutableDictionary *accessGroupToTimer; // @synthesize accessGroupToTimer=_accessGroupToTimer;
@property(retain) NSMutableDictionary *accessGroupRateLimitState; // @synthesize accessGroupRateLimitState=_accessGroupRateLimitState;
@property(retain) NSString *peerID; // @synthesize peerID;
- (int)stateForAccessGroup:(id)arg1;	// IMP=0x001000000022f4f9
- (id)initWithPeer:(struct __OpaqueSOSPeer *)arg1;	// IMP=0x001000000022f3f4
- (id)setUpConfigForPeer;	// IMP=0x001000000022f379

@end

