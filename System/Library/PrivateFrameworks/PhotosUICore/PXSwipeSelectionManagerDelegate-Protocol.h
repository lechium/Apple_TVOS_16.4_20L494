//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXIndexPathSet, PXSwipeSelectionManager;

@protocol PXSwipeSelectionManagerDelegate <NSObject>
- (struct PXSimpleIndexPath)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (_Bool)swipeSelectionManagerIsInMultiSelectMode:(PXSwipeSelectionManager *)arg1;

@optional
- (void)swipeSelectionManagerDidAutoScroll:(PXSwipeSelectionManager *)arg1;
- (void)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 extendSelectionInDirection:(unsigned long long)arg2;
- (PXIndexPathSet *)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 indexPathSetFromIndexPath:(struct PXSimpleIndexPath)arg2 toIndexPath:(struct PXSimpleIndexPath)arg3;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(PXSwipeSelectionManager *)arg1;
- (_Bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2;
- (_Bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldBeginSelectionAtLocation:(struct CGPoint)arg2;
- (_Bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;
@end

