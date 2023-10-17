//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (SecureBackup)
- (id)peerIDForKeybagDigest:(id)arg1;	// IMP=0x0010000000015723
- (id)backupKeyDigests;	// IMP=0x001000000001562e
- (id)peersAndBackupKeyDigests;	// IMP=0x001000000001550e
- (id)recoveryKey;	// IMP=0x00100000000154b9
- (id)peerIDs;	// IMP=0x0010000000015246
- (id)sha1Digest;	// IMP=0x00100000000151c8
- (id)hexString;	// IMP=0x00100000000150d0
- (void)enumeratePeersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014f72
- (id)bskb;	// IMP=0x0010000000014f02
@end
