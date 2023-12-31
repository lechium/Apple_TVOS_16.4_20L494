//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCDaemonProcessInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 8 = 0x8
}

+ (id)copyProcessInfo;	// IMP=0x00600000000e4d46
+ (id)sharedManager;	// IMP=0x00600000000e4cf7
- (id)copyProcessInfo;	// IMP=0x00000000000e4fc1
- (void)deregisterBlocksForService;	// IMP=0x00000000000e4f88
- (void)registerBlocksForService;	// IMP=0x00000000000e4e9e
- (id)autorelease;	// IMP=0x00000000000e4e95
- (oneway void)release;	// IMP=0x00000000000e4e8f
- (unsigned long long)retainCount;	// IMP=0x00000000000e4e82
- (id)retain;	// IMP=0x00000000000e4e79
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4e70
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4e63
- (void)dealloc;	// IMP=0x00000000000e4df9
- (id)init;	// IMP=0x00000000000e4d79

@end

