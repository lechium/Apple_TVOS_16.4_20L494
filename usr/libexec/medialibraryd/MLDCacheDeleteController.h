//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface MLDCacheDeleteController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSArray *_libraries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000426e
- (void)_registerCacheDeleteHandler;	// IMP=0x0010000000004268
- (id)initWithLibraries:(id)arg1;	// IMP=0x00100000000041a9

@end

