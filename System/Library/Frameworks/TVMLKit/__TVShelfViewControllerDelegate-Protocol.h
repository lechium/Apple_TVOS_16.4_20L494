//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class NSIndexPath, UIView, _TVShelfViewController;

@protocol __TVShelfViewControllerDelegate <NSObject>

@optional
- (void)shelfViewController:(_TVShelfViewController *)arg1 updateRelatedView:(UIView *)arg2;
- (void)shelfViewController:(_TVShelfViewController *)arg1 didPlayItemAtIndexPath:(NSIndexPath *)arg2;
- (void)shelfViewController:(_TVShelfViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)shelfViewController:(_TVShelfViewController *)arg1 didSettleOnItemAtIndexPath:(NSIndexPath *)arg2;
@end

