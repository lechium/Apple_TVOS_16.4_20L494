//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CICircularityDescriptor : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputCentroid;	// 80 = 0x50
    CIVector *inputExtent;	// 88 = 0x58
}

@property(retain, nonatomic) CIImage *inputCentroid; // @synthesize inputCentroid;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
- (id)outputImage;	// IMP=0x000000000007b0bb

@end

