//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSItem, NSDate, NSString;

@interface CKKSOutgoingQueueEntry
{
    CKKSItem *_item;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSString *_accessgroup;	// 32 = 0x20
    NSDate *_waitUntil;	// 40 = 0x28
}

+ (long long)countByState:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x004000000006db2d
+ (id)countsByStateWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006d8dd
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000006d72d
+ (id)sqlColumns;	// IMP=0x001000000006d6cf
+ (id)sqlTable;	// IMP=0x001000000006d6c2
+ (id)allWithUUID:(id)arg1 states:(id)arg2 contextID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000006d43c
+ (id)allInState:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006d21e
+ (id)fetch:(long long)arg1 state:(id)arg2 contextID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000006cfee
+ (id)tryFromDatabase:(id)arg1 state:(id)arg2 contextID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000006cd37
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006cb19
+ (id)fromDatabase:(id)arg1 state:(id)arg2 contextID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000006c862
+ (id)withItem:(struct SecDbItem *)arg1 action:(id)arg2 contextID:(id)arg3 zoneID:(id)arg4 keyCache:(id)arg5 error:(id *)arg6;	// IMP=0x001000000006b17f
+ (id)keyForItem:(struct SecDbItem *)arg1 contextID:(id)arg2 zoneID:(id)arg3 keyCache:(id)arg4 error:(id *)arg5;	// IMP=0x001000000006abeb
- (void).cxx_destruct;	// IMP=0x002000000006ab87
@property(retain) NSDate *waitUntil; // @synthesize waitUntil=_waitUntil;
@property(retain) NSString *accessgroup; // @synthesize accessgroup=_accessgroup;
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (_Bool)intransactionMarkAsError:(id)arg1 viewState:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006a8bd
- (_Bool)intransactionMoveToState:(id)arg1 viewState:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006a11f
- (id)sqlValues;	// IMP=0x0010000000069f34
- (id)whereClauseToFindSelf;	// IMP=0x0010000000069d4f
@property(retain) NSString *uuid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000069952
@property(readonly) NSString *contextID;
- (id)initWithCKKSItem:(id)arg1 action:(id)arg2 state:(id)arg3 waitUntil:(id)arg4 accessGroup:(id)arg5;	// IMP=0x00100000000697e6
- (id)description;	// IMP=0x0010000000069655

@end

