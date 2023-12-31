//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ADSession, AceObject, NSArray, NSError, NSString;
@protocol SAAceCommand;

@protocol ADSessionDelegate <NSObject>
- (void)updateConnectionSetConnectionType:(unsigned int)arg1;
- (void)updateConnectionDidDropAggdMetrics;
- (void)assistantSessionRetryingRequest:(ADSession *)arg1;
- (void)assistantSessionDictationHIPAAMDMStatusDidChange;
- (void)assistantSessionConnectionDidClose:(ADSession *)arg1;
- (void)assistantSession:(ADSession *)arg1 beginSessionRetryPreferringWWAN:(_Bool)arg2;
- (void)assistantSession:(ADSession *)arg1 willRetryOnError:(NSError *)arg2;
- (void)assistantSession:(ADSession *)arg1 didOpenConnectionWithPolicyId:(NSString *)arg2 routeId:(NSString *)arg3 connectionDelay:(double)arg4;
- (void)assistantSession:(ADSession *)arg1 didLoadAssistantSyncRequested:(_Bool)arg2;
- (void)assistantSessionDidDestroyAssistant:(ADSession *)arg1;
- (void)assistantSessionDidCreateAssistant:(ADSession *)arg1;
- (void)assistantSession:(ADSession *)arg1 didChangeRequestIdFrom:(NSString *)arg2 toId:(NSString *)arg3;
- (NSArray *)assistantSessionCommandsToRestoreStateOnNewConnection:(ADSession *)arg1;
- (_Bool)assistantSessionShouldAttemptRetry:(ADSession *)arg1;
- (void)assistantSessionConnectionDidReset:(ADSession *)arg1;
- (_Bool)assistantSessionShouldRestartConnectionOnWiFi:(ADSession *)arg1;
- (_Bool)assistantSessionShouldLogVisibleRequestFailure:(ADSession *)arg1 forError:(NSError *)arg2;
- (void)assistantSession:(ADSession *)arg1 receivedError:(NSError *)arg2 isRetryableError:(_Bool)arg3;
- (void)assistantSession:(ADSession *)arg1 cannotHandleRequest:(AceObject<SAAceCommand> *)arg2 error:(NSError *)arg3;
- (void)assistantSession:(ADSession *)arg1 receivedCommand:(AceObject<SAAceCommand> *)arg2;
- (void)assistantSessionWillStartConnection:(ADSession *)arg1;
- (_Bool)assistantSessionShouldPrewarmConnetion:(ADSession *)arg1;
@end

