//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCloudKitFakeDynamicDerivatives : NSObject
{
}

+ (id)transformData:(id)arg1 fileType:(id)arg2 matchingResource:(id)arg3 error:(id *)arg4;	// IMP=0x00200000000c67e4
+ (_Bool)transformFromURL:(id)arg1 fileType:(id)arg2 toTargetURL:(id)arg3 matchingResource:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000c6551
+ (_Bool)_transferImageFromSource:(struct CGImageSource *)arg1 toDestination:(struct CGImageDestination *)arg2 matchingResource:(id)arg3;	// IMP=0x00100000000c64f6
+ (id)_outputOptionsFromSource:(struct CGImageSource *)arg1 matchingResource:(id)arg2;	// IMP=0x00100000000c633f
+ (id)_metadataWithoutOrientation:(id)arg1;	// IMP=0x00100000000c6255
+ (unsigned long long)realResourceTypeForResource:(id)arg1;	// IMP=0x00100000000c61b3
+ (_Bool)isFakeDerivative:(id)arg1;	// IMP=0x00100000000c612e
+ (id)overriddenResourcesFromResources:(id)arg1;	// IMP=0x00100000000c5ddc
+ (_Bool)usesFakeDerivatives;	// IMP=0x00100000000c5dd0
+ (void)setAllowsFakeDerivatives:(_Bool)arg1;	// IMP=0x00100000000c596f
+ (id)fakeDerivativesDescription;	// IMP=0x00100000000c5757
+ (_Bool)allowsFakeDerivatives;	// IMP=0x00100000000c574b

@end

