//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@class NSData;
@protocol CKRecordKeyValueSetting, NSSecureCoding;

@interface CKRecord (SafariCoreExtras)
- (id)safari_referenceForKey:(id)arg1;	// IMP=0x003000000002f818
- (id)safari_encryptedDataForKey:(id)arg1;	// IMP=0x003000000002f795
- (id)safari_arrayForKey:(id)arg1;	// IMP=0x003000000002f73e
- (id)safari_dateForKey:(id)arg1;	// IMP=0x003000000002f6e7
- (id)safari_dataForKey:(id)arg1;	// IMP=0x003000000002f690
- (id)safari_numberForKey:(id)arg1;	// IMP=0x003000000002f639
- (id)safari_stringForKey:(id)arg1;	// IMP=0x003000000002f5e2
- (_Bool)safari_boolForKey:(id)arg1;	// IMP=0x003000000002f59e
@property(readonly, copy, nonatomic) id <CKRecordKeyValueSetting> safari_encryptedValues;
@property(readonly, nonatomic) _Bool safari_hasAtLeastOneChangedField;
@property(readonly, nonatomic) NSData *safari_encodedSystemFieldsData;
- (id)safari_initWithEncodedRecordData:(id)arg1;	// IMP=0x003000000002f309
@property(readonly, nonatomic) id <NSSecureCoding> safari_systemFieldsEncoder;
@end

