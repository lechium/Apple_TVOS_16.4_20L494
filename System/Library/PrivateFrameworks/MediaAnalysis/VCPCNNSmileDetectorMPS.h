//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNSmileDetectorMPS
{
    VCPCNNModel *_model;	// 8 = 0x8
    VCPCNNData *_input;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000193f9a
- (int)computeSmileScore:(float *)arg1;	// IMP=0x0000000000193eb9
- (float *)getInputBuffer;	// IMP=0x0000000000193e9c
- (id)init;	// IMP=0x0000000000193700

@end

