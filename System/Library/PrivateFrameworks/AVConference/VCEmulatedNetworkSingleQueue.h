//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCEmulatedNetworkQueue;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkSingleQueue
{
    VCEmulatedNetworkQueue *_networkQueue;	// 48 = 0x30
}

- (void)runUntilTime:(double)arg1;	// IMP=0x000000000030d107
- (void)push:(id)arg1;	// IMP=0x000000000030d073
- (void)dealloc;	// IMP=0x000000000030d00e
- (id)initWithPolicies:(id)arg1;	// IMP=0x000000000030cee1

@end

