//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFSetAlwaysOnDisplayIntent;

@protocol WFSetAlwaysOnDisplayIntentHandling <NSObject>
- (void)resolveStateForSetAlwaysOnDisplay:(WFSetAlwaysOnDisplayIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolveOperationForSetAlwaysOnDisplay:(WFSetAlwaysOnDisplayIntent *)arg1 withCompletion:(void (^)(WFBooleanSettingOperationResolutionResult *))arg2;
- (void)handleSetAlwaysOnDisplay:(WFSetAlwaysOnDisplayIntent *)arg1 completion:(void (^)(WFSetAlwaysOnDisplayIntentResponse *))arg2;

@optional
- (void)confirmSetAlwaysOnDisplay:(WFSetAlwaysOnDisplayIntent *)arg1 completion:(void (^)(WFSetAlwaysOnDisplayIntentResponse *))arg2;
@end

