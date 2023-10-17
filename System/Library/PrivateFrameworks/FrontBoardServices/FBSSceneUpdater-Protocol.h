//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSScene, FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneMessage, FBSSceneTransitionContext, FBSSerialQueue, NSSet;
@protocol FBSProcess;

@protocol FBSSceneUpdater <NSObject>
- (void)scene:(FBSScene *)arg1 sendMessage:(FBSSceneMessage *)arg2 withResponse:(void (^)(FBSSceneMessage *, NSError *))arg3;
- (void)scene:(FBSScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (_Bool)canHaveAgent;
- (id <FBSProcess>)hostProcess;
- (FBSSerialQueue *)callOutQueue;
@end

