//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSQLCore;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NSSQLCoreConnectionObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _token;	// 16 = 0x10
    NSSQLCore *_core;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000176346
- (void)dealloc;	// IMP=0x00000000001762e0

@end

