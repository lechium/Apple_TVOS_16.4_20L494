//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIAssetGroup : NSObject
{
    _Bool _manifestDirty;	// 8 = 0x8
    long long _groupType;	// 16 = 0x10
    NSString *_cachePath;	// 24 = 0x18
    unsigned long long _maxCacheSize;	// 32 = 0x20
    unsigned long long _pruneCount;	// 40 = 0x28
    unsigned long long _currentCacheSize;	// 48 = 0x30
    NSMutableDictionary *_cacheRecords;	// 56 = 0x38
    NSMutableDictionary *_assetKeysByTag;	// 64 = 0x40
    NSMutableDictionary *_manifest;	// 72 = 0x48
}

+ (id)_humanReadableStringForGroupType:(long long)arg1;	// IMP=0x0060000000025d78
- (void).cxx_destruct;	// IMP=0x0000000000025ebc
@property(nonatomic, getter=isManifestDirty) _Bool manifestDirty; // @synthesize manifestDirty=_manifestDirty;
@property(retain, nonatomic) NSMutableDictionary *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSMutableDictionary *assetKeysByTag; // @synthesize assetKeysByTag=_assetKeysByTag;
@property(retain, nonatomic) NSMutableDictionary *cacheRecords; // @synthesize cacheRecords=_cacheRecords;
@property(nonatomic) unsigned long long currentCacheSize; // @synthesize currentCacheSize=_currentCacheSize;
@property(nonatomic) unsigned long long pruneCount; // @synthesize pruneCount=_pruneCount;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
- (id)_manifestFilePath;	// IMP=0x0000000000025d97
- (void)_saveManifest;	// IMP=0x0000000000025c17
- (void)_updateManifestWithChange:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025a37
- (id)description;	// IMP=0x000000000002595b
- (void)updateAssetsFromFiles;	// IMP=0x0000000000024ed6
- (void)_removeAssetInfoForKey:(id)arg1 removeFile:(_Bool)arg2;	// IMP=0x0000000000024a56
- (void)_removeAssetInfoForKey:(id)arg1;	// IMP=0x0000000000024a3f
- (id)infoForAllAssetsWithTags:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000244ba
- (id)infoForAllAssetsWithQueue:(id)arg1;	// IMP=0x0000000000024307
- (void)removeAllAssetsWithQueue:(id)arg1;	// IMP=0x000000000002411f
- (void)removeAssetInfoForKey:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000024019
- (id)assetInfoForKey:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000023abf
- (void)setAssetInfo:(id)arg1 forKey:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000230c0
- (id)initWithGroupType:(long long)arg1 baseCachePath:(id)arg2 folderName:(id)arg3 maxCacheSize:(unsigned long long)arg4 purgeOnLoad:(_Bool)arg5;	// IMP=0x0000000000022d2f

@end

