//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation
{
}

- (_Bool)_savePCSDataToCache;	// IMP=0x00000000002b667a
- (_Bool)_decryptPCS;	// IMP=0x00000000002b6672
- (_Bool)_fetchPCSDataFromServer;	// IMP=0x00000000002b63b1
- (_Bool)_fetchPCSDataFromDatabase;	// IMP=0x00000000002b5aa4
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;	// IMP=0x00000000002b573f
- (_Bool)hasAllPCSData;	// IMP=0x00000000002b56f7
- (id)itemTypeName;	// IMP=0x00000000002b56ea
@property(retain, nonatomic) CKDSharePCSData *sharePCSData;
@property(readonly, nonatomic) CKRecordID *shareID;

@end

