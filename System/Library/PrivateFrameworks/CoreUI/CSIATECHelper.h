//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CSIATECHelper : NSObject
{
    unsigned int width;	// 8 = 0x8
    unsigned int height;	// 12 = 0xc
    unsigned int rowbytes;	// 16 = 0x10
    unsigned int glInternalFormat;	// 20 = 0x14
    unsigned int metalPixelFormat;	// 24 = 0x18
    struct __CFBoolean *twiddled;	// 32 = 0x20
    struct __CFData *data;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x000000000006c100

@end

