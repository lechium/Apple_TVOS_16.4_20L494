//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CKKSEgoManifestLeafRecord
{
}

+ (id)newLeafRecordInZone:(id)arg1;	// IMP=0x004000000005ecf0
- (void)deleteItemWithUUID:(id)arg1;	// IMP=0x002000000005ef13
- (void)addOrUpdateRecord:(id)arg1;	// IMP=0x001000000005ee56
- (void)addOrUpdateRecordUUID:(id)arg1 withEncryptedItemData:(id)arg2;	// IMP=0x001000000005ed9d

// Remaining properties
@property(readonly, nonatomic) NSMutableDictionary *recordDigestDict; // @dynamic recordDigestDict;

@end

