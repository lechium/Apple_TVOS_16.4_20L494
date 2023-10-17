//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKMatch, GKPlayer, NSData, NSError, NSString;

@protocol GKMatchDelegate <NSObject>

@optional
- (_Bool)match:(GKMatch *)arg1 shouldReinvitePlayer:(NSString *)arg2;
- (void)match:(GKMatch *)arg1 player:(NSString *)arg2 didChangeState:(long long)arg3;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 fromPlayer:(NSString *)arg3;
- (_Bool)match:(GKMatch *)arg1 shouldReinviteDisconnectedPlayer:(GKPlayer *)arg2;
- (void)match:(GKMatch *)arg1 didFailWithError:(NSError *)arg2;
- (void)match:(GKMatch *)arg1 player:(GKPlayer *)arg2 didChangeConnectionState:(long long)arg3;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 forRecipient:(GKPlayer *)arg3 fromRemotePlayer:(GKPlayer *)arg4;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 fromRemotePlayer:(GKPlayer *)arg3;
@end

