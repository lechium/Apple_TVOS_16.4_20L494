//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSSet, NSString, UITraitCollection, UIView, UIViewController, _UISheetPresentationControllerAppearance, _UISheetPresentationMetrics;
@protocol _UISheetLayoutInfoDelegate;

__attribute__((visibility("hidden")))
@interface _UISheetLayoutInfo : NSObject
{
    struct {
        unsigned int effectivePresented:1;
        unsigned int anyDescendantTransitioning:1;
        unsigned int ancestorSheetIDs:1;
        unsigned int descendantHiddenAncestorSheetIDs:1;
        unsigned int hidingUnderneathDescendant:1;
        unsigned int unsafeInsets:1;
        unsigned int marginsWhenFloating:1;
        unsigned int margins:1;
        unsigned int preferredSize:1;
        unsigned int percentFullHeight:1;
        unsigned int hidingUnderneathDescendantForDepthLevel:1;
        unsigned int proposedDepthLevelIncrement:1;
        unsigned int proposedDepthLevel:1;
        unsigned int depthLevel:1;
        unsigned int edgeAttached:1;
        unsigned int dismissesHorizontally:1;
        unsigned int effectiveDismissible:1;
        unsigned int inverted:1;
        unsigned int forcedFullScreen:1;
        unsigned int functionallyFullScreen:1;
        unsigned int percentFullScreen:1;
        unsigned int effectiveKeyboardFrame:1;
        unsigned int stackAlignmentFrame:1;
        unsigned int stacksWithChild:1;
        unsigned int fullHeightUntransformedFrame:1;
        unsigned int fullHeightUntransformedFrameForDepthLevel:1;
        unsigned int dismissOffset:1;
        unsigned int activeDetents:1;
        unsigned int indexOfActiveDetentForTappingGrabber:1;
        unsigned int grabberAction:1;
        unsigned int indexOfCurrentActiveOrDismissDetent:1;
        unsigned int rubberBandExtentBeyondMinimumOffset:1;
        unsigned int rubberBandExtentBeyondMaximumOffset:1;
        unsigned int effectiveAppearance:1;
        unsigned int offsetForCurrentActiveDetent;
        unsigned int rawCurrentOffset:1;
        unsigned int currentOffset:1;
        unsigned int nonFullHeightOffset:1;
        unsigned int offsetAdjustment:1;
        unsigned int percentPresented:1;
        unsigned int anyDescendantDragging:1;
        unsigned int untransformedFrame:1;
        unsigned int hostedUntransformedFrame:1;
        unsigned int frameOfPresentedViewInContainerView:1;
        unsigned int touchInsets:1;
        unsigned int cornerRadii:1;
        unsigned int hostedCornerRadii:1;
        unsigned int transform:1;
        unsigned int zPosition:1;
        unsigned int percentDimmedFromOffset:1;
        unsigned int percentDimmed:1;
        unsigned int shadowOpacity:1;
        unsigned int alpha:1;
        unsigned int interactionEnabled:1;
        unsigned int scrollInteractionEnabled:1;
        unsigned int shouldPresentedViewControllerControlStatusBarAppearance:1;
        unsigned int shouldDimmingIgnoreTouches:1;
        unsigned int dimmingEnabled:1;
        unsigned int grabberAlpha:1;
    } _clean;	// 8 = 0x8
    struct {
        unsigned int activeDetents:1;
    } _computing;	// 24 = 0x18
    _Bool __effectivePresented;	// 28 = 0x1c
    _Bool __anyDescendantTransitioning;	// 29 = 0x1d
    _Bool __hidingUnderneathDescendant;	// 30 = 0x1e
    _Bool __hidingUnderneathDescendantForDepthLevel;	// 31 = 0x1f
    _Bool __edgeAttached;	// 32 = 0x20
    _Bool __dismissesHorizontally;	// 33 = 0x21
    _Bool __effectiveDismissible;	// 34 = 0x22
    _Bool __inverted;	// 35 = 0x23
    _Bool __forcedFullScreen;	// 36 = 0x24
    _Bool __functionallyFullScreen;	// 37 = 0x25
    _Bool __stacksWithChild;	// 38 = 0x26
    _Bool __anyDescendantDragging;	// 39 = 0x27
    _Bool __interactionEnabled;	// 40 = 0x28
    _Bool __scrollInteractionEnabled;	// 41 = 0x29
    _Bool __shouldPresentedViewControllerControlStatusBarAppearance;	// 42 = 0x2a
    _Bool __shouldDimmingIgnoreTouches;	// 43 = 0x2b
    _Bool __dimmingEnabled;	// 44 = 0x2c
    _Bool __tucksIntoUnsafeAreaInCompactHeight;	// 45 = 0x2d
    _Bool __allowsAsymmetricVerticalMargins;	// 46 = 0x2e
    _Bool __containsFirstResponder;	// 47 = 0x2f
    _Bool __firstResponderRequiresKeyboard;	// 48 = 0x30
    _Bool __remoteContainsFirstResponder;	// 49 = 0x31
    _Bool __remoteFirstResponderRequiresKeyboard;	// 50 = 0x32
    _Bool __wantsFullScreen;	// 51 = 0x33
    _Bool __wantsEdgeAttached;	// 52 = 0x34
    _Bool __wantsEdgeAttachedInCompactHeight;	// 53 = 0x35
    _Bool __wantsFloatingInRegularWidthCompactHeight;	// 54 = 0x36
    _Bool __wantsInvertedWhenFloating;	// 55 = 0x37
    _Bool __widthFollowsPreferredContentSizeWhenEdgeAttached;	// 56 = 0x38
    _Bool __presented;	// 57 = 0x39
    _Bool __transitioning;	// 58 = 0x3a
    _Bool __hidden;	// 59 = 0x3b
    _Bool __shouldScaleDownBehindDescendants;	// 60 = 0x3c
    _Bool __reduceMotionEnabled;	// 61 = 0x3d
    _Bool __peeksWhenFloating;	// 62 = 0x3e
    _Bool __hosting;	// 63 = 0x3f
    _Bool __dismissible;	// 64 = 0x40
    _Bool __shouldDismissWhenTappedOutside;	// 65 = 0x41
    _Bool __allowsInteractiveDismissWhenFullScreen;	// 66 = 0x42
    _Bool __prefersScrollingResizesWhenDetentDirectionIsDown;	// 67 = 0x43
    _Bool __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;	// 68 = 0x44
    _Bool __dragging;	// 69 = 0x45
    _Bool __wantsGrabber;	// 70 = 0x46
    NSArray *__ancestorSheetIDs;	// 72 = 0x48
    NSSet *__descendantHiddenAncestorSheetIDs;	// 80 = 0x50
    double __percentFullHeight;	// 88 = 0x58
    double __proposedDepthLevelIncrement;	// 96 = 0x60
    double __proposedDepthLevel;	// 104 = 0x68
    double __depthLevel;	// 112 = 0x70
    double __percentFullScreen;	// 120 = 0x78
    double __dismissOffset;	// 128 = 0x80
    long long __indexOfCurrentActiveDetent;	// 136 = 0x88
    long long __adjustedIndexOfCurrentActiveDetentForContainedFirstResponder;	// 144 = 0x90
    long long __indexOfActiveDimmingDetent;	// 152 = 0x98
    double __smallestNonDismissDetentOffset;	// 160 = 0xa0
    long long __numberOfActiveNonDismissDetents;	// 168 = 0xa8
    long long __indexOfActiveDetentForTappingGrabber;	// 176 = 0xb0
    long long __grabberAction;	// 184 = 0xb8
    long long __indexOfCurrentActiveOrDismissDetent;	// 192 = 0xc0
    double __rubberBandExtentBeyondMinimumOffset;	// 200 = 0xc8
    double __rubberBandExtentBeyondMaximumOffset;	// 208 = 0xd0
    _UISheetPresentationControllerAppearance *__effectiveAppearance;	// 216 = 0xd8
    double __offsetForCurrentActiveDetent;	// 224 = 0xe0
    double __nonFullHeightOffset;	// 232 = 0xe8
    double __offsetAdjustment;	// 240 = 0xf0
    double __percentPresented;	// 248 = 0xf8
    double __zPosition;	// 256 = 0x100
    double __percentDimmedFromOffset;	// 264 = 0x108
    double __percentDimmed;	// 272 = 0x110
    double __confinedPercentDimmed;	// 280 = 0x118
    double __shadowOpacity;	// 288 = 0x120
    double __alpha;	// 296 = 0x128
    double __grabberAlpha;	// 304 = 0x130
    double __magicShadowOpacity;	// 312 = 0x138
    UIViewController *__presentingViewController;	// 320 = 0x140
    UIViewController *__presentedViewController;	// 328 = 0x148
    UIView *__containerView;	// 336 = 0x150
    _UISheetPresentationMetrics *__metrics;	// 344 = 0x158
    UITraitCollection *__containerTraitCollection;	// 352 = 0x160
    double __additionalMinimumTopInset;	// 360 = 0x168
    long long __mode;	// 368 = 0x170
    long long __horizontalAlignment;	// 376 = 0x178
    double __marginInCompactHeight;	// 384 = 0x180
    double __marginInRegularWidthRegularHeight;	// 392 = 0x188
    NSArray *__detents;	// 400 = 0x190
    NSString *__selectedDetentIdentifier;	// 408 = 0x198
    _UISheetPresentationControllerAppearance *__standardAppearance;	// 416 = 0x1a0
    _UISheetPresentationControllerAppearance *__edgeAttachedCompactHeightAppearance;	// 424 = 0x1a8
    _UISheetPresentationControllerAppearance *__floatingAppearance;	// 432 = 0x1b0
    NSString *__sheetID;	// 440 = 0x1b8
    NSString *__hiddenAncestorSheetID;	// 448 = 0x1c0
    double __latestUserChosenOffset;	// 456 = 0x1c8
    double __tearOffset;	// 464 = 0x1d0
    double __grabberSpacing;	// 472 = 0x1d8
    double __dismissCornerRadius;	// 480 = 0x1e0
    double __preferredCornerRadius;	// 488 = 0x1e8
    CDUnknownBlockType __currentOffsetGetter;	// 496 = 0x1f0
    _UISheetLayoutInfo *__parentLayoutInfo;	// 504 = 0x1f8
    _UISheetLayoutInfo *__childLayoutInfo;	// 512 = 0x200
    CDUnknownBlockType __indexOfCurrentActiveOrDismissDetentWasInvalidated;	// 520 = 0x208
    CDUnknownBlockType __rubberBandExtentBeyondMinimumOffsetWasInvalidated;	// 528 = 0x210
    CDUnknownBlockType __rubberBandExtentBeyondMaximumOffsetWasInvalidated;	// 536 = 0x218
    double __confinedPercentLightened;	// 544 = 0x220
    id <_UISheetLayoutInfoDelegate> __delegate;	// 552 = 0x228
    NSMutableArray *__mutableDetentValues;	// 560 = 0x230
    NSMutableArray *__mutableActiveDetents;	// 568 = 0x238
    struct CGSize __preferredSize;	// 576 = 0x240
    struct CGPoint __rawCurrentOffset;	// 592 = 0x250
    struct CGPoint __currentOffset;	// 608 = 0x260
    struct CGSize __screenSize;	// 624 = 0x270
    struct UIEdgeInsets __unsafeInsets;	// 640 = 0x280
    struct UIEdgeInsets __marginsWhenFloating;	// 672 = 0x2a0
    struct UIEdgeInsets __margins;	// 704 = 0x2c0
    struct CGRect __effectiveKeyboardFrame;	// 736 = 0x2e0
    struct CGRect __stackAlignmentFrame;	// 768 = 0x300
    struct CGRect __fullHeightUntransformedFrame;	// 800 = 0x320
    struct CGRect __fullHeightUntransformedFrameForDepthLevel;	// 832 = 0x340
    struct CGRect __untransformedFrame;	// 864 = 0x360
    struct CGRect __hostedUntransformedFrame;	// 896 = 0x380
    struct CGRect __frameOfPresentedViewInContainerView;	// 928 = 0x3a0
    struct UIEdgeInsets __touchInsets;	// 960 = 0x3c0
    struct UIRectCornerRadii __cornerRadii;	// 992 = 0x3e0
    struct UIRectCornerRadii __hostedCornerRadii;	// 1024 = 0x400
    struct CGRect __containerBounds;	// 1056 = 0x420
    struct UIEdgeInsets __containerSafeAreaInsets;	// 1088 = 0x440
    struct CGRect __sourceFrame;	// 1120 = 0x460
    struct CGRect __keyboardFrame;	// 1152 = 0x480
    struct CGRect __remoteKeyboardFrame;	// 1184 = 0x4a0
    struct CGRect __dismissSourceFrame;	// 1216 = 0x4c0
    struct CGAffineTransform __transform;	// 1248 = 0x4e0
}

- (void).cxx_destruct;	// IMP=0x00000000003c73f8
@property(readonly, nonatomic) NSMutableArray *_mutableActiveDetents; // @synthesize _mutableActiveDetents=__mutableActiveDetents;
@property(readonly, nonatomic) NSMutableArray *_mutableDetentValues; // @synthesize _mutableDetentValues=__mutableDetentValues;
@property(nonatomic, setter=_setDelegate:) __weak id <_UISheetLayoutInfoDelegate> _delegate; // @synthesize _delegate=__delegate;
@property(readonly, nonatomic) double _confinedPercentLightened; // @synthesize _confinedPercentLightened=__confinedPercentLightened;
@property(copy, nonatomic) CDUnknownBlockType _rubberBandExtentBeyondMaximumOffsetWasInvalidated; // @synthesize _rubberBandExtentBeyondMaximumOffsetWasInvalidated=__rubberBandExtentBeyondMaximumOffsetWasInvalidated;
@property(copy, nonatomic) CDUnknownBlockType _rubberBandExtentBeyondMinimumOffsetWasInvalidated; // @synthesize _rubberBandExtentBeyondMinimumOffsetWasInvalidated=__rubberBandExtentBeyondMinimumOffsetWasInvalidated;
@property(copy, nonatomic) CDUnknownBlockType _indexOfCurrentActiveOrDismissDetentWasInvalidated; // @synthesize _indexOfCurrentActiveOrDismissDetentWasInvalidated=__indexOfCurrentActiveOrDismissDetentWasInvalidated;
@property(retain, nonatomic, setter=_setChildSheetLayoutInfo:) _UISheetLayoutInfo *_childLayoutInfo; // @synthesize _childLayoutInfo=__childLayoutInfo;
@property(nonatomic, setter=_setParentSheetLayoutInfo:) __weak _UISheetLayoutInfo *_parentLayoutInfo; // @synthesize _parentLayoutInfo=__parentLayoutInfo;
@property(copy, nonatomic, setter=_setCurrentOffsetGetter:) CDUnknownBlockType _currentOffsetGetter; // @synthesize _currentOffsetGetter=__currentOffsetGetter;
@property(nonatomic, setter=_setPreferredCornerRadius:) double _preferredCornerRadius; // @synthesize _preferredCornerRadius=__preferredCornerRadius;
@property(nonatomic, setter=_setDismissCornerRadius:) double _dismissCornerRadius; // @synthesize _dismissCornerRadius=__dismissCornerRadius;
@property(nonatomic, setter=_setDismissSourceFrame:) struct CGRect _dismissSourceFrame; // @synthesize _dismissSourceFrame=__dismissSourceFrame;
@property(nonatomic, setter=_setGrabberSpacing:) double _grabberSpacing; // @synthesize _grabberSpacing=__grabberSpacing;
@property(nonatomic, setter=_setWantsGrabber:) _Bool _wantsGrabber; // @synthesize _wantsGrabber=__wantsGrabber;
@property(nonatomic, getter=_isDragging, setter=_setDragging:) _Bool _dragging; // @synthesize _dragging=__dragging;
@property(nonatomic, setter=_setTearOffset:) double _tearOffset; // @synthesize _tearOffset=__tearOffset;
@property(nonatomic, setter=_setLatestUserChosenOffset:) double _latestUserChosenOffset; // @synthesize _latestUserChosenOffset=__latestUserChosenOffset;
@property(nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) _Bool _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge; // @synthesize _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge=__prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property(nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) _Bool _prefersScrollingResizesWhenDetentDirectionIsDown; // @synthesize _prefersScrollingResizesWhenDetentDirectionIsDown=__prefersScrollingResizesWhenDetentDirectionIsDown;
@property(nonatomic, setter=_setAllowsInteractiveDismissWhenFullScreen:) _Bool _allowsInteractiveDismissWhenFullScreen; // @synthesize _allowsInteractiveDismissWhenFullScreen=__allowsInteractiveDismissWhenFullScreen;
@property(nonatomic, setter=_setShouldDismissWhenTappedOutside:) _Bool _shouldDismissWhenTappedOutside; // @synthesize _shouldDismissWhenTappedOutside=__shouldDismissWhenTappedOutside;
@property(copy, nonatomic, setter=_setHiddenAncestorSheetID:) NSString *_hiddenAncestorSheetID; // @synthesize _hiddenAncestorSheetID=__hiddenAncestorSheetID;
@property(copy, nonatomic, setter=_setSheetID:) NSString *_sheetID; // @synthesize _sheetID=__sheetID;
@property(copy, nonatomic, setter=_setFloatingAppearance:) _UISheetPresentationControllerAppearance *_floatingAppearance; // @synthesize _floatingAppearance=__floatingAppearance;
@property(copy, nonatomic, setter=_setEdgeAttachedCompactHeightAppearance:) _UISheetPresentationControllerAppearance *_edgeAttachedCompactHeightAppearance; // @synthesize _edgeAttachedCompactHeightAppearance=__edgeAttachedCompactHeightAppearance;
@property(copy, nonatomic, setter=_setStandardAppearance:) _UISheetPresentationControllerAppearance *_standardAppearance; // @synthesize _standardAppearance=__standardAppearance;
@property(retain, nonatomic, setter=_setSelectedDetentIdentifier:) NSString *_selectedDetentIdentifier; // @synthesize _selectedDetentIdentifier=__selectedDetentIdentifier;
@property(retain, nonatomic, setter=_setDetents:) NSArray *_detents; // @synthesize _detents=__detents;
@property(nonatomic, getter=_isDismissible, setter=_setDismissible:) _Bool _dismissible; // @synthesize _dismissible=__dismissible;
@property(nonatomic, getter=_isHosting, setter=_setHosting:) _Bool _hosting; // @synthesize _hosting=__hosting;
@property(nonatomic, setter=_setPeeksWhenFloating:) _Bool _peeksWhenFloating; // @synthesize _peeksWhenFloating=__peeksWhenFloating;
@property(nonatomic, getter=_isReduceMotionEnabled, setter=_setReduceMotionEnabled:) _Bool _reduceMotionEnabled; // @synthesize _reduceMotionEnabled=__reduceMotionEnabled;
@property(nonatomic, setter=_setShouldScaleDownBehindDescendants:) _Bool _shouldScaleDownBehindDescendants; // @synthesize _shouldScaleDownBehindDescendants=__shouldScaleDownBehindDescendants;
@property(nonatomic, getter=_isHidden, setter=_setHidden:) _Bool _hidden; // @synthesize _hidden=__hidden;
@property(nonatomic, getter=_isTransitioning, setter=_setTransitioning:) _Bool _transitioning; // @synthesize _transitioning=__transitioning;
@property(nonatomic, getter=_isPresented, setter=_setPresented:) _Bool _presented; // @synthesize _presented=__presented;
@property(nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenEdgeAttached:) _Bool _widthFollowsPreferredContentSizeWhenEdgeAttached; // @synthesize _widthFollowsPreferredContentSizeWhenEdgeAttached=__widthFollowsPreferredContentSizeWhenEdgeAttached;
@property(nonatomic, setter=_setWantsInvertedWhenFloating:) _Bool _wantsInvertedWhenFloating; // @synthesize _wantsInvertedWhenFloating=__wantsInvertedWhenFloating;
@property(nonatomic, setter=_setWantsFloatingInRegularWidthCompactHeight:) _Bool _wantsFloatingInRegularWidthCompactHeight; // @synthesize _wantsFloatingInRegularWidthCompactHeight=__wantsFloatingInRegularWidthCompactHeight;
@property(nonatomic, setter=_setWantsEdgeAttachedInCompactHeight:) _Bool _wantsEdgeAttachedInCompactHeight; // @synthesize _wantsEdgeAttachedInCompactHeight=__wantsEdgeAttachedInCompactHeight;
@property(nonatomic, setter=_setWantsEdgeAttached:) _Bool _wantsEdgeAttached; // @synthesize _wantsEdgeAttached=__wantsEdgeAttached;
@property(nonatomic, setter=_setWantsFullScreen:) _Bool _wantsFullScreen; // @synthesize _wantsFullScreen=__wantsFullScreen;
@property(nonatomic, setter=_setRemoteFirstResponderRequiresKeyboard:) _Bool _remoteFirstResponderRequiresKeyboard; // @synthesize _remoteFirstResponderRequiresKeyboard=__remoteFirstResponderRequiresKeyboard;
@property(nonatomic, setter=_setRemoteContainsFirstResponder:) _Bool _remoteContainsFirstResponder; // @synthesize _remoteContainsFirstResponder=__remoteContainsFirstResponder;
@property(nonatomic, setter=_setFirstResponderRequiresKeyboard:) _Bool _firstResponderRequiresKeyboard; // @synthesize _firstResponderRequiresKeyboard=__firstResponderRequiresKeyboard;
@property(nonatomic, setter=_setContainsFirstResponder:) _Bool _containsFirstResponder; // @synthesize _containsFirstResponder=__containsFirstResponder;
@property(nonatomic, setter=_setRemoteKeyboardFrame:) struct CGRect _remoteKeyboardFrame; // @synthesize _remoteKeyboardFrame=__remoteKeyboardFrame;
@property(nonatomic, setter=_setKeyboardFrame:) struct CGRect _keyboardFrame; // @synthesize _keyboardFrame=__keyboardFrame;
@property(nonatomic, setter=_setAllowsAsymmetricVerticalMargins:) _Bool _allowsAsymmetricVerticalMargins; // @synthesize _allowsAsymmetricVerticalMargins=__allowsAsymmetricVerticalMargins;
@property(nonatomic, setter=_setTucksIntoUnsafeAreaInCompactHeight:) _Bool _tucksIntoUnsafeAreaInCompactHeight; // @synthesize _tucksIntoUnsafeAreaInCompactHeight=__tucksIntoUnsafeAreaInCompactHeight;
@property(nonatomic, setter=_setMarginInRegularWidthRegularHeight:) double _marginInRegularWidthRegularHeight; // @synthesize _marginInRegularWidthRegularHeight=__marginInRegularWidthRegularHeight;
@property(nonatomic, setter=_setMarginInCompactHeight:) double _marginInCompactHeight; // @synthesize _marginInCompactHeight=__marginInCompactHeight;
@property(nonatomic, setter=_setHorizontalAlignment:) long long _horizontalAlignment; // @synthesize _horizontalAlignment=__horizontalAlignment;
@property(nonatomic, setter=_setSourceFrame:) struct CGRect _sourceFrame; // @synthesize _sourceFrame=__sourceFrame;
@property(nonatomic, setter=_setMode:) long long _mode; // @synthesize _mode=__mode;
@property(nonatomic, setter=_setScreenSize:) struct CGSize _screenSize; // @synthesize _screenSize=__screenSize;
@property(nonatomic, setter=_setAdditionalMinimumTopInset:) double _additionalMinimumTopInset; // @synthesize _additionalMinimumTopInset=__additionalMinimumTopInset;
@property(retain, nonatomic, setter=_setContainerTraitCollection:) UITraitCollection *_containerTraitCollection; // @synthesize _containerTraitCollection=__containerTraitCollection;
@property(nonatomic, setter=_setContainerSafeAreaInsets:) struct UIEdgeInsets _containerSafeAreaInsets; // @synthesize _containerSafeAreaInsets=__containerSafeAreaInsets;
@property(nonatomic, setter=_setContainerBounds:) struct CGRect _containerBounds; // @synthesize _containerBounds=__containerBounds;
@property(readonly, nonatomic) _UISheetPresentationMetrics *_metrics; // @synthesize _metrics=__metrics;
@property(retain, nonatomic, setter=_setContainerView:) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(retain, nonatomic, setter=_setPresentedViewController:) UIViewController *_presentedViewController; // @synthesize _presentedViewController=__presentedViewController;
@property(nonatomic, setter=_setPresentingViewController:) __weak UIViewController *_presentingViewController; // @synthesize _presentingViewController=__presentingViewController;
@property(readonly) _Bool _hasChildSheet;
- (id)_descendantDescription;	// IMP=0x00000000003c6dd9
@property(readonly, copy) NSString *description;
- (void)_layout;	// IMP=0x00000000003c5840
@property(readonly, nonatomic, getter=_isDimmingEnabled) _Bool _dimmingEnabled; // @synthesize _dimmingEnabled=__dimmingEnabled;
@property(readonly, nonatomic) _Bool _shouldDimmingIgnoreTouches; // @synthesize _shouldDimmingIgnoreTouches=__shouldDimmingIgnoreTouches;
@property(readonly, nonatomic) _Bool _shouldPresentedViewControllerControlStatusBarAppearance; // @synthesize _shouldPresentedViewControllerControlStatusBarAppearance=__shouldPresentedViewControllerControlStatusBarAppearance;
@property(readonly, nonatomic, getter=_isScrollInteractionEnabled) _Bool _scrollInteractionEnabled; // @synthesize _scrollInteractionEnabled=__scrollInteractionEnabled;
@property(readonly, nonatomic, getter=_isInteractionEnabled) _Bool _interactionEnabled; // @synthesize _interactionEnabled=__interactionEnabled;
@property(readonly, nonatomic) double _grabberAlpha; // @synthesize _grabberAlpha=__grabberAlpha;
@property(readonly, nonatomic) double _alpha; // @synthesize _alpha=__alpha;
@property(readonly, nonatomic) double _shadowOpacity; // @synthesize _shadowOpacity=__shadowOpacity;
@property(readonly, nonatomic) double _magicShadowOpacity; // @synthesize _magicShadowOpacity=__magicShadowOpacity;
@property(readonly, nonatomic) double _confinedPercentDimmed; // @synthesize _confinedPercentDimmed=__confinedPercentDimmed;
@property(readonly, nonatomic) double _percentDimmed; // @synthesize _percentDimmed=__percentDimmed;
@property(readonly, nonatomic) double _percentDimmedFromOffset; // @synthesize _percentDimmedFromOffset=__percentDimmedFromOffset;
@property(readonly, nonatomic) double _zPosition; // @synthesize _zPosition=__zPosition;
@property(readonly, nonatomic) struct CGAffineTransform _transform; // @synthesize _transform=__transform;
@property(readonly, nonatomic) struct UIRectCornerRadii _hostedCornerRadii; // @synthesize _hostedCornerRadii=__hostedCornerRadii;
@property(readonly, nonatomic) struct UIRectCornerRadii _cornerRadii; // @synthesize _cornerRadii=__cornerRadii;
@property(readonly, nonatomic) struct UIEdgeInsets _touchInsets; // @synthesize _touchInsets=__touchInsets;
@property(readonly, nonatomic) struct CGRect _hostedDismissFrame;
@property(readonly, nonatomic) struct CGRect _frameOfPresentedViewInContainerView; // @synthesize _frameOfPresentedViewInContainerView=__frameOfPresentedViewInContainerView;
@property(readonly, nonatomic) struct CGRect _hostedUntransformedFrame; // @synthesize _hostedUntransformedFrame=__hostedUntransformedFrame;
@property(readonly, nonatomic) struct CGRect _untransformedFrame; // @synthesize _untransformedFrame=__untransformedFrame;
@property(readonly, nonatomic) double _rubberBandExtentBeyondMaximumOffset; // @synthesize _rubberBandExtentBeyondMaximumOffset=__rubberBandExtentBeyondMaximumOffset;
@property(readonly, nonatomic) double _rubberBandExtentBeyondMinimumOffset; // @synthesize _rubberBandExtentBeyondMinimumOffset=__rubberBandExtentBeyondMinimumOffset;
@property(readonly, nonatomic) long long _indexOfCurrentActiveOrDismissDetent; // @synthesize _indexOfCurrentActiveOrDismissDetent=__indexOfCurrentActiveOrDismissDetent;
@property(readonly, nonatomic) long long _grabberAction; // @synthesize _grabberAction=__grabberAction;
@property(readonly, nonatomic) long long _indexOfActiveDetentForTappingGrabber; // @synthesize _indexOfActiveDetentForTappingGrabber=__indexOfActiveDetentForTappingGrabber;
@property(readonly, nonatomic) long long _numberOfActiveNonDismissDetents; // @synthesize _numberOfActiveNonDismissDetents=__numberOfActiveNonDismissDetents;
@property(readonly, nonatomic) double _smallestNonDismissDetentOffset; // @synthesize _smallestNonDismissDetentOffset=__smallestNonDismissDetentOffset;
@property(readonly, nonatomic) long long _indexOfActiveDimmingDetent; // @synthesize _indexOfActiveDimmingDetent=__indexOfActiveDimmingDetent;
@property(readonly, nonatomic) long long _adjustedIndexOfCurrentActiveDetentForContainedFirstResponder; // @synthesize _adjustedIndexOfCurrentActiveDetentForContainedFirstResponder=__adjustedIndexOfCurrentActiveDetentForContainedFirstResponder;
@property(readonly, nonatomic) long long _indexOfCurrentActiveDetent; // @synthesize _indexOfCurrentActiveDetent=__indexOfCurrentActiveDetent;
@property(readonly, nonatomic) NSArray *_activeDetents;
@property(readonly, nonatomic) NSArray *_detentValues;
@property(readonly, nonatomic, getter=_isAnyDescendantDragging) _Bool _anyDescendantDragging; // @synthesize _anyDescendantDragging=__anyDescendantDragging;
@property(readonly, nonatomic) double _percentPresented; // @synthesize _percentPresented=__percentPresented;
@property(readonly, nonatomic) double _offsetAdjustment; // @synthesize _offsetAdjustment=__offsetAdjustment;
@property(readonly, nonatomic) double _nonFullHeightOffset; // @synthesize _nonFullHeightOffset=__nonFullHeightOffset;
@property(readonly, nonatomic) struct CGPoint _currentOffset; // @synthesize _currentOffset=__currentOffset;
@property(readonly, nonatomic) struct CGPoint _rawCurrentOffset; // @synthesize _rawCurrentOffset=__rawCurrentOffset;
@property(readonly, nonatomic) double _offsetForCurrentActiveDetent; // @synthesize _offsetForCurrentActiveDetent=__offsetForCurrentActiveDetent;
@property(readonly, nonatomic) _UISheetPresentationControllerAppearance *_effectiveAppearance; // @synthesize _effectiveAppearance=__effectiveAppearance;
@property(readonly, nonatomic) double _dismissOffset; // @synthesize _dismissOffset=__dismissOffset;
@property(readonly, nonatomic) struct CGRect _fullHeightUntransformedFrameForDepthLevel; // @synthesize _fullHeightUntransformedFrameForDepthLevel=__fullHeightUntransformedFrameForDepthLevel;
@property(readonly, nonatomic) double _maximumDetentValue;
@property(readonly, nonatomic) double maximumDetentValue;
@property(readonly, nonatomic) struct CGRect _fullHeightPresentedViewFrame;
@property(readonly, nonatomic) UITraitCollection *containerTraitCollection;
@property(readonly, nonatomic) struct CGRect _fullHeightUntransformedFrame; // @synthesize _fullHeightUntransformedFrame=__fullHeightUntransformedFrame;
@property(readonly, nonatomic) _Bool _stacksWithChild; // @synthesize _stacksWithChild=__stacksWithChild;
@property(readonly, nonatomic) struct CGRect _stackAlignmentFrame; // @synthesize _stackAlignmentFrame=__stackAlignmentFrame;
@property(readonly, nonatomic) struct CGRect _effectiveKeyboardFrame; // @synthesize _effectiveKeyboardFrame=__effectiveKeyboardFrame;
@property(readonly, nonatomic) double _percentFullScreen; // @synthesize _percentFullScreen=__percentFullScreen;
@property(readonly, nonatomic, getter=_isFunctionallyFullScreen) _Bool _functionallyFullScreen; // @synthesize _functionallyFullScreen=__functionallyFullScreen;
@property(readonly, nonatomic, getter=_isForcedFullScreen) _Bool _forcedFullScreen; // @synthesize _forcedFullScreen=__forcedFullScreen;
@property(readonly, nonatomic, getter=_isInverted) _Bool _inverted; // @synthesize _inverted=__inverted;
@property(readonly, nonatomic, getter=_isEffectiveDismissible) _Bool _effectiveDismissible; // @synthesize _effectiveDismissible=__effectiveDismissible;
@property(readonly, nonatomic) _Bool _dismissesHorizontally; // @synthesize _dismissesHorizontally=__dismissesHorizontally;
@property(readonly, nonatomic, getter=_isEdgeAttached) _Bool _edgeAttached; // @synthesize _edgeAttached=__edgeAttached;
@property(readonly, nonatomic) _Bool _scalesDownBehindDescendants;
@property(readonly) double _depthLevel; // @synthesize _depthLevel=__depthLevel;
@property(readonly, nonatomic) double _proposedDepthLevel; // @synthesize _proposedDepthLevel=__proposedDepthLevel;
@property(readonly, nonatomic) double _proposedDepthLevelIncrement; // @synthesize _proposedDepthLevelIncrement=__proposedDepthLevelIncrement;
@property(readonly, nonatomic, getter=_isHidingUnderneathDescendantForDepthLevel) _Bool _hidingUnderneathDescendantForDepthLevel; // @synthesize _hidingUnderneathDescendantForDepthLevel=__hidingUnderneathDescendantForDepthLevel;
@property(readonly, nonatomic) double _percentFullHeight; // @synthesize _percentFullHeight=__percentFullHeight;
@property(readonly, nonatomic) struct CGSize _preferredSize; // @synthesize _preferredSize=__preferredSize;
@property(readonly, nonatomic) struct UIEdgeInsets _margins; // @synthesize _margins=__margins;
@property(readonly, nonatomic) struct UIEdgeInsets _marginsWhenFloating; // @synthesize _marginsWhenFloating=__marginsWhenFloating;
@property(readonly, nonatomic) struct UIEdgeInsets _unsafeInsets; // @synthesize _unsafeInsets=__unsafeInsets;
@property(readonly, nonatomic, getter=_isHidingUnderneathDescendant) _Bool _hidingUnderneathDescendant; // @synthesize _hidingUnderneathDescendant=__hidingUnderneathDescendant;
@property(readonly, nonatomic) NSSet *_descendantHiddenAncestorSheetIDs; // @synthesize _descendantHiddenAncestorSheetIDs=__descendantHiddenAncestorSheetIDs;
@property(readonly, nonatomic) NSArray *_ancestorSheetIDs; // @synthesize _ancestorSheetIDs=__ancestorSheetIDs;
@property(readonly, nonatomic, getter=_isAnyDescendantTransitioning) _Bool _anyDescendantTransitioning; // @synthesize _anyDescendantTransitioning=__anyDescendantTransitioning;
@property(readonly, nonatomic, getter=_isEffectivePresented) _Bool _effectivePresented; // @synthesize _effectivePresented=__effectivePresented;
- (void)_invalidateCurrentOffset;	// IMP=0x00000000003bf239
- (void)_invalidateDetents;	// IMP=0x00000000003bea55
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;	// IMP=0x00000000003be0b6
- (void)_invalidatePreferredSize;	// IMP=0x00000000003be063
- (id)initWithMetrics:(id)arg1;	// IMP=0x00000000003bdd8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

