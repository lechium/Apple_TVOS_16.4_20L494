//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeyboardArbiter/NSObject-Protocol.h>

@class FBSSceneIdentityToken, NSDictionary;

@protocol _UIKeyboardArbiterAdvisor <NSObject>
@property(readonly, nonatomic) int presentingKeyboardProcessIdentifier;
- (void)keyboardFocusDidChangeWithoutAdvisorInputToPid:(int)arg1 sceneIdentity:(FBSSceneIdentityToken *)arg2;
- (FBSSceneIdentityToken *)preferredSceneIdentityForKeyboardFocusWithChangeInformation:(NSDictionary *)arg1;
@end

