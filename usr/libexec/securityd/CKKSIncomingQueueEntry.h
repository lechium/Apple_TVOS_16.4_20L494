//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSItem, NSString;

@interface CKKSIncomingQueueEntry
{
    CKKSItem *_item;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
}

+ (_Bool)allIQEsHaveValidUnwrappingKeysInContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x004000000006f645
+ (id)countNewEntriesByKeyWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006f3d3
+ (long long)countByState:(id)arg1 contextID:(id)arg2 zone:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006f115
+ (id)countsByStateWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006eec5
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000006ed9b
+ (id)sqlColumns;	// IMP=0x001000000006ed3d
+ (id)sqlTable;	// IMP=0x001000000006ed30
+ (id)fetch:(long long)arg1 startingAtUUID:(id)arg2 state:(id)arg3 action:(id)arg4 contextID:(id)arg5 zoneID:(id)arg6 error:(id *)arg7;	// IMP=0x001000000006ea35
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006e817
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006e5f9
- (void).cxx_destruct;	// IMP=0x002000000006e5b7
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (id)sqlValues;	// IMP=0x001000000006e44a
- (id)whereClauseToFindSelf;	// IMP=0x001000000006e2bd
@property(retain) NSString *uuid;
@property(readonly) NSString *contextID;
- (id);	// IMP=0x001000000006e0e5
- (id)description;	// IMP=0x001000000006df34

@end

