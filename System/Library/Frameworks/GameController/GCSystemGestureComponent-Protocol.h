//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/GCControllerComponent-Protocol.h>

@class GCSystemGesturesState, NSString;

@protocol GCSystemGestureComponent <GCControllerComponent>
@property(readonly, nonatomic) GCSystemGesturesState *systemGesturesState;
- (_Bool)isSystemGestureObserver;
- (void)enableSystemGestureForInput:(NSString *)arg1;
- (void)disableSystemGestureForInput:(NSString *)arg1;
@end

