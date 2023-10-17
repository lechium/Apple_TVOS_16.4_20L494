//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMExerciseMinuteData;
@protocol OS_dispatch_queue;

@interface CMExerciseMinuteInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *fAppQueue;	// 24 = 0x18
    _Bool fStartedUpdates;	// 32 = 0x20
    CMExerciseMinuteData *fMostRecentRecord;	// 40 = 0x28
    CDUnknownBlockType fHandler;	// 48 = 0x30
}

- (void)_queryExerciseMinutesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000170882
- (void)_startUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017021d
- (void)_stopUpdates;	// IMP=0x000000000016ff5c
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016feff
- (void)_teardown;	// IMP=0x000000000016fe56
- (void)dealloc;	// IMP=0x000000000016fe04
- (id)init;	// IMP=0x000000000016f9aa

@end

