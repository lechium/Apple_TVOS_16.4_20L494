//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface FlexReachability : NSObject
{
    _Bool _isNotifying;	// 8 = 0x8
    _Bool localWiFiRef;	// 9 = 0x9
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_reachabilityQueue;	// 24 = 0x18
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x006000000000374b
+ (id)reachabilityForInternetConnection;	// IMP=0x00600000000036f7
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x00600000000036b5
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x0060000000003652
- (void).cxx_destruct;	// IMP=0x0000000000003bed
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilityQueue; // @synthesize reachabilityQueue=_reachabilityQueue;
- (long long)currentReachabilityStatus;	// IMP=0x0000000000003b88
- (_Bool)interventionRequired;	// IMP=0x0000000000003b5c
- (_Bool)connectionRequired;	// IMP=0x0000000000003b30
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000000003afd
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000000003aea
- (void)dealloc;	// IMP=0x0000000000003a9e
- (void)stopNotifier;	// IMP=0x00000000000039d3
- (_Bool)startNotifier;	// IMP=0x00000000000037af
- (id)init;	// IMP=0x00000000000035ce

@end

