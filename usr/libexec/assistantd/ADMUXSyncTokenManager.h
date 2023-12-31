//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADMUXSyncTokenManager : NSObject
{
    NSMutableDictionary *_companionSyncTokens;	// 8 = 0x8
    struct os_unfair_lock_s _syncTokenLock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000001f78b3
- (void).cxx_destruct;	// IMP=0x00200000001f7cf9
- (void)handleMuxTokenExchangeMessage:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f7b1c
- (id)getSyncTokenForAssistantId:(id)arg1 aceHost:(id)arg2;	// IMP=0x00100000001f7a67
- (void)updateSyncTokenForAssistantId:(id)arg1 aceHost:(id)arg2 token:(id)arg3;	// IMP=0x00100000001f7965
- (id)init;	// IMP=0x00100000001f7908

@end

