//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneTransitionContext.h>

@class BSMutableSettings, FBSceneUpdateContext, FBWatchdogTransitionContext;

@interface FBSSceneTransitionContext (TransientLocal)
@property(nonatomic, getter=isRunningBoardAssertionDisabled) _Bool runningBoardAssertionDisabled;
@property(nonatomic) _Bool allowCPUThrottling;
@property(readonly, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
- (void)setWatchdogTransitionContext:(id)arg1;	// IMP=0x0030000000003b27
@property(readonly, nonatomic) FBSceneUpdateContext *updateContext;
- (void)setUpdateContext:(id)arg1;	// IMP=0x0030000000003ac2

// Remaining properties
@property(readonly, copy, nonatomic) BSMutableSettings *transientLocalClientSettings; // @dynamic transientLocalClientSettings;
@end

