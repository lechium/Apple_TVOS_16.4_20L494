//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class HMAddAccessoryRequest, HMHome, HMHomeManager;

@protocol HMHomeManagerDelegate <NSObject>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didReceiveAddAccessoryRequest:(HMAddAccessoryRequest *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didRemoveHome:(HMHome *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didAddHome:(HMHome *)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateHomes:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
@end

