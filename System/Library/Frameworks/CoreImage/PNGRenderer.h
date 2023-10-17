//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PNGRenderer
{
    struct __CFURL *fullURL;	// 40 = 0x28
    struct CGColor *background;	// 48 = 0x30
    struct CGColorSpace *colorSpace;	// 56 = 0x38
}

- (struct CGImage *)cgimage;	// IMP=0x00000000000a9e87
- (void)flushRender;	// IMP=0x00000000000a9e16
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;	// IMP=0x00000000000a9c93
- (void)setFileURL:(id)arg1;	// IMP=0x00000000000a9c5e
- (void)dealloc;	// IMP=0x00000000000a9c0d
- (id)init;	// IMP=0x00000000000a9bac

@end

