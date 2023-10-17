//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _MKMarkerStyle : NSObject
{
    UIColor *_markerColor;	// 8 = 0x8
    double _shadowAlpha;	// 16 = 0x10
    UIColor *_strokeColor;	// 24 = 0x18
    double _strokeWidth;	// 32 = 0x20
    UIColor *_glyphColor;	// 40 = 0x28
    UIImage *_glyphImage;	// 48 = 0x30
}

+ (id)markerStyleForTraitCollection:(id)arg1 state:(long long)arg2 styleAttributes:(id)arg3 coordinate:(struct CLLocationCoordinate2D)arg4;	// IMP=0x006000000002cda7
- (void).cxx_destruct;	// IMP=0x000000000002d64f
@property(readonly, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(readonly, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(readonly, nonatomic) UIColor *markerColor; // @synthesize markerColor=_markerColor;

@end

