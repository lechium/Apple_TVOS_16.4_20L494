//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PLAssetID-Protocol.h>

@class NSData, NSManagedObjectContext, NSManagedObjectID;

@protocol PHResourceChooserAsset <PLAssetID>
@property(readonly, nonatomic) _Bool isLocalVideoKeyFrameValid;
@property(readonly, nonatomic) unsigned long long originalResourceChoice;
@property(readonly, nonatomic) _Bool isRAWPlusJPEG;
@property(readonly, nonatomic) _Bool isWalrusEnabled;
@property(readonly, nonatomic) unsigned short deferredProcessingNeeded;
@property(readonly, nonatomic) unsigned long long effectiveThumbnailIndex;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContextForFetchingResources;
@property(readonly, nonatomic) _Bool hasAdjustments;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) NSData *imageRequestHints;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@end

