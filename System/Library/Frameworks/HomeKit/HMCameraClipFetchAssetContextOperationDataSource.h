//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject
{
}

- (id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000080873
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000807f2
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008075b
- (id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000806bd
- (id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(_Bool)arg2;	// IMP=0x00000000000806a4
- (_Bool)writeData:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008068a
- (id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;	// IMP=0x0000000000080675
- (id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;	// IMP=0x0000000000080605

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

