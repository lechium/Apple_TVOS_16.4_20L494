//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFRequestInfo, AFSiriActivationContext, AFSiriActivationListener, INIntent, INIntentForwardingAction, NSString;

@protocol AFSiriActivationListenerDelegate <NSObject>

@optional
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 myriadEventWithRequestInfo:(AFRequestInfo *)arg2 context:(AFSiriActivationContext *)arg3 completion:(void (^)(NSError *))arg4;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 handleButtonEventFromContext:(AFSiriActivationContext *)arg2 completion:(void (^)(NSError *))arg3;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(AFSiriActivationContext *)arg4 completion:(void (^)(NSError *))arg5;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 activateWithRequestInfo:(AFRequestInfo *)arg2 context:(AFSiriActivationContext *)arg3 completion:(void (^)(NSError *))arg4;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 prewarmWithRequestInfo:(AFRequestInfo *)arg2 context:(AFSiriActivationContext *)arg3 completion:(void (^)(NSError *))arg4;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 handleIntentForwardingAction:(INIntentForwardingAction *)arg2 inBackgroundApplicationWithBundleIdentifier:(NSString *)arg3 completionHandler:(void (^)(INIntentForwardingActionResponse *))arg4;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 handleIntent:(INIntent *)arg2 inBackgroundAppWithBundleId:(NSString *)arg3 reply:(void (^)(INIntentResponse *, NSError *))arg4;
@end

