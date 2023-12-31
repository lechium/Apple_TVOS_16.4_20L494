//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface _CPLCloudKitDownloadGroup : NSObject
{
    NSMutableDictionary *_tasks;	// 8 = 0x8
    NSMutableDictionary *_resourceSizes;	// 16 = 0x10
    NSMutableDictionary *_downloadedSizes;	// 24 = 0x18
    NSMutableSet *_sourceBundleIdentifiers;	// 32 = 0x20
    _Bool _mainBundleIdentifierIsDefault;	// 40 = 0x28
    unsigned long long _downloadSize;	// 48 = 0x30
    unsigned long long _maxDownloadSize;	// 56 = 0x38
    _Bool _highPriority;	// 64 = 0x40
    unsigned long long _resourceType;	// 72 = 0x48
    NSString *_mainSourceBundleIdentifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000010fc7d
@property(readonly, nonatomic) NSString *mainSourceBundleIdentifier; // @synthesize mainSourceBundleIdentifier=_mainSourceBundleIdentifier;
@property(readonly, nonatomic, getter=isHighPriority) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(readonly, nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)description;	// IMP=0x001000000010fb48
@property(readonly, nonatomic) NSString *resourceTypeDescription;
- (id)propertyKeys;	// IMP=0x001000000010fb08
- (id)cloudResourceForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000010fa8a
- (void)enumerateRecordScopedIdentifiersAndTasksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000010f986
@property(readonly, nonatomic) NSArray *recordScopedIdentifiers;
@property(readonly, nonatomic) _Bool shouldBoostPriority;
@property(readonly, nonatomic) double downloadProgress;
@property(readonly, nonatomic) NSArray *allSourceBundleIdentifiers;
@property(readonly, nonatomic) unsigned long long countOfDownloadTasks;
@property(readonly, nonatomic) _Bool hasDownloadTasks;
- (_Bool)cancelDownloadTask:(id)arg1;	// IMP=0x001000000010f4d2
- (void)allDownloadsDidFailWithError:(id)arg1;	// IMP=0x001000000010f2c2
- (void)resourceWithRecordScopedIdentifier:(id)arg1 didFailToDownloadWithError:(id)arg2;	// IMP=0x001000000010f0b0
- (void)resourceWithRecordScopedIdentifier:(id)arg1 didDownloadCKAsset:(id)arg2 withOperationType:(long long)arg3 transcoderVersion:(long long)arg4 withFingerPrint:(id)arg5 andFileUTI:(id)arg6;	// IMP=0x001000000010e36a
- (void)resourceWithRecordScopedIdentifier:(id)arg1 didProgress:(double)arg2;	// IMP=0x001000000010e105
- (void)resourceWithRecordScopedIdentifierDidStart:(id)arg1 operationID:(id)arg2;	// IMP=0x001000000010df4f
- (void)allDownloadsDidStartWithOperationID:(id)arg1;	// IMP=0x001000000010ddf0
- (_Bool)addDownloadTask:(id)arg1;	// IMP=0x001000000010d9d0
- (id)initWithResourceType:(unsigned long long)arg1;	// IMP=0x001000000010d903

@end

