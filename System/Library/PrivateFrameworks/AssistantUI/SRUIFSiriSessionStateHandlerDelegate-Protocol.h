//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class SRUIFSiriSessionStateHandler;

@protocol SRUIFSiriSessionStateHandlerDelegate <NSObject>
- (void)sessionStateHandler:(SRUIFSiriSessionStateHandler *)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 forEvent:(long long)arg4 machAbsoluteTime:(double)arg5;
@end

