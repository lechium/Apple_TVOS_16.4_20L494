//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWSampleLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_powerLogQueue;	// 16 = 0x10
    NSMutableDictionary *_clientLogData;	// 24 = 0x18
    NSMutableSet *_outstandingClientLogData;	// 32 = 0x20
    NSMutableSet *_addedClientLogData;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_timer;	// 48 = 0x30
    unsigned long long _samplingStartTime;	// 56 = 0x38
    unsigned long long _cumulativeSamplingTime;	// 64 = 0x40
    unsigned long long _samplesRequested;	// 72 = 0x48
    unsigned long long _pollsRequested;	// 80 = 0x50
    unsigned long long _samplesSucceeded;	// 88 = 0x58
}

+ (void)client:(id)arg1 pollEventType:(unsigned long long)arg2 event:(id)arg3;	// IMP=0x006000000001cb38
+ (void)client:(id)arg1 event:(id)arg2;	// IMP=0x006000000001c897
+ (void)client:(id)arg1 attentionStateChange:(_Bool)arg2;	// IMP=0x006000000001c698
+ (id)sharedLogger;	// IMP=0x006000000001c668
- (void).cxx_destruct;	// IMP=0x000000000001c340
- (void)sampleSucceeded;	// IMP=0x000000000001c1e2
- (void)sampleStartedWithDeadline:(unsigned long long)arg1;	// IMP=0x000000000001bee2
- (void)shouldSample:(_Bool)arg1;	// IMP=0x000000000001b737
- (void)updateDataForClient:(id)arg1 deadline:(unsigned long long)arg2;	// IMP=0x000000000001b23a
- (void)startUpdate;	// IMP=0x000000000001b234
- (void)powerLogName:(id)arg1 event:(id)arg2;	// IMP=0x000000000001b181
- (void)outputPowerLog;	// IMP=0x000000000001b136
- (void)_outputPowerLog;	// IMP=0x000000000001ab37
- (void)streamingCompleteWithidentifier:(id)arg1 duration:(unsigned long long)arg2 ERActivated:(_Bool)arg3;	// IMP=0x000000000001a94d
- (void)_logFeatureEnablement;	// IMP=0x000000000001a7b7
- (id)init;	// IMP=0x000000000001a614

@end

