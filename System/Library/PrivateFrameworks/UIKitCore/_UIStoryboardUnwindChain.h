//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIStoryboardUnwindChain : NSObject
{
    NSMutableArray *_viewControllers;	// 8 = 0x8
    unsigned long long _commonAncestorIdx;	// 16 = 0x10
    unsigned long long _modalAncestorContainingSourceIdx;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000de98d9
- (id)debugDescription;	// IMP=0x0000000000de944d
- (void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(CDUnknownBlockType)arg1;	// IMP=0x0000000000de9367
@property(readonly, nonatomic) UIViewController *modalAncestorContainingSourceViewController;
@property(readonly, nonatomic) UIViewController *commonAncestorViewController;
- (id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2;	// IMP=0x0000000000de8f2e

@end

