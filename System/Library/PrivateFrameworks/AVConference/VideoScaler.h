//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPixelTransferSession;

__attribute__((visibility("hidden")))
@interface VideoScaler : NSObject
{
    VCPixelTransferSession *_pixelTransferSession;	// 8 = 0x8
}

- (int)convertAndScalePixelBuffer:(struct __CVBuffer *)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned int)arg4 usingPixelBufferPool:(struct __CVPixelBufferPool *)arg5 andStoreTo:(struct __CVBuffer **)arg6;	// IMP=0x000000000039e82c
- (void)dealloc;	// IMP=0x000000000039e7ce
- (id)init;	// IMP=0x000000000039e75f

@end

