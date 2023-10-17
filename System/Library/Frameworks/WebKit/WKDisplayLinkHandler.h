//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WKDisplayLinkHandler : NSObject
{
    void *_drawingAreaProxy;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
}

- (void)pause;	// IMP=0x000000000034a0b5
- (void)schedule;	// IMP=0x000000000034a09d
- (void)invalidate;	// IMP=0x000000000034a074
- (void)displayLinkFired:(id)arg1;	// IMP=0x000000000034a062
- (void)setPreferredFramesPerSecond:(long long)arg1;	// IMP=0x000000000034a04c
- (void)dealloc;	// IMP=0x000000000034a01d
- (id)initWithDrawingAreaProxy:(void *)arg1;	// IMP=0x0000000000349dbf

@end
