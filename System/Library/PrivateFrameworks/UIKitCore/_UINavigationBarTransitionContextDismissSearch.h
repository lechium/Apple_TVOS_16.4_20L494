//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISearchBar, UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextDismissSearch
{
    UISearchBar *_transitioningSearchBar;	// 160 = 0xa0
    UIView *_transitioningScopeBarContainer;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000019caf5
- (void)cancel;	// IMP=0x000000000019ca32
- (void)complete;	// IMP=0x000000000019c664
- (void)animate;	// IMP=0x000000000019bf18
- (void)prepare;	// IMP=0x000000000019bbff
- (_Bool)_shouldCrossfadeDismissal;	// IMP=0x000000000019baa4
- (int)transition;	// IMP=0x000000000019ba99

@end

