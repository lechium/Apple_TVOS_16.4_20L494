//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MCMCache;

__attribute__((visibility("hidden")))
@interface MCMClientIdentityCache : NSObject
{
    id <MCMCache> _cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007768c
@property(readonly, nonatomic) id <MCMCache> cache; // @synthesize cache=_cache;
- (id)clientIdentityWithAuditToken:(CDStruct_4c969caf)arg1 personaUniqueString:(id)arg2 error:(id *)arg3 generator:(CDUnknownBlockType)arg4;	// IMP=0x00000000000773ef
- (void)flush;	// IMP=0x0000000000077387
- (id)init;	// IMP=0x00000000000772f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

