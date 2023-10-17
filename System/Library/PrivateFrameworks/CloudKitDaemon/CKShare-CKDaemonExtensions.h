//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShare.h>

@interface CKShare (CKDaemonExtensions)
- (void)_prepPCSDataWithContainer:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(_Bool)arg4 containerID:(id)arg5 sharedRecordZone:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x006000000001aea3
- (void)_prepPCSDataUsingPreDecryptedPCSOnlyWithContainer:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x006000000001aa9b
- (void)_prepPCSDataWithContainer:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(_Bool)arg4 containerID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x006000000001aa78
- (void)_ingestAndExportPPPCSFromShareInvitationToken:(id)arg1 shareModificationDate:(id)arg2 container:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x006000000001a651
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x006000000001a480
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x006000000001a2af
- (_Bool)hasEncryptedPersonalInfo;	// IMP=0x006000000001a176
- (void)setSharePCSData:(id)arg1;	// IMP=0x00600000002caa4a
- (void)setSharePCSData:(id)arg1 isUnitTestAccount:(_Bool)arg2;	// IMP=0x00600000002ca872
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg1;	// IMP=0x00600000002ca85c
- (struct _OpaquePCSShareProtection *)publicPCS;	// IMP=0x00600000002ca84b
- (void)setPrivatePCS:(struct _OpaquePCSShareProtection *)arg1;	// IMP=0x00600000002ca835
- (struct _OpaquePCSShareProtection *)privatePCS;	// IMP=0x00600000002ca824
@end

