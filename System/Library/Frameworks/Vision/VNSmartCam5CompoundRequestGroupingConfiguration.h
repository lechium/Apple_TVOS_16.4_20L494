//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject
{
    unsigned long long _imageCropAndScaleOption;	// 8 = 0x8
    NSMutableSet *_originalRequests;	// 16 = 0x10
    NSMutableDictionary *_detectorConfigurationOptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001be15f
- (_Bool)preferBackgroundProcessing;	// IMP=0x00000000001be00e
- (id)processingDevice;	// IMP=0x00000000001bdfa6
- (id)detectorConfigurationOptions;	// IMP=0x00000000001bdf88
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;	// IMP=0x00000000001bdf69
- (id)originalRequests;	// IMP=0x00000000001bdf53
- (void)addOriginalRequest:(id)arg1;	// IMP=0x00000000001bdf3d
- (unsigned long long)imageCropAndScaleOption;	// IMP=0x00000000001bdf33
- (id)initWithImageCropAndScaleOption:(unsigned long long)arg1;	// IMP=0x00000000001bde97

@end

