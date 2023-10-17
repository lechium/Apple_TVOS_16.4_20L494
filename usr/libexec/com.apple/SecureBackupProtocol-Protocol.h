//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSSet, NSString, OTEscrowRecord, OTICDPRecordContext, SecureBackup, SecureBackupEscrowReason;

@protocol SecureBackupProtocol <NSObject>
- (void)getCertificatesWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSData *, NSData *, NSError *))arg2;
- (void)createICDPRecordWithRequest:(SecureBackup *)arg1 recordContents:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)recoverRecordContentsWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)beginHSA2PasscodeRequest:(SecureBackup *)arg1 desirePasscodeImmediately:(_Bool)arg2 uuid:(NSString *)arg3 reason:(SecureBackupEscrowReason *)arg4 reply:(void (^)(SecureBackupBeginPasscodeRequestResults *, NSError *))arg5;
- (void)prepareHSA2EscrowRecordContents:(SecureBackup *)arg1 usesComplexPassphrase:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)stateCaptureWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)backupWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)notificationInfoWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)uncachePassphraseWithRequestAsync:(SecureBackup *)arg1;
- (void)cachePassphraseWithRequestAsync:(SecureBackup *)arg1;
- (void)setBackOffDateWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)backOffDateWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getCountrySMSCodesWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)startSMSChallengeWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)changeSMSTargetWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)uncacheRecoveryKeyWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)cacheRecoveryKeyWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)uncachePassphraseWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)cachePassphraseWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)updateMetadataWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)disableWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)stashRecoveryDataWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)restoreKeychainWithBackupPasswordInDaemon:(NSData *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)restoreKeychainAsyncWithPasswordInDaemon:(NSData *)arg1 keybagDigest:(NSData *)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(NSSet *)arg4 reply:(void (^)(NSError *))arg5;
- (void)isRecoveryKeySetInDaemon:(void (^)(_Bool, NSError *))arg1;
- (void)recoverSilentWithCDPContextInDaemon:(OTICDPRecordContext *)arg1 allRecords:(NSArray *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)recoverWithCDPContextInDaemon:(OTICDPRecordContext *)arg1 escrowRecord:(OTEscrowRecord *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)recoverWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)enableWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getAccountInfoWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

