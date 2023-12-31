//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsiPadCompanion
{
    NSArray *_hdrModePixelFormats;	// 48 = 0x30
    NSMutableSet *_hdrModesSupported;	// 56 = 0x38
}

- (id)hdrModesSupported;	// IMP=0x000000000027d7bb
- (id)hdrModePixelFormats;	// IMP=0x000000000027d7aa
- (long long)tilesPerFrame;	// IMP=0x000000000027d778
- (int)operatingMode;	// IMP=0x000000000027d76d
- (long long)captureSource;	// IMP=0x000000000027d762
- (long long)videoStreamMode;	// IMP=0x000000000027d757
- (void)dealloc;	// IMP=0x000000000027d6dc
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x000000000027d5f0

@end

