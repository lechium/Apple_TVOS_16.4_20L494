//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface PersistentDownloadManagerEntity : SSSQLiteEntity
{
}

+ (void)initialize;	// IMP=0x00400000000c92b5
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00100000000c929c
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00100000000c928f
+ (id)databaseTable;	// IMP=0x00100000000c9282
- (void)performNewsstandMigration1InDatabase:(id)arg1;	// IMP=0x00400000000c8ce8
- (id)finishPersistentDownloadsWithDownloadIDs:(id)arg1;	// IMP=0x00100000000c8329

@end

