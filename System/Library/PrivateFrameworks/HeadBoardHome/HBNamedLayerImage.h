//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider, UINamedLayerImage;

__attribute__((visibility("hidden")))
@interface HBNamedLayerImage : NSObject
{
    int _blendMode;	// 8 = 0x8
    NSObject<UINamedLayerImage> *_namedLayerImage;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
}

+ (id)namedLayerImageFromNamedLayerImage:(id)arg1 decodeImmediately:(_Bool)arg2;	// IMP=0x001000000009c845
+ (id)namedLayerImageFromNamedLayerImage:(id)arg1;	// IMP=0x001000000009c831
+ (id)namedLayerImageWithImage:(id)arg1 decodeImmediately:(_Bool)arg2;	// IMP=0x001000000009c791
+ (id)namedLayerImageWithImage:(id)arg1;	// IMP=0x001000000009c77d
- (void).cxx_destruct;	// IMP=0x000000000009cc7f
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSObject<UINamedLayerImage> *namedLayerImage; // @synthesize namedLayerImage=_namedLayerImage;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
- (id)imageObj;	// IMP=0x000000000009cc25
@property(nonatomic) _Bool fixedFrame;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;
- (id)_init;	// IMP=0x000000000009c742
- (id)init;	// IMP=0x000000000009c734

// Remaining properties
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

