//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFAssertion.h>

@class HMHomeManager, NSUUID;

__attribute__((visibility("hidden")))
@interface HMAutoAddWalletKeySupressionAssertion : HMFAssertion
{
    HMHomeManager *_homeManager;	// 16 = 0x10
    NSUUID *_homeUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000279db6
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) __weak HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)invalidate;	// IMP=0x0000000000279b1c
- (void)acquireWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000279801
- (id)initWithHomeManager:(id)arg1 homeUUID:(id)arg2;	// IMP=0x000000000027972c

@end

