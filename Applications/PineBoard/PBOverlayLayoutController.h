//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBOverlayLayoutCoordinator;
@protocol PBOverlayLayoutControllerDelegate;

@interface PBOverlayLayoutController : NSObject
{
    NSString *_name;	// 8 = 0x8
    id <PBOverlayLayoutControllerDelegate> _delegate;	// 16 = 0x10
    PBOverlayLayoutCoordinator *_coordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0010000000089431
@property(readonly, nonatomic) PBOverlayLayoutCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <PBOverlayLayoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000893d1
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000089380
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000089321
- (id)succinctDescription;	// IMP=0x00100000000892d0
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0010000000089291
- (void)_invalidateWithReason:(id)arg1;	// IMP=0x0010000000089158
- (void)coordinator:(id)arg1 didUpdateElements:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x001000000008909c
@property(readonly, nonatomic) NSString *resolvedName;
- (id)performBatchUpdate:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x0010000000088c95
- (void)dealloc;	// IMP=0x0010000000088c50
- (id)init;	// IMP=0x0010000000088bf4
- (id)initWithName:(id)arg1;	// IMP=0x0010000000088b73
- (id)initWithLayoutCoordinator:(id)arg1 name:(id)arg2;	// IMP=0x0010000000088ab3
- (id)removeLayoutElementWithIdentifier:(id)arg1 andTransitionContext:(id)arg2;	// IMP=0x0010000000089589
- (id)addLayoutElement:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x0010000000089463

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

