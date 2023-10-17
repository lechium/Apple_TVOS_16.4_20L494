//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class FBSSceneSettings, FBSSceneTransitionContext, FBScene, FBSceneManager, FBSceneUpdateContext, NSError;
@protocol FBSceneClient;

@protocol FBSceneManagerObserver <NSObject>

@optional
- (void)sceneManager:(FBSceneManager *)arg1 updateForScene:(FBScene *)arg2 completedWithContext:(FBSceneUpdateContext *)arg3 error:(NSError *)arg4;
- (void)sceneManager:(FBSceneManager *)arg1 updateForScene:(FBScene *)arg2 appliedWithContext:(FBSceneUpdateContext *)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 updateForScene:(FBScene *)arg2 preparedWithContext:(FBSceneUpdateContext *)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 didCommitUpdateForScene:(FBScene *)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 didCommitUpdateForScene:(FBScene *)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)sceneManager:(FBSceneManager *)arg1 willCommitUpdateForScene:(FBScene *)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 willUpdateScene:(FBScene *)arg2 withSettings:(FBSSceneSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)sceneManager:(FBSceneManager *)arg1 didCreateScene:(FBScene *)arg2 withClient:(id <FBSceneClient>)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 didDestroyScene:(FBScene *)arg2;
- (void)sceneManager:(FBSceneManager *)arg1 willDestroyScene:(FBScene *)arg2;
- (void)sceneManager:(FBSceneManager *)arg1 didCreateScene:(FBScene *)arg2;
- (void)sceneManager:(FBSceneManager *)arg1 willRemoveScene:(FBScene *)arg2;
- (void)sceneManager:(FBSceneManager *)arg1 didAddScene:(FBScene *)arg2;
@end

