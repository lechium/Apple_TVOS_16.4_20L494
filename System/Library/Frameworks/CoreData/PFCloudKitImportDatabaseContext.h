//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, NSMutableSet;

__attribute__((visibility("hidden")))
@interface PFCloudKitImportDatabaseContext : NSObject
{
    NSMutableSet *_changedRecordZoneIDs;	// 8 = 0x8
    NSMutableSet *_deletedRecordZoneIDs;	// 16 = 0x10
    NSMutableSet *_purgedRecordZoneIDs;	// 24 = 0x18
    NSMutableSet *_userResetEncryptedDataZoneIDs;	// 32 = 0x20
    CKServerChangeToken *_updatedChangeToken;	// 40 = 0x28
}

- (id)description;	// IMP=0x000000000023db65
- (void)dealloc;	// IMP=0x000000000023daeb
- (id)init;	// IMP=0x000000000023da67

@end

