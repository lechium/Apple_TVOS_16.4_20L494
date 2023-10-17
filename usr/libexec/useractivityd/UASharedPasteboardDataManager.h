//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UASharedPasteboardDataManager : NSObject
{
    NSString *_currentLocalBlobPath;	// 8 = 0x8
    NSString *_currentRemoteBlobPath;	// 16 = 0x10
    NSMutableDictionary *_tmpArchiveWriteFiles;	// 24 = 0x18
    NSMutableDictionary *_lockTokens;	// 32 = 0x20
    NSMutableDictionary *_providers;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x004000000000e690
- (void).cxx_destruct;	// IMP=0x0020000000012433
@property(retain) NSMutableDictionary *providers; // @synthesize providers=_providers;
@property(retain) NSMutableDictionary *lockTokens; // @synthesize lockTokens=_lockTokens;
@property(retain) NSMutableDictionary *tmpArchiveWriteFiles; // @synthesize tmpArchiveWriteFiles=_tmpArchiveWriteFiles;
@property(retain) NSString *currentRemoteBlobPath; // @synthesize currentRemoteBlobPath=_currentRemoteBlobPath;
@property(retain) NSString *currentLocalBlobPath; // @synthesize currentLocalBlobPath=_currentLocalBlobPath;
- (void)cleanupCloneDir;	// IMP=0x0010000000011d09
- (void)cleanupItemsDir;	// IMP=0x00100000000115bb
- (void)cleanupArchiveDir;	// IMP=0x00100000000111cf
- (void)cleanupForItem:(id)arg1;	// IMP=0x0010000000010bbf
- (void)cancelAllLocks;	// IMP=0x0010000000010940
- (void)releaseLockForItem:(id)arg1;	// IMP=0x001000000001092c
- (void)releaseLockForItem:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000106ec
- (void)obtainLockForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010539
- (void)finishWritingArchiveForUUID:(id)arg1;	// IMP=0x00100000000102e6
- (void)writeArchiveData:(id)arg1 forItem:(id)arg2;	// IMP=0x00100000000100ef
- (_Bool)createTmpArchiveFileWithUUID:(id)arg1;	// IMP=0x001000000000ffea
- (id)readHandleForArchiveWithUUID:(id)arg1;	// IMP=0x001000000000ff66
- (id)fileURLForArchiveWithUUID:(id)arg1;	// IMP=0x001000000000fe6f
- (id)fileURLForPasteboardItem:(id)arg1;	// IMP=0x001000000000fdc1
- (id)fileURLForCloneItems;	// IMP=0x001000000000fb87
- (id)subDirForItem:(id)arg1;	// IMP=0x001000000000fb18
- (id)remotePasteboardBlobForReading;	// IMP=0x001000000000fa87
- (id)createFileForRemotePasteboardBlob;	// IMP=0x001000000000f6de
- (id)localPasteboardBlobForReading;	// IMP=0x001000000000f64d
- (id)createFileForLocalPasteboardBlob;	// IMP=0x001000000000f2a4
- (id)createFolderAtPath:(id)arg1;	// IMP=0x001000000000f0e2
- (_Bool)directoryExistsAtPath:(id)arg1;	// IMP=0x001000000000f017
- (id)createFileForUUID:(id)arg1 inSubFolder:(id)arg2;	// IMP=0x001000000000ebc5
- (id)createFileForUUID:(id)arg1;	// IMP=0x001000000000ebb1
- (_Bool)fileExistsForUUID:(id)arg1 inSubFolder:(id)arg2;	// IMP=0x001000000000eaa3
- (id)createSharedDataDirectory;	// IMP=0x001000000000e94d
- (id)sharedDataPath;	// IMP=0x001000000000e85c
- (id)init;	// IMP=0x001000000000e6e5

@end

