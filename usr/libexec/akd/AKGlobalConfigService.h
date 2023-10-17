//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface AKGlobalConfigService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_cachedConfig;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000a0587
- (void).cxx_destruct;	// IMP=0x00200000000a15f2
- (id)_unsafe_updateCacheWithData:(id)arg1;	// IMP=0x00100000000a147a
- (id)_configURLRequestWithContext:(id)arg1;	// IMP=0x00100000000a11b3
- (void)_getConfigsFromCache:(_Bool)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a09b0
- (void)fetchGlobalConfigUsingCachePolicy:(unsigned long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a08bc
- (void)checkForLocaleChange;	// IMP=0x00100000000a0675
- (id)init;	// IMP=0x00100000000a05dc

@end
