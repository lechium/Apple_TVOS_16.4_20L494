//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class UIWindow;
@protocol PXNotificationSuppressionContextManager;

@interface UIApplication (PhotosUICore)
+ (id)px_sharedApplication;	// IMP=0x00200000002f1096
- (void)_px_navigateToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f0a69
- (void)px_navigateToOneUpShowingAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f07d0
- (void)px_navigateToRevealDroppedAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f062d
- (void)px_navigateToCollectionSubtype:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f0485
- (void)px_navigateToMomentsViewRevealingAssetWithUUID:(id)arg1 openOneUp:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002f036a
- (void)px_navigateToForYouRevealingSharedLibrarySharingSuggestionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f02e7
- (void)px_navigateToMomentsViewRevealingDisplayAsset:(id)arg1 openOneUp:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002f0259
- (void)px_navigateToMomentsViewRevealingAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f01df
- (void)px_navigateToWelcomeCloudViewWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f015c
@property(readonly, nonatomic) UIWindow *px_firstKeyWindow;
@property(readonly, nonatomic) id <PXNotificationSuppressionContextManager> notificationSuppressionContextManager;
@end

