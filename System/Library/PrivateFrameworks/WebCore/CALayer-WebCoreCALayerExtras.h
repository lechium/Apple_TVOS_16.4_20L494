//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (WebCoreCALayerExtras)
+ (id)_web_renderLayerWithContextID:(unsigned int)arg1 shouldPreserveFlip:(_Bool)arg2;	// IMP=0x0080000000ae1990
- (_Bool)_web_maskMayIntersectRect:(struct CGRect)arg1;	// IMP=0x0010000000ae1b20
- (_Bool)_web_maskContainsPoint:(struct CGPoint)arg1;	// IMP=0x0010000000ae19f0
- (void)_web_setLayerTopLeftPosition:(struct CGPoint)arg1;	// IMP=0x0010000000ae18c0
- (void)_web_setLayerBoundsOrigin:(struct CGPoint)arg1;	// IMP=0x0010000000ae1840
- (void)web_disableAllActions;	// IMP=0x0010000000ae1630
@end
