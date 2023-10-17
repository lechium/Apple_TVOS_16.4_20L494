//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AEVConversionUtils : NSObject
{
}

+ (struct CGImage *)createImageFromGrayscaleData:(char *)arg1 ofWidth:(int)arg2 andHeight:(int)arg3;	// IMP=0x0080000000045aa8
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;	// IMP=0x0080000000045a4b
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1;	// IMP=0x0080000000045a2d
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;	// IMP=0x0080000000045879
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;	// IMP=0x008000000004569d
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg1;	// IMP=0x0080000000045488

@end
