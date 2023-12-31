//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplL
{
    const void *_maxEntModel;	// 8 = 0x8
    NLModelConfiguration *_configuration;	// 16 = 0x10
    NSDictionary *_labelMap;	// 24 = 0x18
    NSDictionary *_vocabularyMap;	// 32 = 0x20
    NSDictionary *_documentFrequencyMap;	// 40 = 0x28
    unsigned long long _numberOfTrainingInstances;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000011954
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000011855
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000011744
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x000000000001164c
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000011560
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x000000000001154f
- (id)documentFrequencyMap;	// IMP=0x000000000001153a
- (id)vocabularyMap;	// IMP=0x0000000000011525
- (id)labelMap;	// IMP=0x0000000000011510
- (id)configuration;	// IMP=0x00000000000114fb
- (id)modelData;	// IMP=0x00000000000114cc
- (void)dealloc;	// IMP=0x0000000000011486
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001128a
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x00000000000110c2
- (id)initWithOwnedModelObject:(const void *)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;	// IMP=0x0000000000010f35

@end

