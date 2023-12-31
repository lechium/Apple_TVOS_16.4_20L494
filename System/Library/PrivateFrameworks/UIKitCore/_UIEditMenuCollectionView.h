//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIEditMenuCollectionView : UICollectionView
{
    NSArray *_pages;	// 152 = 0x98
    long long _targetPage;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000bdf69b
@property(nonatomic) long long targetPage; // @synthesize targetPage=_targetPage;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
- (double)clampedPageForPageProgress:(double)arg1;	// IMP=0x0000000000bdf60b
- (void)_prepareToPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;	// IMP=0x0000000000bdf3e8
- (void)scrollToTargetPageAnimated:(_Bool)arg1;	// IMP=0x0000000000bdf194
- (void)decrementTargetPage;	// IMP=0x0000000000bdf164
- (void)incrementTargetPage;	// IMP=0x0000000000bdf0fe
- (void)resetTargetPage;	// IMP=0x0000000000bdf0cb
- (double)viewWidthForPageProgress:(double)arg1;	// IMP=0x0000000000bdee95
- (struct CGPoint)contentOffsetForPage:(long long)arg1;	// IMP=0x0000000000bded76
- (double)pageProgressForContentOffset:(struct CGPoint)arg1 clamped:(_Bool)arg2;	// IMP=0x0000000000bdeb36
@property(readonly, nonatomic) double currentPage;

@end

