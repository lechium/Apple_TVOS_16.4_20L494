//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLRenderPipelineDescriptor, NSMutableDictionary;
@protocol MTLDevice;

@interface GTMTLTextureRenderer : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    MTLRenderPipelineDescriptor *_overlayPipelineDescriptor;	// 16 = 0x10
    MTLRenderPipelineDescriptor *_texturePipelineDescriptor;	// 24 = 0x18
    MTLRenderPipelineDescriptor *_depthStencilPipelineDescriptor;	// 32 = 0x20
    NSMutableDictionary *_overlayPipelines;	// 40 = 0x28
    NSMutableDictionary *_texturePipelines;	// 48 = 0x30
    NSMutableDictionary *_depthStencilPipelines;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000025cd5
- (void)renderEncodedCommands:(id)arg1 toCommandBuffer:(id)arg2 withView:(id)arg3;	// IMP=0x00100000000259b4
- (void)render:(id)arg1 withEncoder:(id)arg2 withFormat:(unsigned long long)arg3 renderTargetSize:(struct CGSize)arg4 viewContentsScale:(double)arg5;	// IMP=0x001000000002561b
- (void)renderTexture:(id)arg1 isDepthStencil:(_Bool)arg2 shrinkToFit:(_Bool)arg3 withEncoder:(id)arg4 withFormat:(unsigned long long)arg5 transform:(struct CATransform3D)arg6 anchor:(struct CGPoint)arg7 bounds:(struct CGRect)arg8 renderTargetSize:(struct CGSize)arg9 viewContentsScale:(double)arg10;	// IMP=0x00100000000253e8
- (void)renderOverlay:(id)arg1 color:(unsigned int)arg2 shrinkToFit:(_Bool)arg3 withEncoder:(id)arg4 withFormat:(unsigned long long)arg5 transform:(struct CATransform3D)arg6 anchor:(struct CGPoint)arg7 bounds:(struct CGRect)arg8 renderTargetSize:(struct CGSize)arg9 viewContentsScale:(double)arg10;	// IMP=0x0010000000025147
- (id)wrapLinear:(id)arg1;	// IMP=0x00100000000250a7
- (id)getPipelineStateFromCache:(id)arg1 withDescriptor:(id)arg2 withFormat:(unsigned long long)arg3;	// IMP=0x0010000000024f29
- (id)initWithDevice:(id)arg1;	// IMP=0x0010000000024c6d

@end

