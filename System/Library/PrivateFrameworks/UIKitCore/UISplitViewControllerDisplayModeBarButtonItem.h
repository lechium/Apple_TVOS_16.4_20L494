//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIBarButtonItem.h"

@protocol UISplitViewControllerImpl;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem
{
    _Bool _hasBeenUsed;	// 8 = 0x8
    id <UISplitViewControllerImpl> _impl;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000487d5b
@property(readonly, nonatomic, getter=_hasBeenUsed) _Bool hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic, getter=_impl, setter=_setImpl:) __weak id <UISplitViewControllerImpl> impl; // @synthesize impl=_impl;
- (void)_wasUsed;	// IMP=0x0000000000487cb6
- (SEL)action;	// IMP=0x0000000000487c78
- (id)target;	// IMP=0x0000000000487c2b
- (void)_setOwningNavigationItem:(id)arg1;	// IMP=0x0000000000487b99

@end
