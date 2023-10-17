//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface APSDNSCacheEntry : NSObject
{
    NSString *_hostname;	// 8 = 0x8
    NSMutableArray *_cachedIPAddresses;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004ef82
@property(readonly) NSMutableArray *cachedIPAddresses; // @synthesize cachedIPAddresses=_cachedIPAddresses;
@property(readonly) NSString *hostname; // @synthesize hostname=_hostname;
- (id)getAddressListForHostname:(id)arg1 now:(id)arg2 addressFamily:(unsigned long long)arg3;	// IMP=0x001000000004ec0c
- (void)addCacheIPAddress:(id)arg1 addressFamily:(unsigned long long)arg2 timeToLive:(double)arg3;	// IMP=0x001000000004e966
- (id)initWithHostname:(id)arg1;	// IMP=0x001000000004e8e1

@end
