//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV18CreateMLComponents11VideoReader8Observer : NSObject
{
    MISSING_TYPE *cameraSession;	// 8 = 0x8
    MISSING_TYPE *currentCameraPosition;	// 16 = 0x10
    MISSING_TYPE *frontCamera;	// 24 = 0x18
    MISSING_TYPE *frontCameraInput;	// 32 = 0x20
    MISSING_TYPE *backCamera;	// 40 = 0x28
    MISSING_TYPE *backCameraInput;	// 48 = 0x30
    MISSING_TYPE *configuration;	// 56 = 0x38
    MISSING_TYPE *continuation;	// 72 = 0x48
    MISSING_TYPE *queue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000008170
- (id)init;	// IMP=0x0000000000008270
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x00000000000081e0
- (void)dealloc;	// IMP=0x0000000000008150

@end
