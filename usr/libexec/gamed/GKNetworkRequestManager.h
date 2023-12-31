//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKFairPlaySAPSession, GKNetworkRequestManagerSessionDelegate, NSDictionary, NSMutableDictionary, NSOperationQueue, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface GKNetworkRequestManager : NSObject
{
    _Bool _firstUnlockedState;	// 8 = 0x8
    _Bool _reportedExessiveRequests;	// 9 = 0x9
    struct os_unfair_lock_s _pendingCallbacksLock;	// 12 = 0xc
    struct os_unfair_lock_s _waitListCallbacksLock;	// 16 = 0x10
    GKFairPlaySAPSession *_fairPlaySession;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSURLSessionConfiguration *_backgroundConfig;	// 40 = 0x28
    NSURLSession *_backgroundSession;	// 48 = 0x30
    GKNetworkRequestManagerSessionDelegate *_sessionDelegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_stateQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 72 = 0x48
    long long _currentState;	// 80 = 0x50
    NSDictionary *_serviceDependancyMappings;	// 88 = 0x58
    NSMutableDictionary *_existingTasks;	// 96 = 0x60
    NSMutableDictionary *_pendingCallbacks;	// 104 = 0x68
    NSURLSession *_inProcessSession;	// 112 = 0x70
    NSURLSessionConfiguration *_inProcessConfig;	// 120 = 0x78
}

+ (id)taskWithRequest:(id)arg1 description:(id)arg2 session:(id)arg3;	// IMP=0x00400000000f6de0
+ (id)uuidFromTask:(id)arg1;	// IMP=0x00100000000f6d82
+ (id)networkRequestFromNsurlTask:(id)arg1;	// IMP=0x00100000000f1f9c
+ (Class)networkRequestClass:(id)arg1;	// IMP=0x00100000000f1cdd
+ (id)commonNetworkRequestManager;	// IMP=0x00100000000f0ea2
+ (id)dictionaryFromTaskDescription:(id)arg1;	// IMP=0x00100000000eebc0
- (void).cxx_destruct;	// IMP=0x00200000000f7d96
@property(retain, nonatomic) NSURLSessionConfiguration *inProcessConfig; // @synthesize inProcessConfig=_inProcessConfig;
@property(retain, nonatomic) NSURLSession *inProcessSession; // @synthesize inProcessSession=_inProcessSession;
@property(retain, nonatomic) NSMutableDictionary *pendingCallbacks; // @synthesize pendingCallbacks=_pendingCallbacks;
@property(nonatomic) struct os_unfair_lock_s waitListCallbacksLock; // @synthesize waitListCallbacksLock=_waitListCallbacksLock;
@property(nonatomic) struct os_unfair_lock_s pendingCallbacksLock; // @synthesize pendingCallbacksLock=_pendingCallbacksLock;
@property(nonatomic) _Bool reportedExessiveRequests; // @synthesize reportedExessiveRequests=_reportedExessiveRequests;
@property(retain, nonatomic) NSMutableDictionary *existingTasks; // @synthesize existingTasks=_existingTasks;
@property(retain, nonatomic) NSDictionary *serviceDependancyMappings; // @synthesize serviceDependancyMappings=_serviceDependancyMappings;
@property(nonatomic) _Bool firstUnlockedState; // @synthesize firstUnlockedState=_firstUnlockedState;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) GKNetworkRequestManagerSessionDelegate *sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSURLSessionConfiguration *backgroundConfig; // @synthesize backgroundConfig=_backgroundConfig;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) GKFairPlaySAPSession *fairPlaySession; // @synthesize fairPlaySession=_fairPlaySession;
- (id)networkRequestManagerStateQueue;	// IMP=0x00100000000f7bf5
- (void)issuePending;	// IMP=0x00100000000f7373
- (id)taskFromIdentifier:(id)arg1;	// IMP=0x00100000000f7189
- (id)pendingLocation;	// IMP=0x00100000000f70ee
- (id)resultsLocation;	// IMP=0x00100000000f7053
- (void)issueRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f5f9d
- (id)canSafelyIssueRequest:(id)arg1;	// IMP=0x00100000000f5e2c
- (id)existingWaitListDate:(id)arg1;	// IMP=0x00100000000f5d6a
- (void)handleRetryAfter:(id)arg1;	// IMP=0x00100000000f597c
- (void)setWaitPeriod:(id)arg1 waitPeriod:(double)arg2;	// IMP=0x00100000000f5664
- (id)waitListLocation;	// IMP=0x00100000000f55e3
- (void)writeToNetwork:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f4ce2
- (void)assembleRequest:(id)arg1 bagKey:(id)arg2 clientProxy:(id)arg3 sapSession:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000f463e
- (_Bool)useJSONforBagKey:(id)arg1;	// IMP=0x00100000000f45a4
- (void)setupSessionsAsync;	// IMP=0x00100000000f33c5
- (void)handleTaskFinished:(id)arg1;	// IMP=0x00100000000f2c8b
- (void)addNetworkRequest:(id)arg1 description:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00100000000f26a1
- (_Bool)managerReady;	// IMP=0x00100000000f2602
- (id)dictionaryForBagAndPlayer:(id)arg1 createIfNotPresent:(_Bool)arg2 description:(id)arg3;	// IMP=0x00100000000f2229
- (long long)relatedTasksExistForBagKey:(id)arg1;	// IMP=0x00100000000f1640
- (void)cancelCurrentTasks;	// IMP=0x00100000000f1080
- (id)init;	// IMP=0x00100000000f0f0b
- (_Bool)beforeFirstUnlock;	// IMP=0x00100000000f0e90
- (void)writeToPendingStore:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000f08a3
- (id)contentsOfPendingStore:(id)arg1;	// IMP=0x00100000000f079e
- (void)cleanUpPendingStore:(id)arg1;	// IMP=0x00100000000f0569
- (id)pathToTempFile:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000f0500
- (id)filePathToTempFile:(id)arg1 fileName:(id)arg2;	// IMP=0x00100000000f0460
- (void)getFairPlaySession:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f044a
- (void)fetchFairPlayData:(id)arg1 bag:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000eee29
- (id)retrieveAndClearCallbacks:(id)arg1 parameters:(id)arg2;	// IMP=0x00100000000ee919
- (_Bool)doesCallbackListExistFor:(id)arg1 parameters:(id)arg2 callback:(id)arg3;	// IMP=0x00100000000ee5de

@end

