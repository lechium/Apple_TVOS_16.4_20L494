//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (PKAdditions)
+ (id)pk_recordWithSystemFieldsData:(id)arg1;	// IMP=0x006000000021c8b5
- (id)pk_systemFieldsData;	// IMP=0x001000000021c960
- (_Bool)pk_isRemoteAsset;	// IMP=0x001000000021c820
- (_Bool)pk_isPassCatalog;	// IMP=0x001000000021c78b
- (_Bool)pk_isPass;	// IMP=0x001000000021c6f6
- (id)_dictionaryFromStringValue:(id)arg1;	// IMP=0x001000000021c5ad
- (id)_arrayFromStringValue:(id)arg1;	// IMP=0x001000000021c464
- (id)_copyArray:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x001000000021c21c
- (id)_copyReference:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x001000000021c0f6
- (id)pk_share;	// IMP=0x001000000021c0b7
- (id)pk_participantWithLookupInfo:(id)arg1;	// IMP=0x001000000021be6d
- (id)pk_participantWithPhoneNumber:(id)arg1;	// IMP=0x001000000021bde3
- (id)pk_participantWithEmailAddress:(id)arg1;	// IMP=0x001000000021bd59
- (id)pk_participantWithRecipientHandle:(id)arg1;	// IMP=0x001000000021bcdd
- (id)pk_copyRecordForNewRecordZone:(id)arg1;	// IMP=0x001000000021b76c
- (unsigned long long)pk_hash;	// IMP=0x001000000021b225
- (id)description;	// IMP=0x001000000021b1c2
- (id)pk_description;	// IMP=0x001000000021abb1
- (id)pk_objectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x001000000021aa6e
- (id)pk_referenceForKey:(id)arg1;	// IMP=0x001000000021aa0a
- (unsigned long long)pk_unsignedIntegerForKey:(id)arg1;	// IMP=0x001000000021a9bd
- (unsigned long long)pk_uint64ForKey:(id)arg1;	// IMP=0x001000000021a970
- (int)pk_intForKey:(id)arg1;	// IMP=0x001000000021a923
- (long long)pk_integerForKey:(id)arg1;	// IMP=0x001000000021a8d6
- (_Bool)pk_boolForKey:(id)arg1;	// IMP=0x001000000021a889
- (id)pk_arrayForKey:(id)arg1;	// IMP=0x001000000021a718
- (id)pk_dictionaryForKey:(id)arg1;	// IMP=0x001000000021a6b9
- (id)pk_urlForKey:(id)arg1;	// IMP=0x001000000021a659
- (id)pk_decimalNumberForKey:(id)arg1;	// IMP=0x001000000021a5f9
- (id)pk_locationForKey:(id)arg1;	// IMP=0x001000000021a595
- (id)pk_dataForKey:(id)arg1;	// IMP=0x001000000021a531
- (id)pk_dateForKey:(id)arg1;	// IMP=0x001000000021a4cd
- (id)pk_numberForKey:(id)arg1;	// IMP=0x001000000021a469
- (id)pk_stringForKey:(id)arg1;	// IMP=0x001000000021a405
- (id)pk_encryptedObjectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x001000000021a29d
- (unsigned long long)pk_encryptedUnsignedIntegerForKey:(id)arg1;	// IMP=0x001000000021a250
- (unsigned long long)pk_encryptedUint64ForKey:(id)arg1;	// IMP=0x001000000021a203
- (int)pk_encryptedIntForKey:(id)arg1;	// IMP=0x001000000021a1b6
- (long long)pk_encryptedIntegerForKey:(id)arg1;	// IMP=0x001000000021a169
- (_Bool)pk_encryptedBoolForKey:(id)arg1;	// IMP=0x001000000021a11c
- (id)pk_encryptedArrayOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000219d70
- (id)pk_encryptedDictionaryForKey:(id)arg1;	// IMP=0x0010000000219d11
- (id)pk_encryptedUrlForKey:(id)arg1;	// IMP=0x0010000000219cb1
- (id)pk_encryptedDecimalNumberForKey:(id)arg1;	// IMP=0x0010000000219c51
- (id)pk_encryptedLocationForKey:(id)arg1;	// IMP=0x0010000000219bed
- (id)pk_encryptedDataForKey:(id)arg1;	// IMP=0x0010000000219b89
- (id)pk_encryptedDateForKey:(id)arg1;	// IMP=0x0010000000219b25
- (id)pk_encryptedNumberForKey:(id)arg1;	// IMP=0x0010000000219ac1
- (id)pk_encryptedUUIDForKey:(id)arg1;	// IMP=0x0010000000219a5d
- (id)pk_encryptedStringForKey:(id)arg1;	// IMP=0x00100000002199f9
@end

