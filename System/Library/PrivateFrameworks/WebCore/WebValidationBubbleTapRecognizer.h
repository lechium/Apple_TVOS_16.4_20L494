//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebValidationBubbleTapRecognizer : NSObject
{
    struct RetainPtr<UIViewController> _popoverController;	// 8 = 0x8
    struct RetainPtr<UITapGestureRecognizer> _tapGestureRecognizer;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000b52470
- (void).cxx_destruct;	// IMP=0x0000000000b52430
- (void)dismissPopover;	// IMP=0x0000000000b52410
- (void)dealloc;	// IMP=0x0000000000b523b0
- (id)initWithPopoverController:(id)arg1;	// IMP=0x0000000000b522e0

@end

