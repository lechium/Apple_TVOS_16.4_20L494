//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableURLRequest.h>

@class AssetRequestProperties;

@interface AssetRequest : NSMutableURLRequest
{
    AssetRequestProperties *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000655d9
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006555a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000065548
- (id)copyRequestProperties;	// IMP=0x001000000006552b
- (void)setAllowsExpensiveNetworkAccess:(_Bool)arg1;	// IMP=0x00100000000654d5
- (void)setAllowsConstrainedNetworkAccess:(_Bool)arg1;	// IMP=0x001000000006547f
- (void)setAllowsCellularAccess:(_Bool)arg1;	// IMP=0x0010000000065429
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x00100000000653cd
- (id)initWithURL:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000065347
- (id)initWithRequest:(id)arg1 properties:(id)arg2;	// IMP=0x00100000000651b6

@end

