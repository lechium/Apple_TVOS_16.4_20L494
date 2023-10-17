//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFAssertion.h"

@class HMFWiFiManager;

__attribute__((visibility("hidden")))
@interface __HMFWiFiAssertion : HMFAssertion
{
    HMFWiFiManager *_manager;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d1cb
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) HMFWiFiManager *manager; // @synthesize manager=_manager;
- (void)invalidate;	// IMP=0x000000000000d152
- (_Bool)acquire:(id *)arg1;	// IMP=0x000000000000cba4
- (id)initWithOptions:(unsigned long long)arg1 manager:(id)arg2 reason:(id)arg3;	// IMP=0x000000000000ca58
- (id)initWithName:(id)arg1;	// IMP=0x000000000000c9a2

@end

