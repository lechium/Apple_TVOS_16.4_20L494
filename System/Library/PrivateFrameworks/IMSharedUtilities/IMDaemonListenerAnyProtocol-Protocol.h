//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSString;

@protocol IMDaemonListenerAnyProtocol <NSObject>
- (void)didFetchCloudKitSyncDebuggingInfo:(NSDictionary *)arg1;
- (void)didAttemptToDisableiCloudBackups:(long long)arg1 error:(NSError *)arg2;
- (void)didFetchRampState:(NSDictionary *)arg1;
- (void)didFetchSyncStateStats:(NSDictionary *)arg1;
- (void)oneTimeCodesDidChange:(NSArray *)arg1;
- (void)stickerPackRemoved:(NSArray *)arg1;
- (void)stickerPackUpdated:(NSDictionary *)arg1;
- (void)fileTransfer:(NSString *)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)fileTransfers:(NSArray *)arg1 createdWithLocalPaths:(NSArray *)arg2;
- (void)fileTransfer:(NSString *)arg1 updatedWithProperties:(NSDictionary *)arg2;
- (void)fileTransfer:(NSString *)arg1 createdWithProperties:(NSDictionary *)arg2;
- (void)persistentProperty:(NSString *)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)property:(NSString *)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)networkDataAvailabilityChanged:(_Bool)arg1;
- (void)newSetupInfoAvailable;
@end

