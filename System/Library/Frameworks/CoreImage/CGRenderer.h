//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CGRenderer : NSObject
{
    struct CGContext *context;	// 8 = 0x8
    _Bool drawEdgesFirst;	// 16 = 0x10
    _Bool drawWithSplines;	// 17 = 0x11
    int direction;	// 20 = 0x14
    struct CGSize separation;	// 24 = 0x18
}

@property _Bool drawWithSplines; // @synthesize drawWithSplines;
@property _Bool drawEdgesFirst; // @synthesize drawEdgesFirst;
@property struct CGSize separation; // @synthesize separation;
@property int direction; // @synthesize direction;
- (void)flushRender;	// IMP=0x00000000000a97b4
- (void)drawEdge:(id)arg1 withPath:(id)arg2;	// IMP=0x00000000000a935d
- (void)hyperlinkEdge:(id)arg1 from:(struct CGPoint)arg2 to:(struct CGPoint)arg3;	// IMP=0x00000000000a91f8
- (void)_drawCubicSpline:(id)arg1;	// IMP=0x00000000000a8b73
- (void)_drawPolyline:(id)arg1;	// IMP=0x00000000000a88de
- (void)drawNode:(id)arg1;	// IMP=0x00000000000a8883
- (void)_drawNodeBadge:(id)arg1;	// IMP=0x00000000000a8712
- (void)_drawNodeContent:(id)arg1;	// IMP=0x00000000000a755e
- (struct CGColor *)_colorForNodeColor:(int)arg1;	// IMP=0x00000000000a72f1
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;	// IMP=0x00000000000a72e9
- (void)setFileTitle:(id)arg1;	// IMP=0x00000000000a72e3
- (void)setFileURL:(id)arg1;	// IMP=0x00000000000a72dd
- (void)dealloc;	// IMP=0x00000000000a729e
- (id)init;	// IMP=0x00000000000a7254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

