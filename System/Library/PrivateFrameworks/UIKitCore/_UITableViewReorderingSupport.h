//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSTimer, UIShadowView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewReorderingSupport : NSObject
{
    UITableViewCell *_reorderedCell;	// 8 = 0x8
    NSIndexPath *_initialIndexPath;	// 16 = 0x10
    NSIndexPath *_targetIndexPath;	// 24 = 0x18
    unsigned int _oldShowHorizontalScrollIndicator:1;	// 32 = 0x20
    unsigned int _oldShowVerticalScrollIndicator:1;	// 32 = 0x20
    unsigned int _reloadDataCalled:1;	// 32 = 0x20
    unsigned int _reorderingCancelled:1;	// 32 = 0x20
    NSTimer *_autoscrollTimer;	// 40 = 0x28
    UIShadowView *_topShadowView;	// 48 = 0x30
    UIShadowView *_bottomShadowView;	// 56 = 0x38
    _Bool _wasScrollingEnabled;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000ecd6c3

@end

