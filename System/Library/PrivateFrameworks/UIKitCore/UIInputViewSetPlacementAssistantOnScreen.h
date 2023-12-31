//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIInputViewSetPlacementAccessoryOnScreen;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementAssistantOnScreen
{
    UIInputViewSetPlacementAccessoryOnScreen *_cachedSecondaryPlacement;	// 40 = 0x28
    NSArray *_subPlacements;	// 48 = 0x30
}

+ (id)infoWithPoint:(struct CGPoint)arg1 isCompact:(_Bool)arg2 frame:(struct CGRect)arg3 position:(unsigned long long)arg4;	// IMP=0x00100000009fa278
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009fa270
- (void).cxx_destruct;	// IMP=0x00000000009fa9d9
- (struct UIEdgeInsets)inputAccessoryViewPadding;	// IMP=0x00000000009fa9c6
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;	// IMP=0x00000000009fa748
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;	// IMP=0x00000000009fa6e5
- (_Bool)accessoryViewWillAppear;	// IMP=0x00000000009fa6d3
- (_Bool)inputViewWillAppear;	// IMP=0x00000000009fa6cb
- (_Bool)showsEditItems;	// IMP=0x00000000009fa6b6
- (_Bool)showsInputOrAssistantViews;	// IMP=0x00000000009fa6ae
- (_Bool)showsInputViews;	// IMP=0x00000000009fa6a6
- (_Bool)isFloatingAssistantView;	// IMP=0x00000000009fa65c
- (double)verticalOffset;	// IMP=0x00000000009fa631
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009fa463
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x00000000009fa404
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;	// IMP=0x00000000009fa206
- (id)subPlacementsForInputViewSet:(id)arg1;	// IMP=0x00000000009fa08e
- (id)subPlacements;	// IMP=0x00000000009fa007

@end

