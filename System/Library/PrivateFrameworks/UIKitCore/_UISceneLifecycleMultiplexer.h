//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIApplicationSceneSettings, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneLifecycleMultiplexer : NSObject
{
    UIScene *_uiSceneOfRecord;	// 8 = 0x8
    UIApplicationSceneSettings *_transitionalLifecycleState;	// 16 = 0x10
    struct {
        unsigned int completedLaunch:1;
        unsigned int activatedOnce:1;
    } _multiplexerFlags;	// 24 = 0x18
}

+ (void)configureInitialDeactivationReasons:(unsigned long long)arg1;	// IMP=0x0040000000238894
+ (id)_mostActiveSceneForApplicationState;	// IMP=0x0040000000238656
+ (id)mostActiveWindowSceneOnScreen:(id)arg1;	// IMP=0x0040000000238513
+ (id)mostActiveScene;	// IMP=0x00400000002384ff
+ (long long)_compareLifecycleStateOfScene:(id)arg1 toScene:(id)arg2;	// IMP=0x0040000000238319
+ (id)_mostActiveSceneIncludingInternal:(_Bool)arg1 withTest:(CDUnknownBlockType)arg2;	// IMP=0x0040000000237f85
+ (id)mostActiveSceneWithTest:(CDUnknownBlockType)arg1;	// IMP=0x0040000000237f6e
+ (id)sharedInstance;	// IMP=0x00400000002379f8
- (void).cxx_destruct;	// IMP=0x000000000023a66f
- (void)_globalTestRelatedActivationActionsForFirstActivation:(_Bool)arg1 foreground:(_Bool)arg2 interfaceStyle:(long long)arg3 transitionContext:(id)arg4;	// IMP=0x000000000023a5ed
- (_Bool)_prepareForClientSuspensionWithScene:(id)arg1;	// IMP=0x000000000023a235
- (void)_scheduleFirstCommit;	// IMP=0x000000000023a1f8
- (void)_evalTransitionToSettings:(id)arg1 fromSettings:(id)arg2 forceExit:(_Bool)arg3 withTransitionStore:(CDStruct_a70f6672)arg4;	// IMP=0x0000000000239080
- (void)_performBlock:(CDUnknownBlockType)arg1 withApplicationOfDeactivationReasons:(unsigned long long)arg2 fromReasons:(unsigned long long)arg3;	// IMP=0x0000000000238eca
- (void)collectBackingStores;	// IMP=0x0000000000238dd8
- (void)forceExitWithTransitionContext:(id)arg1 scene:(id)arg2;	// IMP=0x0000000000238c7d
- (void)uiScene:(id)arg1 transitionedFromState:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x0000000000238a65
@property(readonly, nonatomic) _Bool activatedOnce;
- (void)noteApplicationLaunchCompleted;	// IMP=0x0000000000238a4e
- (void)completeApplicationLaunchWithFBSScene:(id)arg1 transitionContext:(id)arg2;	// IMP=0x000000000023895c
- (_Bool)isTrackingScene:(id)arg1;	// IMP=0x0000000000238845
@property(readonly, nonatomic) _Bool runningInTaskSwitcher;
@property(readonly, nonatomic) _Bool suspendedUnderLock;
@property(readonly, nonatomic) _Bool suspendedEventsOnly;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) long long applicationState;
@property(readonly, nonatomic) _Bool lifecycleWantsUnnecessaryDelayForSceneDelivery;
- (id)initForAppSingleton:(id)arg1;	// IMP=0x0000000000237a67

@end

