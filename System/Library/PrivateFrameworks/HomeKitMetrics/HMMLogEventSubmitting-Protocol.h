//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/NSObject-Protocol.h>

@class HMMLogEvent, NSError;

@protocol HMMLogEventSubmitting <NSObject>
- (void)submitLogEvent:(HMMLogEvent *)arg1 error:(NSError *)arg2;
- (void)submitLogEvent:(HMMLogEvent *)arg1;
@end

