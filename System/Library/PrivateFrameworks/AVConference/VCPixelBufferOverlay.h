//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPixelBufferOverlay
{
    struct CGContext *_bitmapContext;	// 24 = 0x18
    struct VCInfoDetails _currentDetails;	// 32 = 0x20
}

@property struct VCInfoDetails currentDetails; // @synthesize currentDetails=_currentDetails;
- (id)reverseString:(id)arg1;	// IMP=0x00000000002d3dfd
- (void)drawOverlayMessage:(id)arg1 onPixelBuffer:(struct __CVBuffer *)arg2 attributes:(struct __CFDictionary *)arg3;	// IMP=0x00000000002d36c4
- (void)updateOverlayWithPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000002d2cb4
- (void)dealloc;	// IMP=0x00000000002d2c4b
- (id)init;	// IMP=0x00000000002d2b18

@end

