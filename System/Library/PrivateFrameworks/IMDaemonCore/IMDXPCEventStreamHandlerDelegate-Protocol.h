//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMDXPCEventStreamHandler, NSDictionary, NSString;

@protocol IMDXPCEventStreamHandlerDelegate <NSObject>
- (void)eventStreamHandler:(IMDXPCEventStreamHandler *)arg1 didReceiveEventWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

