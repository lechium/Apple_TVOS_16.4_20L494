//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol GKDataWriter, GKDatabaseReader, GKDatabaseWriter, OS_dispatch_queue;

@interface GKDelayedRequestWriter : NSObject
{
    _Bool _shouldWaitForNetworkError;	// 8 = 0x8
    double _intervalInSeconds;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_operationQueue;	// 24 = 0x18
    NSSet *_resourcesPending;	// 32 = 0x20
    id <GKDatabaseWriter> _cacheWriter;	// 40 = 0x28
    id <GKDatabaseReader> _cacheReader;	// 48 = 0x30
    id <GKDataWriter> _networkWriter;	// 56 = 0x38
}

+ (id)writerWithCacheWriter:(id)arg1 cacheReader:(id)arg2 networkWriter:(id)arg3 batchSubmissionInterval:(double)arg4;	// IMP=0x002000000011bae9
- (void).cxx_destruct;	// IMP=0x002000000011e694
@property(retain, nonatomic) id <GKDataWriter> networkWriter; // @synthesize networkWriter=_networkWriter;
@property(retain, nonatomic) id <GKDatabaseReader> cacheReader; // @synthesize cacheReader=_cacheReader;
@property(retain, nonatomic) id <GKDatabaseWriter> cacheWriter; // @synthesize cacheWriter=_cacheWriter;
@property(retain) NSSet *resourcesPending; // @synthesize resourcesPending=_resourcesPending;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) double intervalInSeconds; // @synthesize intervalInSeconds=_intervalInSeconds;
@property _Bool shouldWaitForNetworkError; // @synthesize shouldWaitForNetworkError=_shouldWaitForNetworkError;
- (void)writeResourcesToCacheOnly:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011e483
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011d760
- (void)readAndSubmitDelayedRequestsOfResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011c73b
- (void)deleteSubmittedRequestsWithIDs:(id)arg1 onConnection:(id)arg2;	// IMP=0x001000000011c1c5
- (void)submitDelayedRequestsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011c0a4
- (void)batchAndPerformInGroup:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000011be5b
- (id)initWithCacheWriter:(id)arg1 cacheReader:(id)arg2 networkWriter:(id)arg3 batchSubmissionInterval:(double)arg4;	// IMP=0x001000000011bd0e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

