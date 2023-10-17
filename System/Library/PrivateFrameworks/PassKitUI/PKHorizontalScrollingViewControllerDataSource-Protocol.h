//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, UIView, UIViewController;
@protocol PKHorizontalScrollingChildViewControllerProtocol, PKHorizontalScrollingFooterViewProtocol><PKHorizontalScrollingFooterViewComparator;

@protocol PKHorizontalScrollingViewControllerDataSource <NSObject>
- (void)didMoveToPrimaryIndex:(long long)arg1;
- (id)loadingDataObjectWithCurrentData:(id)arg1 index:(long long)arg2 swap:(_Bool)arg3;
- (void)fetchDataAtIndex:(long long)arg1 completion:(void (^)(id))arg2;
- (void)prefetchDataIfNecessary;
- (id)cachedDataAtIndex:(long long)arg1;
- (void)didDequeueViewController:(UIViewController<PKHorizontalScrollingChildViewControllerProtocol> *)arg1;
- (long long)startingIndex;
- (long long)numberOfItems;
- (double)footerViewContentHeight;
- (UIView<PKHorizontalScrollingFooterViewProtocol><PKHorizontalScrollingFooterViewComparator> *)footerView;
- (NSArray *)emptyViewControllers;
@end

