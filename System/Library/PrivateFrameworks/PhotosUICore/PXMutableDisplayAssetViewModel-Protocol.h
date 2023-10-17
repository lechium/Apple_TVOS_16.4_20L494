//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError, UIImage;
@protocol PXDisplayAsset;

@protocol PXMutableDisplayAssetViewModel
@property(copy, nonatomic) NSError *loadingError;
@property(nonatomic) float loadingProgress;
@property(copy, nonatomic) NSArray *stringsToHighlight;
@property(nonatomic) _Bool allowsTextSelection;
@property(nonatomic) _Bool isDisplayingFullQualityContent;
@property(nonatomic) struct UIEdgeInsets contentSafeAreaInsets;
@property(retain, nonatomic) UIImage *currentImage;
@property(nonatomic) _Bool wantsLivePhotoPlayback;
@property(nonatomic) long long contentMode;
@property(retain, nonatomic) id <PXDisplayAsset> asset;
@end

