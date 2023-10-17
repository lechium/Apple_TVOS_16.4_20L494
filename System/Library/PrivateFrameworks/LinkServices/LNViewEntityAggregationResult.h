//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LNViewEntityAggregationResult : NSObject
{
    NSMutableDictionary *_entitiesByBundleId;	// 8 = 0x8
    NSMutableDictionary *_errors;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a003d
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) NSDictionary *entities;
- (void)addResults:(id)arg1 error:(id)arg2 forBundle:(id)arg3;	// IMP=0x000000000009fc69
- (id)init;	// IMP=0x000000000009fbdb

@end

