//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSwimTrackerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    _Bool fStartedUpdates;	// 24 = 0x18
    CDUnknownBlockType fHandler;	// 32 = 0x20
    unsigned long long fStrokeCountOffset;	// 40 = 0x28
    double fDistanceOffset;	// 48 = 0x30
    unsigned long long fLapCountOffset;	// 56 = 0x38
    double fActiveTime;	// 64 = 0x40
    unsigned long long fSegmentCountOffset;	// 72 = 0x48
}

- (void)_resetOffsets;	// IMP=0x00000000001f9296
- (void)_handleUpdates:(id)arg1;	// IMP=0x00000000001f85ce
- (void)_querySWOLFSummaryWithSessionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f7ef5
- (void)_querySwimUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f78bd
- (void)_stopUpdates;	// IMP=0x00000000001f7654
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f6f9f
- (void)_teardown;	// IMP=0x00000000001f6f5d
- (void)dealloc;	// IMP=0x00000000001f6f23
- (id)init;	// IMP=0x00000000001f6ad4

@end

