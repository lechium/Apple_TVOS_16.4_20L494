//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIMetalProcessor : CIImageProcessorKernel
{
}

+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x00800000000f510a
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x00800000000f5102
+ (_Bool)allowPartialOutputRegion;	// IMP=0x00800000000f50fa
+ (_Bool)synchronizeInputs;	// IMP=0x00800000000f50f2
+ (int)outputFormat;	// IMP=0x00800000000f50ea
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000000f50e2
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000000f4fd8
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000f4d0b
+ (void)setFilterParamsAndImages:(id)arg1 arguments:(id)arg2 filter:(id)arg3;	// IMP=0x00800000000f4c27
+ (void)setFilterParams:(id)arg1 arguments:(id)arg2 filter:(id)arg3;	// IMP=0x00800000000f4790

@end

