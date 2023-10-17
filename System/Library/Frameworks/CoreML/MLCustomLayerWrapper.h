//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MLCustomLayer;

__attribute__((visibility("hidden")))
@interface MLCustomLayerWrapper : NSObject
{
    _Bool _ndMode;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
    NSObject<MLCustomLayer> *_customImpl;	// 24 = 0x18
}

+ (id)factory;	// IMP=0x00100000000a94e5
+ (id)espressoTensorsToCoremlTensors:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x00100000000a9388
+ (id)espressoTensorsToCoremlTensorsGPU:(id)arg1;	// IMP=0x00100000000a9231
+ (id)espressoTensorToCoremlTensor:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x00100000000a90c6
+ (id)getStrides:(id)arg1;	// IMP=0x00100000000a8e69
+ (id)coremlShapesToEspressoShapes:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x00100000000a8d0c
+ (id)coremlShapeToEspressoShape:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x00100000000a8889
+ (id)espressoShapesToCoremlShapes:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x00100000000a872c
+ (id)espressoShapeToCoremlShape:(id)arg1 ndMode:(_Bool)arg2;	// IMP=0x00100000000a7f47
- (void).cxx_destruct;	// IMP=0x00000000000a7d76
@property(retain, nonatomic) NSObject<MLCustomLayer> *customImpl; // @synthesize customImpl=_customImpl;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) _Bool ndMode; // @synthesize ndMode=_ndMode;
- (_Bool)hasGPUSupport;	// IMP=0x00000000000a7d30
- (void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;	// IMP=0x00000000000a794d
- (void)setMappedWeights:(void *)arg1 sizeInBytes:(unsigned long long)arg2;	// IMP=0x00000000000a74f5
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000a6d74
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;	// IMP=0x00000000000a67b5
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000000000a5ed9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

