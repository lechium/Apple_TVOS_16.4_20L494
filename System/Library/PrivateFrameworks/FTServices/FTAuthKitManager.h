//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDSession;
@protocol OS_dispatch_queue;

@interface FTAuthKitManager : NSObject
{
    AKAppleIDSession *_akAppleIDSession;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000000faea
- (void).cxx_destruct;	// IMP=0x0000000000010542
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001005b
- (void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fc22
- (id)init;	// IMP=0x000000000000fb3f

@end

