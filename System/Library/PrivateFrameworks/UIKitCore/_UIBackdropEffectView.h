//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CABackdropLayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIBackdropEffectView : UIView
{
    CABackdropLayer *_backdropLayer;	// 144 = 0x90
    double _zoom;	// 152 = 0x98
}

+ (Class)layerClass;	// IMP=0x00100000000b819b
- (void).cxx_destruct;	// IMP=0x00000000000b886d
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(retain, nonatomic) CABackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x00000000000b87d5
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000b82b5
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000000b81be
- (id)init;	// IMP=0x00000000000b80c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

