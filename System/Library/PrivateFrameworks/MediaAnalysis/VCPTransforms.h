//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPTransforms : NSObject
{
    int _minSize;	// 8 = 0x8
    int _transformedImageWidth;	// 12 = 0xc
    int _transformedImageHeight;	// 16 = 0x10
}

- (struct __CVBuffer *)cropAndScale:(struct __CVBuffer *)arg1 regionCrop:(struct CGRect)arg2;	// IMP=0x00000000001f0757
- (id)initImageTransform:(int)arg1 transformedImageWidth:(int)arg2 transformedImageHeight:(int)arg3;	// IMP=0x00000000001f0744

@end

