//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIPersonSegmentationKernel : CIImageProcessorKernel
{
}

+ (int)outputFormat;	// IMP=0x00800000001fba62
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000001fba53
+ (_Bool)allowPartialOutputRegion;	// IMP=0x00800000001fba4b
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000001fb437
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000001fb3ea

@end

