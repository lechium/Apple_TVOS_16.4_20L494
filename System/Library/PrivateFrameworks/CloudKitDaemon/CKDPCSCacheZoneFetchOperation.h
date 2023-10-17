//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation
{
    _Bool _shouldCreateZoneishPCS;	// 8 = 0x8
    _Bool _rolledPCSForZone;	// 9 = 0x9
}

@property(nonatomic) _Bool rolledPCSForZone; // @synthesize rolledPCSForZone=_rolledPCSForZone;
@property(nonatomic) _Bool shouldCreateZoneishPCS; // @synthesize shouldCreateZoneishPCS=_shouldCreateZoneishPCS;
- (_Bool)_savePCSDataToCache;	// IMP=0x0000000000083145
- (_Bool)_saveUpdatedPCSToServer;	// IMP=0x0000000000082b68
- (_Bool)_checkAndUpdateZonePCSIfNeeded;	// IMP=0x0000000000081838
- (void)_handleDecryptedZonePCSData:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000080f28
- (void)_decryptZonePCSUsingServiceIdentities;	// IMP=0x0000000000080c19
- (void)_decryptZonePCSInSharedDatabase;	// IMP=0x00000000000807f8
- (_Bool)_decryptPCS;	// IMP=0x000000000008067f
- (_Bool)_createAdditionalPCS;	// IMP=0x0000000000080647
- (_Bool)_fetchPCSDataFromServer;	// IMP=0x000000000007fe85
- (void)_saveNewPCSOnZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f29a
- (void)_saveZoneToServer:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 zoneishPCS:(struct _OpaquePCSShareProtection *)arg3 previousEtag:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000007ee19
- (void)_saveZoneToServer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007e529
- (void)_fetchDepedentPCSInSharedDatabase;	// IMP=0x000000000007df88
- (_Bool)_fetchDependentPCS;	// IMP=0x000000000007de94
- (_Bool)_fetchPCSDataFromDatabase;	// IMP=0x000000000007d656
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;	// IMP=0x000000000007d2ad
- (void)_willRetryFetch;	// IMP=0x000000000007d268
- (_Bool)hasAllPCSData;	// IMP=0x000000000007d1ea
@property(readonly, nonatomic) _Bool needsZoneishPCS;
- (id)itemTypeName;	// IMP=0x000000000007d14b
@property(retain, nonatomic) CKDZonePCSData *zonePCSData;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;

@end

