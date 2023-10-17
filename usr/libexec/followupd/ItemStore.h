//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLSQLiteExecutor;

@interface ItemStore : NSObject
{
    FLSQLiteExecutor *_queryExecutor;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000000585c
- (void).cxx_destruct;	// IMP=0x002000000000a0db
@property(retain, nonatomic) FLSQLiteExecutor *queryExecutor; // @synthesize queryExecutor=_queryExecutor;
- (void)_wipeDatabase;	// IMP=0x001000000000a0aa
- (void)_closeDatabase;	// IMP=0x001000000000a094
- (void)_openDatabase;	// IMP=0x001000000000a07c
- (double)intervalFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000000a06d
- (id)dateFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000000a027
- (id)dataFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x0010000000009fbe
- (id)urlFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x0010000000009f5e
- (id)stringFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x0010000000009f1f
- (void)_unsafeSelectFollowUpActionsForItem:(id)arg1 orActionID:(long long)arg2 rowHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009b18
- (id)_unsafeSelectNotificationForFollowUpItem:(id)arg1;	// IMP=0x00100000000094f1
- (void)_unsafeSelectFollowUpNotificationsWithRowHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008fc9
- (void)_unsafeSelectFollowUpItemsWithUniqueIdentifiers:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000084c5
- (id)safeSelectFollowUpItemsWithUniqueIdentifiers:(id)arg1;	// IMP=0x00100000000081f4
- (id)safeSelectFollowUpNotifications;	// IMP=0x0010000000008037
- (id)safeSelectFollowUpActions;	// IMP=0x0010000000007de7
- (_Bool)_unsafe_deleteActionWithID:(long long)arg1;	// IMP=0x0010000000007cc5
- (_Bool)deleteNotificationForFollowUpItem:(id)arg1;	// IMP=0x00100000000079ed
- (_Bool)updateNotificationForFollowUpItem:(id)arg1;	// IMP=0x00100000000078c9
- (_Bool)deleteFollowUpItem:(id)arg1;	// IMP=0x00100000000075de
- (long long)_unsafe_insertNotificationForItem:(id)arg1;	// IMP=0x0010000000006bd2
- (long long)_unsafe_insertAction:(id)arg1 item:(id)arg2;	// IMP=0x00100000000067f4
- (long long)_unsafe_insertFollowUpItem:(id)arg1;	// IMP=0x0010000000005dc6
- (_Bool)insertFollowUpItem:(id)arg1;	// IMP=0x0010000000005955
- (id)allFollowUpItems;	// IMP=0x0010000000005941

@end
