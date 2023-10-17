//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray, NSString;

@interface DownloadEntity : SSSQLiteEntity
{
}

+ (void)initialize;	// IMP=0x004000000002eb3e
+ (Class)memoryEntityClass;	// IMP=0x001000000002e4b6
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x001000000002e49d
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x001000000002e484
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x001000000002e473
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x001000000002e45a
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x001000000002e441
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x001000000002e39e
+ (id)databaseTable;	// IMP=0x001000000002e391
+ (id)databasePropertyToSetClientProperty:(id)arg1;	// IMP=0x001000000002e304
+ (id)databasePropertyToGetClientProperty:(id)arg1;	// IMP=0x001000000002e2eb
+ (id)copyValueDictionaryWithMetadata:(id)arg1;	// IMP=0x001000000002b261
- (_Bool)_shouldSuppressDialogForError:(id)arg1;	// IMP=0x002000000002eb22
- (void)_resetAssetProperty:(id)arg1;	// IMP=0x001000000002e985
- (void)_deleteTransaction;	// IMP=0x001000000002e8cb
- (id)_databaseAssetForAsset:(id)arg1;	// IMP=0x001000000002e68e
- (void)deleteScratchDirectory;	// IMP=0x001000000002e5c7
- (_Bool)deleteFromDatabase;	// IMP=0x001000000002e4c7
- (id)setAssetsUsingDownload:(id)arg1;	// IMP=0x001000000002dc47
- (id)retryDownload;	// IMP=0x001000000002daec
- (void)resetAssetURLs;	// IMP=0x001000000002dad0
- (void)resetAssetLocalPaths;	// IMP=0x001000000002dab4
- (id)rentalInformation;	// IMP=0x001000000002d713
@property(readonly, nonatomic) NSString *ITunesSafeGUID;
@property(readonly, nonatomic) unsigned long long itemIdentifier;
- (id)finishWithFinalPhase:(id)arg1;	// IMP=0x001000000002ccd7
- (id)failWithError:(id)arg1;	// IMP=0x001000000002c648
@property(readonly, nonatomic) NSString *downloadKind;
- (id)copyStoreDownloadMetadata;	// IMP=0x001000000002c4f3
- (id)copyDownloadingIPodLibraryItem;	// IMP=0x001000000002c270
- (id)copyAssetsWithAssetType:(id)arg1;	// IMP=0x001000000002bf94
- (id)copyAdditionalMetadataForStoreDownload:(id)arg1;	// IMP=0x001000000002bccd
- (id)anyAssetForAssetType:(id)arg1;	// IMP=0x001000000002bb6b
@property(readonly, nonatomic) NSArray *allAssetCookies;
- (long long)addPersistentDownloadsWithClientID:(id)arg1 kind:(id)arg2;	// IMP=0x001000000002b2af

@end

