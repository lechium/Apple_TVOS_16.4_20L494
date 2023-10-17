//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterFigAssetWriterNotificationHandler, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterWritingHelper
{
    struct OpaqueFigAssetWriter *_figAssetWriter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;	// 32 = 0x20
    _Bool _startSessionCalled;	// 40 = 0x28
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;	// 48 = 0x30
    void *_figAssetWriterCallbackContextToken;	// 56 = 0x38
}

+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;	// IMP=0x001000000009ad42
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2 andDelegate:(id)arg3;	// IMP=0x001000000009a85e
+ (id)prepareInputsOperationsWithInputs:(id)arg1;	// IMP=0x001000000009a61e
- (void)flushSegment;	// IMP=0x000000000009af54
- (void)flush;	// IMP=0x000000000009af42
- (void)transitionToFailedStatusWithError:(id)arg1;	// IMP=0x000000000009aed1
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1;	// IMP=0x000000000009a54c
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1;	// IMP=0x000000000009a1e9
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a028
- (void)finishWriting;	// IMP=0x0000000000099c60
- (void)cancelWriting;	// IMP=0x0000000000099ad4
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;	// IMP=0x0000000000099a08
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000099807
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009968a
- (long long)status;	// IMP=0x000000000009967f
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000009966a
- (void)dealloc;	// IMP=0x00000000000995b7
- (id)figTrackReferences;	// IMP=0x0000000000099137
- (_Bool)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)arg1 preferredOutputSegmentInterval:(CDStruct_1b6d18a9)arg2 returningDebugDescription:(id *)arg3;	// IMP=0x0000000000098aa0
- (_Bool)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)arg1;	// IMP=0x00000000000986b7
- (id)initWithConfigurationState:(id)arg1 assetWriter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009739a
- (id)initWithConfigurationState:(id)arg1 assetWriter:(id)arg2;	// IMP=0x0000000000097385

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

