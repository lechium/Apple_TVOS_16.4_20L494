//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLGazetteer;

__attribute__((visibility("hidden")))
@interface NLModelImplG
{
    NLGazetteer *_gazetteer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000574d
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000005655
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000005638
- (id)modelData;	// IMP=0x000000000000561b
- (id)gazetteer;	// IMP=0x0000000000005606
- (unsigned long long)systemVersion;	// IMP=0x00000000000055fb
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000055ed
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000005554
- (id)initWithGazetteer:(id)arg1;	// IMP=0x00000000000054e6

@end

