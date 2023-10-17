//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock;
@protocol MTLBlitCommandEncoder, MTLCommandBuffer, MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTKTextureUploader : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandBuffer> _commandBuffer;	// 16 = 0x10
    id <MTLBlitCommandEncoder> _blit;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 40 = 0x28
}

- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000083e5
- (id)newTextureWithData:(id)arg1 options:(id)arg2;	// IMP=0x0000000000007cad
- (void)copyTexture:(id)arg1 toTexture:(id)arg2;	// IMP=0x0000000000007a03
- (void)copyBytes:(const void *)arg1 toTexture:(id)arg2 bitsPerPixel:(unsigned long long)arg3 pixelComponents:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 region:(CDStruct_4c83c94d)arg7 slice:(unsigned long long)arg8 level:(unsigned long long)arg9 flipVertically:(_Bool)arg10;	// IMP=0x00000000000078f6
- (void)generateMipmapsForTexture:(id)arg1;	// IMP=0x00000000000078a6
- (void)dealloc;	// IMP=0x0000000000007806
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 notifyQueue:(id)arg3;	// IMP=0x000000000000773b

@end

