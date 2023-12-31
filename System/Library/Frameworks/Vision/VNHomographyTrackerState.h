//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VNHomographyTrackerState : NSObject
{
    void *_analysisSession;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_analysisSemaphore;	// 16 = 0x10
    long long _analysisPreRollFramesRemaining;	// 24 = 0x18
    struct os_unfair_lock_s _resultsLock;	// 32 = 0x20
    struct vector<std::tuple<simd_float3x3, float>, std::allocator<std::tuple<simd_float3x3, float>>> _transformsAndConfidences;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000001a8629
- (void).cxx_destruct;	// IMP=0x00000000001a85fa
- (void)ICReportFrameAnalysis:(id)arg1 forPresentationTime:(CDStruct_1b6d18a9)arg2 withStats:(id)arg3;	// IMP=0x00000000001a80e2
- (_Bool)ICShouldBeCanceled;	// IMP=0x00000000001a80da
- (void)dealloc;	// IMP=0x00000000001a805e
- (id)init;	// IMP=0x00000000001a7f21

@end

