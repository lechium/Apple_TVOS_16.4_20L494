//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TimeSync/NSObject-Protocol.h>

@protocol TSXKernelClockServerProtocol <NSObject>
- (void)getInitialSync:(void (^)(int, unsigned long long, unsigned long long, unsigned long long, unsigned long long))arg1;
- (void)getClockIdentifier:(void (^)(unsigned long long))arg1;
@end
