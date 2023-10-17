//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAMetalLayer.h>

@protocol CAMetalDrawable, GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface MetalLayer : CAMetalLayer
{
    id <GGLLayerDelegate> _delegate;	// 16 = 0x10
    shared_ptr_94286ce0 _device;	// 24 = 0x18
    shared_ptr_479d1306 _texture;	// 40 = 0x28
    struct shared_ptr<ggl::SamplerState> _samplerState;	// 56 = 0x38
    id <CAMetalDrawable> _prevDrawable;	// 72 = 0x48
    _Bool _sRGB;	// 80 = 0x50
    struct CGSize _backingSize;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0000000000962909
- (void).cxx_destruct;	// IMP=0x00000000009628ad
@property(readonly, nonatomic) _Bool sRGB; // @synthesize sRGB=_sRGB;
@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property __weak id <GGLLayerDelegate> renderDelegate; // @synthesize renderDelegate=_delegate;
- (void)display;	// IMP=0x0000000000962852
- (void)didEnterBackground;	// IMP=0x000000000096284c
- (void)onTimerFired:(double)arg1 presentAtTime:(double)arg2;	// IMP=0x00000000009627e2
- (void)onTimerFired:(double)arg1;	// IMP=0x00000000009627b4
- (void)_onTimerFired:(double)arg1 withPresent:(CDUnknownBlockType)arg2;	// IMP=0x000000000096238a
- (id)_updateDrawable;	// IMP=0x00000000009622cd
- (void)_createTexture;	// IMP=0x0000000000962094
- (void)layoutSublayers;	// IMP=0x000000000096208e
- (id)initWithDevice:(shared_ptr_94286ce0)arg1 sRGB:(_Bool)arg2;	// IMP=0x0000000000961d2d
@property(readonly) int backingFormat;

@end

