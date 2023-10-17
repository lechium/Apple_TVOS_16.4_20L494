//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSData, NSIndexSet, PXGChangeDetails;
@protocol PXGTextureAtlasManagerDelegate, PXGTextureConverter;

@protocol PXGTextureAtlasManager <NSObject>
@property(readonly, copy, nonatomic) NSArray *textures;
@property(retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes;
@property(readonly, nonatomic) unsigned long long pixelFormat;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(nonatomic) __weak id <PXGTextureAtlasManagerDelegate> delegate;
@property(nonatomic) __weak id <PXGTextureConverter> textureConverter;
- (void)pruneUnusedTextures;
- (void)applyChangeDetails:(PXGChangeDetails *)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (void)processPendingThumbnailRequestIDsWithHandler:(unsigned int (^)(int, unsigned int, unsigned int))arg1;
- (void)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(NSData *)arg2 size:(struct CGSize)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect)arg5;
@end

