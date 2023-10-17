//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CILensModelKernelMetalProcessor : CIImageProcessorKernel
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000000e92eb
+ (_Bool)synchronizeInputs;	// IMP=0x00800000000e92e3
+ (int)outputFormat;	// IMP=0x00800000000e92d4
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000000e92cc
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000e8a3f
+ (void)compilePipelinesIfNeeded:(id)arg1;	// IMP=0x00800000000e89bf
+ (void)releasePipelines;	// IMP=0x00800000000e893a
+ (void)compilePipelines:(id)arg1;	// IMP=0x00800000000e865f
+ (_Bool)hasValidPipelines;	// IMP=0x00800000000e8627

@end

