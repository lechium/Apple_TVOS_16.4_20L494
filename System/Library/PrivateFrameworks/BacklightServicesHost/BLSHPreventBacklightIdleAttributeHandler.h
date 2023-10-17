//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHLocalCountingAssertionAttributeHandler.h"

@class BLSHBacklightIdleProvider;

__attribute__((visibility("hidden")))
@interface BLSHPreventBacklightIdleAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _active[3];	// 12 = 0xc
    BLSHBacklightIdleProvider *_provider;	// 16 = 0x10
}

+ (Class)attributeBaseClass;	// IMP=0x006000000000a288
+ (id)attributeClasses;	// IMP=0x006000000000a21c
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;	// IMP=0x006000000000a117
- (void).cxx_destruct;	// IMP=0x000000000000a8b9
@property(readonly, nonatomic) __weak BLSHBacklightIdleProvider *provider; // @synthesize provider=_provider;
- (void)activate:(_Bool)arg1 withEntry:(id)arg2;	// IMP=0x000000000000a4ae
- (void)deactivateWithFinalEntry:(id)arg1;	// IMP=0x000000000000a497
- (void)activateWithFirstEntry:(id)arg1;	// IMP=0x000000000000a47d
- (id)countingTargetForEntry:(id)arg1;	// IMP=0x000000000000a442
- (long long)typeForEntry:(id)arg1;	// IMP=0x000000000000a299
- (id)initForService:(id)arg1 provider:(id)arg2;	// IMP=0x000000000000a19d

@end

