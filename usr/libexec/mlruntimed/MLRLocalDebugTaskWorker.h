//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESDebugRecord, DESDodMLServer, MLRLocalDebugSchedulingTask, NSString;
@protocol DESPluginManaging, OS_dispatch_queue;

@interface MLRLocalDebugTaskWorker : NSObject
{
    DESDebugRecord *_debugRecord;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    DESDodMLServer *_server;	// 24 = 0x18
    MLRLocalDebugSchedulingTask *_task;	// 32 = 0x20
    id <DESPluginManaging> _plugin;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000073c3
@property(readonly, nonatomic) id <DESPluginManaging> plugin; // @synthesize plugin=_plugin;
@property(readonly, nonatomic) MLRLocalDebugSchedulingTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) DESDodMLServer *server; // @synthesize server=_server;
- (id)telemetryResponse;	// IMP=0x001000000000739d
- (void)stop;	// IMP=0x00100000000072bd
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006878
- (id)_nativeRecordInfoWithError:(id *)arg1;	// IMP=0x0010000000006539
- (id)_recipeWithError:(id *)arg1;	// IMP=0x00100000000063c5
- (void)_runEvaluationForBundleId:(id)arg1 task:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000060d8
- (void)_addDebugRecordAfterExecutingRecipe:(id)arg1 withError:(id)arg2 result:(id)arg3;	// IMP=0x0010000000005f69
- (void)_addDebugRecordErrorForRecipeID:(id)arg1 description:(id)arg2;	// IMP=0x0010000000005e20
- (id)initWithTask:(id)arg1 plugin:(id)arg2 dodMLServer:(id)arg3;	// IMP=0x0010000000005b95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

