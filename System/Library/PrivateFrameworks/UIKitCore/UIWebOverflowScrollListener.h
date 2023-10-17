//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject
{
    UIWebOverflowScrollView *_scrollView;	// 8 = 0x8
}

- (void)scrollViewDidScrollToTop:(id)arg1;	// IMP=0x000000000125c85d
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000125c84b
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000125c833
- (void)_didCompleteScrolling;	// IMP=0x000000000125c79f
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000125c74a
- (id)initWithScrollView:(id)arg1;	// IMP=0x000000000125c6f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
