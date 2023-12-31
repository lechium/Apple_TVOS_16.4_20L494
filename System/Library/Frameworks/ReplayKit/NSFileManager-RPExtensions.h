//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (RPExtensions)
- (_Bool)_srDeviceHasSufficientSpaceForCurrentRecording;	// IMP=0x0060000000004eaf
- (unsigned long long)_srDeviceFreeDiskSpace;	// IMP=0x0060000000004de3
- (_Bool)_srDeviceHasSufficientFreeSpaceForRecording;	// IMP=0x0060000000004dc7
- (id)_srGetCreationDateForFile:(id)arg1;	// IMP=0x0060000000004cf8
- (void)_srDeleteFilesWithPrefix:(id)arg1;	// IMP=0x00600000000048a1
- (void)_srMoveFileFromURL:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0060000000004638
- (void)_srRemoveFile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000004422
- (long long)_srDeleteFilesOlderThanTimeToLiveInSeconds:(double)arg1;	// IMP=0x0060000000003ebe
- (long long)_srDeleteAllTempFiles;	// IMP=0x0060000000003ea9
- (long long)_srSizeOfTempDir:(id *)arg1;	// IMP=0x0060000000003e01
- (id)trimmedOutputPath:(id)arg1;	// IMP=0x0060000000003d1a
- (id)outputPath:(int)arg1 bundleID:(id)arg2;	// IMP=0x0060000000003b45
- (id)dateSuffix;	// IMP=0x0060000000003a81
- (void)_srSetupTempDirectory;	// IMP=0x0060000000003950
- (id)_srTempPath;	// IMP=0x0060000000003937
@end

