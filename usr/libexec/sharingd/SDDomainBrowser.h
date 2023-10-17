//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNetServiceBrowser, NSString;
@protocol OS_dispatch_source;

@interface SDDomainBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    _Bool _sendNotification;	// 12 = 0xc
    NSMutableSet *_domains;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timer;	// 24 = 0x18
    struct __CFDictionary *_domainTree;	// 32 = 0x20
    NSNetServiceBrowser *_domainBrowser;	// 40 = 0x28
}

+ (id)sharedBrowser;	// IMP=0x002000000012e001
- (void).cxx_destruct;	// IMP=0x002000000012ed1c
- (void)stop;	// IMP=0x001000000012ec66
- (void)start;	// IMP=0x001000000012eb37
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;	// IMP=0x001000000012ead5
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x001000000012ea83
- (void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x001000000012e9cc
- (void)postNotification;	// IMP=0x001000000012e971
- (void)buildNodes;	// IMP=0x001000000012e852
- (void)parseDomain:(id)arg1;	// IMP=0x001000000012e474
- (id)displayNameForDomain:(id)arg1;	// IMP=0x001000000012e276
- (id)childrenForNode:(struct __SFNode *)arg1;	// IMP=0x001000000012e1dd
- (void)restart;	// IMP=0x001000000012e181
- (void)scheduleBrowser;	// IMP=0x001000000012e131
- (void)statusChanged:(id)arg1;	// IMP=0x001000000012e117
- (void)browseAfterDelay:(double)arg1;	// IMP=0x001000000012e0f7
- (id)init;	// IMP=0x001000000012e056

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

