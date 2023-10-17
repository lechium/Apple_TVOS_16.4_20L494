//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface VideoStillImageExtractionTask
{
    NSData *_imageData;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x002000000001c3bb
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
- (void)storeImage;	// IMP=0x001000000001bfd9
- (double)posterFrameScaleFactorForCGImage:(struct CGImage *)arg1;	// IMP=0x001000000001bda8
- (void)extractStillImage;	// IMP=0x001000000001b53b
- (void)performConversion;	// IMP=0x001000000001b4cb

@end

