//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAssetCollectionReference, PXCuratedLibrarySkimmingController;

@protocol PXCuratedLibrarySkimmingControllerDelegate <NSObject>
- (void)skimmingControllerDidStopSkimming:(PXCuratedLibrarySkimmingController *)arg1 animationDuration:(double)arg2;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willStartSkimmingAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willHideSkimmingHintsForAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willShowSkimmingHintsForAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (PXAssetCollectionReference *)assetCollectionReferenceForSkimmingSlideshow:(PXCuratedLibrarySkimmingController *)arg1;
- (PXAssetCollectionReference *)assetCollectionReferenceToShowSkimmingHints:(PXCuratedLibrarySkimmingController *)arg1;
@end
