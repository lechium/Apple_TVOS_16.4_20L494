//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

__attribute__((visibility("hidden")))
@interface SHListeningOuterCircleLayer
{
    CALayer *_circleContainerLayer;	// 8 = 0x8
    CALayer *_circleLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005e33
@property(retain, nonatomic) CALayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) CALayer *circleContainerLayer; // @synthesize circleContainerLayer=_circleContainerLayer;
- (void)layoutSublayers;	// IMP=0x0000000000005bb7
- (void)setup;	// IMP=0x0000000000005984

@end

