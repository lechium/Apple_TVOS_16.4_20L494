//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PXGLayout;
@protocol UICoordinateSpace;

@protocol PXGLayoutScrollDelegate
- (NSObject<UICoordinateSpace> *)contentCoordinateSpaceForLayout:(PXGLayout *)arg1;
- (void)setNeedsUpdateOfScrollableAxisForLayout:(PXGLayout *)arg1;
@end

