//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimatorMPS
{
    VCPCNNModel *_model;	// 8 = 0x8
    VCPCNNData *_input;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021f53c
- (int)computePoseScore:(float *)arg1;	// IMP=0x000000000021f2e3
- (float *)getInputBuffer;	// IMP=0x000000000021f2c6
- (id)init;	// IMP=0x000000000021eb2a

@end

