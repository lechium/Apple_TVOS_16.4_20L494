//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVImageProxy;

__attribute__((visibility("hidden")))
@interface _TVPImageProxyRepresentation
{
    TVImageProxy *_imageProxy;	// 80 = 0x50
    struct CGImage *_originalImage;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000009ada4
- (id)_originalImageCacheKey;	// IMP=0x000000000009ad33
- (struct CGImage *)_originalImage;	// IMP=0x000000000009ab6a
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a8c2
- (void)dealloc;	// IMP=0x000000000009a864
- (id)initWithImageProxy:(id)arg1;	// IMP=0x000000000009a7d9

@end

