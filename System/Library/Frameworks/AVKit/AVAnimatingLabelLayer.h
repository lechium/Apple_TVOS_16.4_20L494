//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface AVAnimatingLabelLayer : CALayer
{
}

+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x00600000000e9d89
+ (_Bool)_isCustomAnimationKey:(id)arg1;	// IMP=0x00600000000e9d6d
- (id)actionForKey:(id)arg1;	// IMP=0x00000000000e9bfc
- (id)initWithLayer:(id)arg1;	// IMP=0x00000000000e9b4d
@property(readonly, nonatomic) AVAnimatingLabelLayer *presentationAnimatingLabelLayer;

// Remaining properties
@property(retain, nonatomic) id labelValue; // @dynamic labelValue;

@end
