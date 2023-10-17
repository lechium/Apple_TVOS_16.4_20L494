//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TimeSync/NSObject-Protocol.h>

@class TSgPTPNetworkPort;

@protocol TSgPTPNetworkPortClient <NSObject>

@optional
- (void)didTerminateServiceForPort:(TSgPTPNetworkPort *)arg1;
- (void)didSyncTimeoutWithMean:(long long)arg1 median:(long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(long long)arg4 maximum:(long long)arg5 numberOfSamples:(unsigned int)arg6 forPort:(TSgPTPNetworkPort *)arg7;
- (void)didSyncTimeoutForPort:(TSgPTPNetworkPort *)arg1;
- (void)didAnnounceTimeoutForPort:(TSgPTPNetworkPort *)arg1;
- (void)didTimeoutOnMACLookupForPort:(TSgPTPNetworkPort *)arg1;
- (void)didChangeAdministrativeEnable:(_Bool)arg1 forPort:(TSgPTPNetworkPort *)arg2;
- (void)didChangeASCapable:(_Bool)arg1 forPort:(TSgPTPNetworkPort *)arg2;
@end

