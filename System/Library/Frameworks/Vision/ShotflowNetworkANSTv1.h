//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANSTv1
{
}

+ (_Bool)inputBGR;	// IMP=0x008000000026b73b
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x008000000026b72f
+ (float)inputScale;	// IMP=0x008000000026b721
+ (_Bool)hasPose;	// IMP=0x008000000026b719
+ (const void *)importantClasses;	// IMP=0x008000000026b6ed
+ (unsigned long long)mumberPosClasses;	// IMP=0x008000000026b6e2
+ (struct CGSize)inputImageSize;	// IMP=0x008000000026b6cc
+ (id)inputLayerName;	// IMP=0x008000000026b6bf
+ (id)modelName;	// IMP=0x008000000026b6b2
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x000000000026c14e
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x000000000026bfac
- (void)initializeBuffers;	// IMP=0x000000000026b7e1

@end

