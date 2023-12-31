//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputInterPassAnalysisHelper
{
    AVAssetWriterInputWritingHelper *_writingHelper;	// 24 = 0x18
    AVAssetWriterInputPassDescription *_initialPassDescription;	// 32 = 0x20
}

- (void)markCurrentPassAsFinished;	// IMP=0x00000000000abf48
- (void)markAsFinished;	// IMP=0x00000000000abed6
- (struct __CVPixelBufferPool *)pixelBufferPool;	// IMP=0x00000000000abeb9
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000abe47
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000abdb4
- (void)stopRequestingMediaData;	// IMP=0x00000000000abd42
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000abcd0
- (_Bool)shouldRespondToInitialPassDescription;	// IMP=0x00000000000abcc8
- (_Bool)isReadyForMoreMediaData;	// IMP=0x00000000000abcc0
- (id)currentPassDescription;	// IMP=0x00000000000abcaf
- (_Bool)canPerformMultiplePasses;	// IMP=0x00000000000abc92
- (long long)status;	// IMP=0x00000000000abc75
- (void)startPassAnalysis;	// IMP=0x00000000000abb2a
- (void)dealloc;	// IMP=0x00000000000abad2
- (id)initWithWritingHelper:(id)arg1;	// IMP=0x00000000000ab9dc
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000ab9c8

@end

