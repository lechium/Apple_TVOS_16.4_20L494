//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol NEConfigurationCommandHandling <NSObject>
- (void)handleCommand:(int)arg1 forConfigWithName:(NSString *)arg2 withParameters:(NSDictionary *)arg3 completionHandler:(void (^)(NSArray *))arg4;
@end

