//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIPressAndHoldPopoverController
{
}

+ (_Bool)canPresentPressAndHoldPopoverForKeyString:(id)arg1;	// IMP=0x0080000000002a6a
+ (_Bool)canPresentPressAndHoldPopoverForEvent:(id)arg1;	// IMP=0x0080000000002a62
- (void)insertSelectedAccentVariant:(id)arg1 shouldDismissPopover:(_Bool)arg2;	// IMP=0x0000000000002c7d
- (void)pressAndHoldViewDidAcceptAccentVariant:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000002c66
- (void)showAccentVariantInForwardDirection:(_Bool)arg1;	// IMP=0x0000000000002c60
- (_Bool)hasAccentVariantInForwardDirection:(_Bool)arg1;	// IMP=0x0000000000002c58
- (_Bool)handleKeyInputForAccentSelector:(id)arg1;	// IMP=0x0000000000002b5c
- (_Bool)handleSelectionEvent:(id)arg1;	// IMP=0x0000000000002b54
- (_Bool)handleKeyInputForPressAndHoldSelector:(id)arg1;	// IMP=0x0000000000002a7a
- (_Bool)isSamePressAndHoldPopoverForKeyString:(id)arg1;	// IMP=0x0000000000002a72
- (_Bool)handleHardwareKeyboardEvent:(id)arg1;	// IMP=0x00000000000029ed
- (id)initWithKeyString:(id)arg1;	// IMP=0x00000000000029be

@end

