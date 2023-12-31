//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CKDClientInfo : NSObject
{
    NSString *_cachedHostname;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;	// 16 = 0x10
    struct MGNotificationTokenStruct *_hostNotificationToken;	// 24 = 0x18
}

+ (id)sharedClientInfo;	// IMP=0x006000000013c2c2
- (void).cxx_destruct;	// IMP=0x000000000013c75c
@property(readonly, nonatomic) NSString *hostname;
- (void)_refreshHostname;	// IMP=0x000000000013c5ca
- (void)dealloc;	// IMP=0x000000000013c590
- (id)_init;	// IMP=0x000000000013c3d3
- (id)init;	// IMP=0x000000000013c327

@end

