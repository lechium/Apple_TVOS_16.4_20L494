//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeHubUtility/NSObject-Protocol.h>

@class NSNumber;

@protocol HHUNotifyRegistration <NSObject>
@property(readonly, nonatomic) NSNumber *state;
- (void)registerNotifyHandler:(void (^)(id <HHUNotifyRegistration>))arg1;
- (void)cancel;
- (void)resume;
- (void)suspend;
@end

