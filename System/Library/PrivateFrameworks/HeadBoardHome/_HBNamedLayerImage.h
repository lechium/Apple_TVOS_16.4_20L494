//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider;

__attribute__((visibility("hidden")))
@interface _HBNamedLayerImage : NSObject
{
    int _blendMode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _opacity;	// 24 = 0x18
    UIImage *_imageObj;	// 32 = 0x20
    double _scale;	// 40 = 0x28
    id <UINamedLayerContentProvider> _contentProvider;	// 48 = 0x30
    struct CGRect _frame;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000026cab
@property(retain, nonatomic) id <UINamedLayerContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCUINamedLayerImage:(id)arg1;	// IMP=0x0000000000026aa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fixedFrame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

