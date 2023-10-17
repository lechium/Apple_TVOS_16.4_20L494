//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSString, WFDialogAttribution, WFDialogResponse;
@protocol WFParameterState;

@protocol WFParameterDialogProvider <NSObject>
- (id <WFParameterState>)parameterStateFromDialogResponse:(WFDialogResponse *)arg1;
- (void)createDialogRequestWithAttribution:(WFDialogAttribution *)arg1 defaultState:(id <WFParameterState>)arg2 prompt:(NSString *)arg3 completionHandler:(void (^)(WFDialogRequest *))arg4;
@end

