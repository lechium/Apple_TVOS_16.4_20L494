//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIHighlightRecoveryProcessor : CIImageProcessorKernel
{
}

+ (_Bool)allowPartialOutputRegion;	// IMP=0x008000000010ef87
+ (_Bool)synchronizeInputs;	// IMP=0x008000000010ef7f
+ (int)outputFormat;	// IMP=0x008000000010ef70
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000010ef61
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000010ee49
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000010e0e1
+ (id)functionConstantValuesTuningParameters:(id)arg1;	// IMP=0x008000000010df18
+ (id)compilePipelineForDevice:(id)arg1 functionName:(id)arg2 constantValues:(id)arg3;	// IMP=0x008000000010de04

@end

