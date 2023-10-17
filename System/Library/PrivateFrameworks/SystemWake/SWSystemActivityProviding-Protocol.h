//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemWake/NSObject-Protocol.h>

@class BSAbsoluteMachTimer, NSString, SWDeclareSystemActivityResult;

@protocol SWSystemActivityProviding <NSObject>
- (BSAbsoluteMachTimer *)createTimerWithIdentifier:(NSString *)arg1;
- (unsigned long long)getMachContinuousKernelWakeTime;
- (void)releaseAssertionID:(unsigned int)arg1;
- (SWDeclareSystemActivityResult *)declareSystemActivityWithName:(NSString *)arg1;
@end
