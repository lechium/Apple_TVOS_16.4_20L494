//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRNeuralRecognizerConfiguration, MLModel;

__attribute__((visibility("hidden")))
@interface CRTextSequenceRecognizerModelCoreML
{
    CRNeuralRecognizerConfiguration *_configuration;	// 8 = 0x8
    MLModel *_model;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a74b
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)configuration;	// IMP=0x000000000001a724
- (_Bool)shouldSaturateInputBatchesForConfiguration:(id)arg1;	// IMP=0x000000000001a70f
- (id)inputBatchFromTextFeatures:(id)arg1 image:(id)arg2 featureWidth:(double)arg3 configuration:(id)arg4;	// IMP=0x000000000001a494
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a29d
- (id)predictionFromImg_input:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a209
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a14c
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a0cd
- (id)predictFromInputs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019f3a
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019e64
- (id)initWithMLConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019ddf
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019cfc
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019c43
- (id)init;	// IMP=0x0000000000019be6

@end

