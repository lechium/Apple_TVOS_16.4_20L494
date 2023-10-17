//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PFCloudKitExporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitExportContext : NSObject
{
    PFCloudKitExporterOptions *_options;	// 8 = 0x8
    unsigned long long _totalBytes;	// 16 = 0x10
    unsigned long long _totalRecords;	// 24 = 0x18
    unsigned long long _totalRecordIDs;	// 32 = 0x20
    NSMutableArray *_writtenAssetURLs;	// 40 = 0x28
}

- (_Bool)checkForObjectsNeedingExportInStore:(id)arg1 andReturnCount:(unsigned long long *)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000282760
- (_Bool)processAnalyzedHistoryInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027bef2
- (void)dealloc;	// IMP=0x000000000027be99
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000027be2a

@end

