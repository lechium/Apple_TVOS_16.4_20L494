//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSString, PHAsset, PHPhotoLibrary;
@protocol NSFastEnumeration;

@protocol PGHighlightModelChangeRequest <NSObject>
@property(nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship;
@property(nonatomic) unsigned short enrichmentState;
@property(nonatomic) unsigned long long mood;
@property(nonatomic) double promotionScore;
@property(retain, nonatomic) NSString *verboseSmartDescriptionMixed;
@property(retain, nonatomic) NSString *smartDescriptionMixed;
@property(retain, nonatomic) NSString *verboseSmartDescriptionShared;
@property(retain, nonatomic) NSString *smartDescriptionShared;
@property(retain, nonatomic) NSString *verboseSmartDescription;
@property(retain, nonatomic) NSString *smartDescription;
- (void)didEnrichHighlight;
- (void)enumerateMomentChangeRequestsForUUIDs:(NSArray *)arg1 inPhotoLibrary:(PHPhotoLibrary *)arg2 usingBlock:(void (^)(id <PGHighlightModelMomentChangeRequest>, NSString *, _Bool *))arg3;
- (void)clearCurations;
- (void)setAssets:(id <NSFastEnumeration>)arg1 forCurationType:(unsigned short)arg2;
- (void)setKeyAssetShared:(PHAsset *)arg1;
- (void)setKeyAssetPrivate:(PHAsset *)arg1;
@end

