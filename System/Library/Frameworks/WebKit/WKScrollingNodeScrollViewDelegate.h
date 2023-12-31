//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKScrollingNodeScrollViewDelegate : NSObject
{
    void *_scrollingTreeNodeDelegate;	// 8 = 0x8
    _Bool _inUserInteraction;	// 16 = 0x10
}

@property(nonatomic, getter=_isInUserInteraction) _Bool inUserInteraction; // @synthesize inUserInteraction=_inUserInteraction;
- (void)cancelPointersForGestureRecognizer:(id)arg1;	// IMP=0x000000000034cabc
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x000000000034ca88
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;	// IMP=0x000000000034c8b1
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000034c882
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000034c7ff
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000034c778
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000034c389
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000034c30d
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000034c23e
- (id)_actingParentScrollViewForScrollView:(id)arg1;	// IMP=0x000000000034c1ef
- (id)initWithScrollingTreeNodeDelegate:(void *)arg1;	// IMP=0x000000000034c1b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

