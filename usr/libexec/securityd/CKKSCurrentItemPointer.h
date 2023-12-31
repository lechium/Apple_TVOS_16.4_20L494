//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SecCKKSProcessedState;

@interface CKKSCurrentItemPointer
{
    NSString<SecCKKSProcessedState> *_state;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_currentItemUUID;	// 24 = 0x18
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x004000000009ca26
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000009c26c
+ (long long)countByState:(id)arg1 contextID:(id)arg2 zone:(id)arg3 error:(id *)arg4;	// IMP=0x001000000009bfae
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000009bd65
+ (id)sqlColumns;	// IMP=0x001000000009bd58
+ (id)sqlTable;	// IMP=0x001000000009bd4b
+ (_Bool)deleteAll:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009bc35
+ (id)allInZone:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009bb5b
+ (id)remoteItemPointers:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009ba61
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000009b8f3
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000009b785
- (void).cxx_destruct;	// IMP=0x002000000009b743
@property(retain) NSString *currentItemUUID; // @synthesize currentItemUUID=_currentItemUUID;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
- (id)sqlValues;	// IMP=0x001000000009b3a4
- (id)whereClauseToFindSelf;	// IMP=0x001000000009b202
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000009b003
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x001000000009ae54
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000009ab1a
- (id)CKRecordName;	// IMP=0x001000000009ab08
- (id)description;	// IMP=0x001000000009a9fc
- (id)initForIdentifier:(id)arg1 contextID:(id)arg2 currentItemUUID:(id)arg3 state:(id)arg4 zoneID:(id)arg5 encodedCKRecord:(id)arg6;	// IMP=0x001000000009a91b

@end

