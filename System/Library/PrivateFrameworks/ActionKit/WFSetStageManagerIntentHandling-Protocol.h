//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFSetStageManagerIntent;

@protocol WFSetStageManagerIntentHandling <NSObject>
- (void)handleSetStageManager:(WFSetStageManagerIntent *)arg1 completion:(void (^)(WFSetStageManagerIntentResponse *))arg2;

@optional
- (void)confirmSetStageManager:(WFSetStageManagerIntent *)arg1 completion:(void (^)(WFSetStageManagerIntentResponse *))arg2;
@end

