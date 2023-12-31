//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPImageSaliencyAnalyzerFull
{
    VCPCNNModel *_model;	// 16 = 0x10
    VCPCNNData *_input;	// 24 = 0x18
    NSURL *_modelURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000020debe
- (int)getSalientRegions:(CDUnknownBlockType)arg1;	// IMP=0x000000000020dcbb
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x000000000020dbdf
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;	// IMP=0x000000000020d444

@end

