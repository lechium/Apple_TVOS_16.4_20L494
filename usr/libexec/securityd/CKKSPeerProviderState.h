//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSSelves, NSError, NSSet, NSString;

@interface CKKSPeerProviderState : NSObject
{
    _Bool _essential;	// 8 = 0x8
    NSString *_peerProviderID;	// 16 = 0x10
    CKKSSelves *_currentSelfPeers;	// 24 = 0x18
    NSError *_currentSelfPeersError;	// 32 = 0x20
    NSSet *_currentTrustedPeers;	// 40 = 0x28
    NSSet *_currentTrustedPeerIDs;	// 48 = 0x30
    NSError *_currentTrustedPeersError;	// 56 = 0x38
}

+ (id)createFromProvider:(id)arg1;	// IMP=0x0040000000133358
+ (id)noPeersState:(id)arg1;	// IMP=0x001000000013323e
- (void).cxx_destruct;	// IMP=0x00200000001331ea
@property(readonly, nonatomic) NSError *currentTrustedPeersError; // @synthesize currentTrustedPeersError=_currentTrustedPeersError;
@property(readonly, nonatomic) NSSet *currentTrustedPeerIDs; // @synthesize currentTrustedPeerIDs=_currentTrustedPeerIDs;
@property(readonly, nonatomic) NSSet *currentTrustedPeers; // @synthesize currentTrustedPeers=_currentTrustedPeers;
@property(readonly, nonatomic) NSError *currentSelfPeersError; // @synthesize currentSelfPeersError=_currentSelfPeersError;
@property(readonly, nonatomic) CKKSSelves *currentSelfPeers; // @synthesize currentSelfPeers=_currentSelfPeers;
@property _Bool essential; // @synthesize essential=_essential;
@property(retain) NSString *peerProviderID; // @synthesize peerProviderID=_peerProviderID;
- (_Bool)unwrapKey:(id)arg1 fromShares:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001321f5
- (id)description;	// IMP=0x00100000001320c3
- (id)initWithPeerProviderID:(id)arg1 essential:(_Bool)arg2 selfPeers:(id)arg3 selfPeersError:(id)arg4 trustedPeers:(id)arg5 trustedPeersError:(id)arg6;	// IMP=0x0010000000131dd2

@end

