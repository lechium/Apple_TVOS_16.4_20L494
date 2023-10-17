//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIPhotoEffect : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
}

+ (id)customAttributes;	// IMP=0x0060000000105838
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (int)_maxVersion;	// IMP=0x0000000000105e74
- (id)outputImage;	// IMP=0x0000000000105b7b
- (id)cubeColorSpaceName;	// IMP=0x0000000000105b6b
- (id)cubePath;	// IMP=0x0000000000105b08
- (id)cubeName;	// IMP=0x0000000000105a62
- (int)_defaultVersion;	// IMP=0x0000000000105a5a
- (void)setDefaults;	// IMP=0x00000000001059dd
- (id)init;	// IMP=0x0000000000105955

@end

