//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIRelationshipGestureRecognizer : UIGestureRecognizer
{
    _Bool _succeedsOnTouchesEnded;	// 8 = 0x8
}

@property(nonatomic) _Bool succeedsOnTouchesEnded; // @synthesize succeedsOnTouchesEnded=_succeedsOnTouchesEnded;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000752708
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007526ca
- (void)_succeed;	// IMP=0x00000000007526b3
- (void)_fail;	// IMP=0x000000000075269c

@end

