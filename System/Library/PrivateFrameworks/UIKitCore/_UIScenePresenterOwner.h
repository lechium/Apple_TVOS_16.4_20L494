//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSMutableOrderedSet, NSMutableSet, NSString, UIScenePresentationContext, UIScenePresentationManager, _UISceneLayerHostContainerView, _UIScenePresenter;
@protocol _UIScenePresenterOwnerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScenePresenterOwner : NSObject
{
    id _context;	// 8 = 0x8
    UIScenePresentationManager *_scenePresentationManager;	// 16 = 0x10
    _UISceneLayerHostContainerView *_realSceneHostViewsContainer;	// 24 = 0x18
    NSMutableOrderedSet *_activePresentersByPriority;	// 32 = 0x20
    NSMutableSet *_inactivePresentersByPriority;	// 40 = 0x28
    _UIScenePresenter *_prioritizedPresenter;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    id <_UIScenePresenterOwnerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000006ab748
@property(nonatomic) __weak id <_UIScenePresenterOwnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
- (void)_setActivePrioritizedPresenter:(id)arg1;	// IMP=0x00000000006ab3c2
- (void)_updateActivePrioritizedPresenterIfNecessary;	// IMP=0x00000000006ab376
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000006ab150
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000006ab100
- (id)succinctDescriptionBuilder;	// IMP=0x00000000006ab0e4
- (id)succinctDescription;	// IMP=0x00000000006ab094
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x00000000006aaf90
- (void)_invalidatePresenter:(id)arg1;	// IMP=0x00000000006aae4b
- (void)_deactivatePresenter:(id)arg1;	// IMP=0x00000000006aad59
- (void)_activatePresenter:(id)arg1;	// IMP=0x00000000006aabb7
- (_Bool)_isPresenterHosting:(id)arg1;	// IMP=0x00000000006aab0a
- (_Bool)_isPresenterActive:(id)arg1;	// IMP=0x00000000006aaa4e
- (id)presenterWithIdentifier:(id)arg1;	// IMP=0x00000000006aa6bf
- (id)activePrioritizedPresenter;	// IMP=0x00000000006aa6b1
- (void)enumeratePresentersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006aa521
- (void)addPresenter:(id)arg1;	// IMP=0x00000000006aa468
@property(readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property(readonly, nonatomic) __weak FBScene *scene;
- (void)dealloc;	// IMP=0x00000000006aa33b
- (id)initWithScenePresentationManager:(id)arg1 context:(id)arg2;	// IMP=0x00000000006aa1df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
