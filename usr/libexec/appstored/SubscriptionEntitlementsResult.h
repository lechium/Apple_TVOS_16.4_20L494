//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface SubscriptionEntitlementsResult : NSObject
{
    _Bool _resultFromCache;	// 8 = 0x8
    _Bool _cacheExpired;	// 9 = 0x9
    NSArray *_entitlements;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000125fdf

@end

