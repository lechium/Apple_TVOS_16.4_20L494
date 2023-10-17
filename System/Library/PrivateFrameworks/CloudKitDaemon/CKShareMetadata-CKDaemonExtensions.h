//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShareMetadata.h>

@interface CKShareMetadata (CKDaemonExtensions)
- (void)_decryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x007000000001cf83
- (void)_encryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x007000000001cdb9
- (_Bool)hasEncryptedData;	// IMP=0x007000000001cd86
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg1;	// IMP=0x00700000002caa6f
- (struct _OpaquePCSShareProtection *)publicPCS;	// IMP=0x00700000002caa5e
@end
