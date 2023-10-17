//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, TVCollectionView;

@protocol TVCollectionViewDelegate <UICollectionViewDelegate>

@optional
- (_Bool)collectionViewCanBecomeFocused:(TVCollectionView *)arg1;
- (void)collectionView:(TVCollectionView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(TVCollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(TVCollectionView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end

