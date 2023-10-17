//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, RDEstimate;

@protocol RDXPCProtocol
- (void)createCacheDirAtPath:(NSString *)arg1;
- (void)ping;
- (void)clearStatusSharedWithPeers;
- (void)shareStatusWithPeers;
- (void)clearDataCache;
- (void)updatePeer:(NSString *)arg1 withCountryCode:(NSString *)arg2 priority:(int)arg3 andTimestamp:(NSDate *)arg4;
- (void)updatePeer:(NSString *)arg1 withEstimate:(RDEstimate *)arg2;
- (void)update:(long long)arg1 withCountryCode:(NSString *)arg2;
@end

