//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNHandKeypointsDetectorEspresso
{
    float *_inputData;	// 8 = 0x8
    _Bool _forceCPU;	// 16 = 0x10
    VCPCNNModelEspresso *_modelEspresso;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001df24
- (int)generateHandKeypoints:(struct CGPoint *)arg1 keypointConfidence:(float *)arg2 offset:(float)arg3;	// IMP=0x000000000001dbe6
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4 offset:(float *)arg5;	// IMP=0x000000000001db2b
- (void)dealloc;	// IMP=0x000000000001dae5
- (id)init:(_Bool)arg1 sharedModel:(_Bool)arg2 modelName:(id)arg3;	// IMP=0x000000000001d684

@end
