//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@class GCControllerButtonInput, GCControllerDirectionPad;

@protocol DirectionPadValueChangedDelegate <NSObject>
@property(readonly) GCControllerDirectionPad *dpad;
- (GCControllerButtonInput *)centerButtonEvent:(GCControllerButtonInput *)arg1 pressed:(_Bool)arg2;
- (GCControllerDirectionPad *)dpadDirectionEvent:(GCControllerDirectionPad *)arg1 direction:(unsigned long long)arg2 pressed:(_Bool)arg3;
@end

