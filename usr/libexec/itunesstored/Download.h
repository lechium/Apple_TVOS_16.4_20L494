//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMemoryEntity.h>

@class NSArray, SSDownloadPolicy;

@interface Download : SSMemoryEntity
{
    NSArray *_assets;	// 8 = 0x8
    SSDownloadPolicy *_downloadPolicy;	// 16 = 0x10
}

+ (Class)databaseEntityClass;	// IMP=0x0020000000135658
@property(copy, nonatomic) SSDownloadPolicy *downloadPolicy; // @synthesize downloadPolicy=_downloadPolicy;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000136460
- (_Bool)_setThumbnailImageWithExternalAssets:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000135f80
- (_Bool)_setDatabasePropertiesWithExternalMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000135bc3
- (_Bool)_setAssetsWithExternalThinnedAssets:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001358b6
- (_Bool)_setAssetsWithExternalAssets:(id)arg1 error:(id *)arg2;	// IMP=0x001000000013581d
- (id)_copyValidAssetsWithExternalAssets:(id)arg1 validateVariants:(_Bool)arg2;	// IMP=0x0010000000135669
- (void)unionNetworkConstraints:(id)arg1;	// IMP=0x0010000000135551
- (void)removeAssetsWithAssetType:(id)arg1;	// IMP=0x0010000000135462
- (id)copyInMemoryStoreDownloadMetadata;	// IMP=0x0010000000135416
- (id)copyStoreDownloadMetadata;	// IMP=0x0010000000135383
- (id)assetForAssetIdentifier:(long long)arg1;	// IMP=0x0010000000135246
- (id)anyAssetForAssetType:(id)arg1;	// IMP=0x00100000001350bc
- (void)dealloc;	// IMP=0x0010000000135064
- (id)initWithStoreDownload:(id)arg1;	// IMP=0x0010000000134a4a
- (id)initWithExternalManifestDictionary:(id)arg1;	// IMP=0x00100000001347ca
- (id)initWithClientXPCDownload:(id)arg1;	// IMP=0x001000000013421b
- (id)_newAssetArrayWithDownloadAssets:(id)arg1;	// IMP=0x001000000006a374
- (id)copyJobActivity;	// IMP=0x0010000000069022
- (id)initWithMicroPaymentDownload:(id)arg1 clientID:(id)arg2;	// IMP=0x0010000000186a15

@end

