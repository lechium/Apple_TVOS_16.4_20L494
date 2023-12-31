//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WAKView, WebHighlightLayer, WebNodeHighlightView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlight : NSObject
{
    WAKView *_targetView;	// 8 = 0x8
    WebHighlightLayer *_highlightLayer;	// 16 = 0x10
    WebNodeHighlightView *_highlightView;	// 24 = 0x18
    NakedPtr_5b249b89 _inspectorController;	// 32 = 0x20
    id _delegate;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000000109a50
- (NakedPtr_5b249b89)inspectorController;	// IMP=0x0000000000109a40
- (id)targetView;	// IMP=0x0000000000109a30
- (void)setNeedsDisplay;	// IMP=0x00000000001099e0
- (void)setDelegate:(id)arg1;	// IMP=0x00000000001099d0
- (id)highlightView;	// IMP=0x00000000001099c0
- (void)detach;	// IMP=0x0000000000109910
- (id)delegate;	// IMP=0x0000000000109900
- (void)attach;	// IMP=0x0000000000109880
- (void)dealloc;	// IMP=0x0000000000109850
- (id)initWithTargetView:(id)arg1 inspectorController:(NakedPtr_5b249b89)arg2;	// IMP=0x0000000000109760

@end

