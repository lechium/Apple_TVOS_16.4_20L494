//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewPropertyAnimator;

@interface _PBAppSwitcherLaunchAnimateTransaction : BSTransaction
{
    UIViewPropertyAnimator *_propertyAnimator;	// 8 = 0x8
    CDStruct_a697a85d _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000012fe1b
@property(readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
@property(readonly, nonatomic) CDStruct_a697a85d context; // @synthesize context=_context;
- (void)_begin;	// IMP=0x001000000012fa7d
- (id)initWithContext:(CDStruct_a697a85d)arg1;	// IMP=0x001000000012f9d5

@end

