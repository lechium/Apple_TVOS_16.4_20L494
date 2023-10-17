//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CALayer, NSDictionary;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCommonRenderer : UIView
{
    _Bool m_loaded;	// 144 = 0x90
    NSDictionary *m_images;	// 152 = 0x98
    NSDictionary *m_offsets;	// 160 = 0xa0
    CALayer *m_back;	// 168 = 0xa8
    CALayer *m_mask;	// 176 = 0xb0
    CALayer *m_content;	// 184 = 0xb8
    CALayer *m_front;	// 192 = 0xc0
    _Bool _isRegisteredForGeometryChanges;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000f2e4db
- (id)visualsForMagnifier;	// IMP=0x0000000000f2e4c3
- (void)_geometryChanged:(const CDStruct_f46536fb *)arg1 forAncestor:(id)arg2;	// IMP=0x0000000000f2e12c
- (void)update;	// IMP=0x0000000000f2d529
- (id)backgroundColourIfNecessary;	// IMP=0x0000000000f2d15b
- (id)magnifier;	// IMP=0x0000000000f2d149
- (void)didMoveToSuperview;	// IMP=0x0000000000f2d110
- (void)performOperations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f2cca2
- (void)loadImages;	// IMP=0x0000000000f2c978

@end

