//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIReusePool : NSObject
{
    NSMutableSet *_reuseSet;	// 8 = 0x8
    unsigned long long _purgePolicy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0060000000793c6f
+ (void)__applicationWillEnterForeground:(id)arg1;	// IMP=0x0060000000793c61
+ (void)__applicationDidEnterBackground:(id)arg1;	// IMP=0x0060000000793a20
- (void).cxx_destruct;	// IMP=0x0000000000794224
- (void)drainPool;	// IMP=0x00000000007941bf
@property(readonly, nonatomic) unsigned long long purgePolicy;
- (id)reusableObject;	// IMP=0x0000000000794068
- (void)addObject:(id)arg1;	// IMP=0x0000000000793f8f
- (id)initWithPolicy:(unsigned long long)arg1;	// IMP=0x0000000000793e54
- (id)init;	// IMP=0x0000000000793e3d

@end
