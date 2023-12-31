//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLScopedIdentifier;
@protocol NSFastEnumeration;

@protocol CPLEngineRevertRecordsImplementation <CPLEngineStorageImplementation>
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)shouldRevertRecordWithLocalScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (_Bool)deleteRecordsToRevertWithLocalScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id *)arg2;
- (id <NSFastEnumeration>)revertedPlaceholderRecordsEnumerator;
- (_Bool)addRecordsToRevertWithLocalScopedIdentifier:(CPLScopedIdentifier *)arg1 class:(Class)arg2 error:(id *)arg3;
@end

