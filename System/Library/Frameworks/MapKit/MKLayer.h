//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface MKLayer : CALayer
{
    struct CGRect _hitBounds;	// 8 = 0x8
    struct CGPoint _hitOffset;	// 40 = 0x28
    struct CGPoint _hitOutset;	// 56 = 0x38
}

@property(readonly, nonatomic) struct CGRect hitBounds; // @synthesize hitBounds=_hitBounds;
@property(nonatomic) struct CGPoint hitOutset; // @synthesize hitOutset=_hitOutset;
@property(nonatomic) struct CGPoint hitOffset; // @synthesize hitOffset=_hitOffset;
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x000000000019ec95
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000019eba4

@end

