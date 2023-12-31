//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, TVSObserverSet;
@protocol OS_dispatch_source;

@interface PBSceneShroudController : NSObject
{
    TVSObserverSet *_agents;	// 8 = 0x8
    BSCompoundAssertion *_compoundAssertion;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_debounceSource;	// 24 = 0x18
}

+ (id)allBundleIDsSet;	// IMP=0x004000000010dc72
- (void).cxx_destruct;	// IMP=0x002000000010efe7
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *debounceSource; // @synthesize debounceSource=_debounceSource;
@property(readonly, nonatomic) BSCompoundAssertion *compoundAssertion; // @synthesize compoundAssertion=_compoundAssertion;
@property(readonly, nonatomic) TVSObserverSet *agents; // @synthesize agents=_agents;
- (id)_contextForBundleID:(id)arg1;	// IMP=0x001000000010ee0b
- (id)_contextsByBundleIDDictionaryWithDefaultContext:(out id *)arg1;	// IMP=0x001000000010e9ef
- (void)_mainQueue_updateAgent:(id)arg1 withUserInfo:(id)arg2 usingContext:(id)arg3 animated:(_Bool)arg4;	// IMP=0x001000000010e833
- (void)_mainQueue_handleStateChange;	// IMP=0x001000000010e4e6
- (id)registerAgent:(id)arg1 withClientProcessBundleIdentifier:(id)arg2;	// IMP=0x001000000010e26a
- (id)shroudApplicationsWithBundleIDs:(id)arg1 style:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000010e016
- (void)dealloc;	// IMP=0x001000000010df98
- (id)init;	// IMP=0x001000000010dd56

@end

