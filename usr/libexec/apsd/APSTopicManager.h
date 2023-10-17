//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSTopicGroup, APSTopicHasher, MISSING_TYPE, NSMutableSet, NSString, PCPersistentTimer;
@protocol APSTopicManagerDelegate;

@interface APSTopicManager : NSObject
{
    APSTopicGroup *_groups[3];	// 8 = 0x8
    NSMutableSet *_alsInhibitedTopics;	// 32 = 0x20
    PCPersistentTimer *_pendingFilterTimer;	// 40 = 0x28
    id <APSTopicManagerDelegate> _delegate;	// 48 = 0x30
    _Bool _isPowerEfficientToSendFilter;	// 56 = 0x38
    _Bool _globalALSBudgetSaturated;	// 57 = 0x39
    _Bool _pendingServerUpdate;	// 58 = 0x3a
    APSTopicHasher *_topicHasher;	// 64 = 0x40
    unsigned long long _processMode;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000004a6a9
@property(readonly, nonatomic) unsigned long long processMode; // @synthesize processMode=_processMode;
@property(readonly, nonatomic) APSTopicHasher *topicHasher; // @synthesize topicHasher=_topicHasher;
@property(readonly, nonatomic) _Bool pendingServerUpdate; // @synthesize pendingServerUpdate=_pendingServerUpdate;
@property(nonatomic) __weak id <APSTopicManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *logString;
- (id)logStringForCategory:(long long)arg1;	// IMP=0x001000000004a326
- (void)performFilterBlock:(CDUnknownBlockType)arg1 forCategory:(long long)arg2;	// IMP=0x001000000004a0e3
- (void)_scheduleServerUpdate:(_Bool)arg1 withTimer:(_Bool)arg2;	// IMP=0x001000000004a0cb
- (void)_scheduleServerUpdate:(_Bool)arg1 withTimer:(_Bool)arg2 shortInterval:(_Bool)arg3;	// IMP=0x0010000000049de3
- (void)_pendingFilterTimerFired;	// IMP=0x0010000000049d1d
- (void)_processPendingChangeIfNeeded;	// IMP=0x0010000000049c6a
- (void)_clearPendingFilterTimer;	// IMP=0x0010000000049c34
- (void)_processTopicChangeImmediately:(_Bool)arg1 alertDelegate:(_Bool)arg2;	// IMP=0x0010000000049554
- (void)removeFromALSInhibitedTopics:(id)arg1;	// IMP=0x001000000004940b
- (void)addToALSInhibitedTopics:(id)arg1;	// IMP=0x00100000000492b2
- (void)setGlobalALSBudgetSaturated:(_Bool)arg1;	// IMP=0x00100000000491d1
- (void)setIsPowerEfficientToSendFilter:(_Bool)arg1;	// IMP=0x00100000000490ee
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 forCategory:(long long)arg5;	// IMP=0x00100000000490d2
- (long long)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 forCategory:(long long)arg5 pretend:(_Bool)arg6;	// IMP=0x0010000000048d13
- (_Bool)_categoryShouldTriggerUpdate:(long long)arg1;	// IMP=0x0010000000048d02
@property(readonly, nonatomic) _Bool hasListeningTopics;
- (id)hasTopicHash:(id)arg1;	// IMP=0x0010000000048bc6
- (id)hasTopicHash:(id)arg1 includeRecentlyRemoved:(_Bool)arg2;	// IMP=0x0010000000048add
- (id)hasOpportunisticTopicHash:(id)arg1 forCategory:(long long)arg2;	// IMP=0x0010000000048a44
- (id)hasNonWakingTopicHash:(id)arg1;	// IMP=0x0010000000048998
- (id)hasOpportunisticTopicHash:(id)arg1;	// IMP=0x00100000000488ec
- (MISSING_TYPE *)hasRecentlyRemovedTopicHash: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000048840
- (id)hasIgnoredTopicHash:(id)arg1;	// IMP=0x0010000000048794
- (id)hasEnabledTopicHash:(id)arg1;	// IMP=0x00100000000486e8
- (void)dealloc;	// IMP=0x0010000000048656
- (id)initWithEnvironment:(id)arg1 topicHasher:(id)arg2 processMode:(unsigned long long)arg3;	// IMP=0x001000000004856a

@end

