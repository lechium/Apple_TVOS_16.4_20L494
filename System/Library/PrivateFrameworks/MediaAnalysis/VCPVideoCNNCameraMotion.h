//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPVideoCNNCameraMotion
{
    NSMutableArray *_results;	// 8 = 0x8
    VCPCNNModelEspresso *_motionTypeModel;	// 16 = 0x10
    VCPCNNModelEspresso *_motionScoreModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000026b7ab
- (id)results;	// IMP=0x000000000026b724
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x000000000026b71c
- (int)run:(id)arg1 withPersons:(id)arg2 andRegionCrop:(struct CGRect)arg3 atTime:(CDStruct_1b6d18a9)arg4 andDuration:(CDStruct_1b6d18a9)arg5;	// IMP=0x000000000026b188
- (id)init;	// IMP=0x000000000026af40

@end
