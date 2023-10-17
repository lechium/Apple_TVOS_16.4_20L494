//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIInputViewSetPlacementOnScreen, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementFloating
{
    double _floatingWidth;	// 88 = 0x58
    UIView *_responderToFollow;	// 96 = 0x60
    struct CGRect _responderRect;	// 104 = 0x68
    struct CGSize _lastSize;	// 136 = 0x88
    UIInputViewSetPlacementOnScreen *_cachedSecondaryPlacement;	// 152 = 0x98
    NSArray *_subPlacements;	// 160 = 0xa0
}

+ (id)infoWithPoint:(struct CGPoint)arg1 forOwner:(id)arg2;	// IMP=0x00100000009f9a06
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009f974e
+ (struct CGRect)frameAtOffset:(struct CGPoint)arg1 keyboardSize:(struct CGSize)arg2 screenSize:(struct CGSize)arg3;	// IMP=0x00100000009f962e
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2 floatingWidth:(double)arg3;	// IMP=0x00100000009f95cf
- (void).cxx_destruct;	// IMP=0x00000000009f9fc7
@property(nonatomic) double floatingWidth; // @synthesize floatingWidth=_floatingWidth;
@property(nonatomic) __weak UIResponder *responderToFollow; // @synthesize responderToFollow=_responderToFollow;
- (_Bool)accessoryViewWillAppear;	// IMP=0x00000000009f9f6e
- (_Bool)isFloatingAssistantView;	// IMP=0x00000000009f9f4a
- (id)assistantView;	// IMP=0x00000000009f9f2d
- (_Bool)isFloating;	// IMP=0x00000000009f9f25
- (_Bool)showsEditItems;	// IMP=0x00000000009f9f1d
- (struct CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1;	// IMP=0x00000000009f9d9a
- (id)expiringPlacement;	// IMP=0x00000000009f9d41
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;	// IMP=0x00000000009f9ce7
- (id)subPlacements;	// IMP=0x00000000009f9c28
- (void)setSubPlacements:(id)arg1;	// IMP=0x00000000009f9bf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009f9958
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009f98ee
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x00000000009f97a7
- (void)updateChromeBuffer;	// IMP=0x00000000009f9756
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009f96cf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009f9654
- (void)dealloc;	// IMP=0x00000000009f954a
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x00000000009f8d31
- (id)currentResponderView;	// IMP=0x00000000009f8d29
- (void)setDelegate:(id)arg1;	// IMP=0x00000000009f8c30
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x00000000009f8c1f
- (void)checkSizeForOwner:(id)arg1;	// IMP=0x00000000009f8764
- (void)_geometryChanged:(const CDStruct_f46536fb *)arg1 forAncestor:(id)arg2;	// IMP=0x00000000009f8681

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
