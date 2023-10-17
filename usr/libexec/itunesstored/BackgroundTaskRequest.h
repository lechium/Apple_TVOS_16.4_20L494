//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface BackgroundTaskRequest : NSObject
{
    NSObject<OS_xpc_object> *_job;	// 8 = 0x8
    NSString *_requestIdentifier;	// 16 = 0x10
}

+ (id)wifiAvailableRequest;	// IMP=0x004000000015f49c
+ (id)pluggedInRequest;	// IMP=0x001000000015f494
+ (id)networkAvailableRequest;	// IMP=0x001000000015f48c
- (void).cxx_destruct;	// IMP=0x002000000015f4ed
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (id)valueForBackgroundTaskAgentKey:(const char *)arg1;	// IMP=0x001000000015f4c3
- (void)setValue:(id)arg1 forBackgroundTaskAgentKey:(const char *)arg2;	// IMP=0x001000000015f4b2
- (id)copyBackgroundTaskAgentJob;	// IMP=0x001000000015f4a4
- (id)initWithBackgroundTaskAgentJob:(id)arg1;	// IMP=0x001000000015f421
- (id)init;	// IMP=0x001000000015f3cc

@end
