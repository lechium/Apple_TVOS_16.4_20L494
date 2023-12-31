//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject
{
    unsigned long long height;	// 8 = 0x8
    unsigned long long width;	// 16 = 0x10
    unsigned long long bpr;	// 24 = 0x18
    void *data;	// 32 = 0x20
    short red;	// 40 = 0x28
    short green;	// 42 = 0x2a
    short blue;	// 44 = 0x2c
    short alpha;	// 46 = 0x2e
    struct CGColorSpace *cs;	// 48 = 0x30
}

+ (id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(struct CGColorSpace *)arg3;	// IMP=0x00100000000d1e5a
+ (id)forImage:(id)arg1 usingContext:(id)arg2;	// IMP=0x00100000000d1dfd
+ (id)withDictionary:(id)arg1;	// IMP=0x00100000000d1c72
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3 usingContext:(id)arg4;	// IMP=0x00100000000d194b
+ (id)fromImage:(struct CGImage *)arg1;	// IMP=0x00100000000d1543
+ (id)fromImageFile:(id)arg1;	// IMP=0x00100000000d1488
- (unsigned int)bytesPerPixel;	// IMP=0x00000000000d20d5
- (const char *)rowAtIndex:(unsigned int)arg1;	// IMP=0x00000000000d20b8
- (short)alpha;	// IMP=0x00000000000d20ae
- (short)blue;	// IMP=0x00000000000d20a4
- (short)green;	// IMP=0x00000000000d209a
- (short)red;	// IMP=0x00000000000d2090
- (unsigned long long)height;	// IMP=0x00000000000d2086
- (unsigned long long)width;	// IMP=0x00000000000d207c
- (void)dealloc;	// IMP=0x00000000000d202f
- (id)init;	// IMP=0x00000000000d1ff0
- (void)dumpImageAsDict:(id)arg1;	// IMP=0x00000000000d1ab6
- (void)dumpImageAsDeviceRGB:(id)arg1;	// IMP=0x00000000000d190b
- (void)dumpImage:(id)arg1;	// IMP=0x00000000000d189e
- (void)_dumpImage:(id)arg1 colorspace:(struct CGColorSpace *)arg2;	// IMP=0x00000000000d16d2

@end

