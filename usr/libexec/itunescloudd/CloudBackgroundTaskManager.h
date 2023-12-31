//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject
{
    NSMapTable *_jobNameToSelectorMap;	// 8 = 0x8
}

+ (id)sharedTaskManager;	// IMP=0x00400000000fcb03
- (void).cxx_destruct;	// IMP=0x00200000000fc2e4
- (_Bool)_cellularDataAllowedForJaliscoMedia;	// IMP=0x00100000000fc255
- (_Bool)_cellularDataAllowedForJaliscoApps;	// IMP=0x00100000000fc20b
- (id)_nextJaliscoAppsPollTimeKey;	// IMP=0x00100000000fc1fe
- (id)_nextJaliscoMediaPollTimeKey;	// IMP=0x00100000000fc1f1
- (id)_nextEvaluateSyncRulesThrottleOperationTimeKey;	// IMP=0x00100000000fc1e4
- (id)_nextEvaluateSyncRulesOperationTimeKey;	// IMP=0x00100000000fc1d7
- (double)_throttledDeferredEvaluateKeepLocalTime;	// IMP=0x00100000000fc12c
- (id)_homeSharingPrefsNumberForKey:(id)arg1;	// IMP=0x00100000000fc110
- (void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000fc0e7
- (id)_baseBtaJobForPeriodicPollCellularDataAllowed:(_Bool)arg1;	// IMP=0x00100000000fc0cf
- (id)_baseBtaJobForDeferredPush;	// IMP=0x00100000000fc0b7
- (void)_handleJobNamed:(const char *)arg1 satisfied:(_Bool)arg2 invalid:(_Bool)arg3;	// IMP=0x00100000000fbf97
- (void)_unscheduleJobNamed:(const char *)arg1;	// IMP=0x00100000000fbf91
- (void)_scheduleJobNamed:(const char *)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3;	// IMP=0x00100000000fbf8b
- (void)_initializeBTAHandlers;	// IMP=0x00100000000fbf85
- (void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00100000000fbd32
- (void)_handleJaliscoMediaPeriodicPollJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00100000000fbaa7
- (void)_handleSagaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00100000000fb852
- (void)unscheduleJaliscoMediaDeferredPushUpate;	// IMP=0x00100000000fb84c
- (void)scheduleJaliscoMediaDeferredPushUpate;	// IMP=0x00100000000fb846
- (void)unscheduleJaliscoMediaPeriodicPoll;	// IMP=0x00100000000fb840
- (void)scheduleJaliscoMediaPeriodicPoll;	// IMP=0x00100000000fb83a
- (void)unscheduleSagaDeferredPushUpate;	// IMP=0x00100000000fb834
- (void)scheduleSagaDeferredPushUpate;	// IMP=0x00100000000fb82e
- (id)init;	// IMP=0x00100000000fb7e2

@end

