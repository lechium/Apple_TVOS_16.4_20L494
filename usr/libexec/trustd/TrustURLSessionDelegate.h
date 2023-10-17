//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TrustURLSessionDelegate : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *__taskContextMap;	// 16 = 0x10
    NSMutableDictionary *__serverMap;	// 24 = 0x18
    NSMutableDictionary *__timerMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000048c8a
@property(retain) NSMutableDictionary *_timerMap; // @synthesize _timerMap=__timerMap;
@property(retain) NSMutableDictionary *_serverMap; // @synthesize _serverMap=__serverMap;
@property(retain) NSMutableDictionary *_taskContextMap; // @synthesize _taskContextMap=__taskContextMap;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000489e6
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000488c7
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000047eb3
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000047cf9
- (_Bool)fetchNext:(id)arg1 context:(id)arg2;	// IMP=0x0010000000047691
- (id)createNextRequest:(id)arg1 context:(id)arg2;	// IMP=0x001000000004748e
- (id)timeoutEntryForServer:(id)arg1;	// IMP=0x00100000000473cb
- (void)incrementCountForServer:(id)arg1;	// IMP=0x001000000004721b
- (void)addServer:(id)arg1;	// IMP=0x0010000000047150
- (void);	// IMP=0x0010000000047075
- (id)createTimerForTask:(id)arg1;	// IMP=0x0010000000046e73
- (void)cancelTimer:(id)arg1;	// IMP=0x0010000000046d67
- (id)addTask:(id)arg1;	// IMP=0x0010000000046c8c
- (void)removeTask:(id)arg1;	// IMP=0x0010000000046bda
- (id)contextForTask:(id)arg1;	// IMP=0x0010000000046b17
- (id)init;	// IMP=0x0010000000046998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
