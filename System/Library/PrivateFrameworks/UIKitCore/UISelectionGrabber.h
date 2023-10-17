//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CAShapeLayer, UISelectionGrabberCustomPath, UISelectionGrabberDot, UITextRangeView;

__attribute__((visibility("hidden")))
@interface UISelectionGrabber : UIView
{
    double m_screenScale;	// 144 = 0x90
    UISelectionGrabberDot *m_dotView;	// 152 = 0x98
    _Bool m_isDotted;	// 160 = 0xa0
    _Bool m_activeFlattened;	// 161 = 0xa1
    _Bool m_alertFlattened;	// 162 = 0xa2
    _Bool m_navigationTransitionFlattened;	// 163 = 0xa3
    _Bool m_animating;	// 164 = 0xa4
    long long m_orientation;	// 168 = 0xa8
    int _applicationDeactivationReason;	// 176 = 0xb0
    _Bool _sheetFlattened;	// 180 = 0xb4
    UISelectionGrabberCustomPath *_customPath;	// 184 = 0xb8
}

+ (Class)layerClass;	// IMP=0x0060000000f4516f
+ (id)_grabberDot;	// IMP=0x0060000000f49212
- (void).cxx_destruct;	// IMP=0x0000000000f491e1
@property(retain, nonatomic) UISelectionGrabberCustomPath *customPath; // @synthesize customPath=_customPath;
@property(nonatomic) _Bool sheetFlattened; // @synthesize sheetFlattened=_sheetFlattened;
@property(nonatomic) long long orientation; // @synthesize orientation=m_orientation;
@property(nonatomic) _Bool animating; // @synthesize animating=m_animating;
@property(nonatomic) _Bool navigationTransitionFlattened; // @synthesize navigationTransitionFlattened=m_navigationTransitionFlattened;
@property(nonatomic) _Bool activeFlattened; // @synthesize activeFlattened=m_activeFlattened;
@property(nonatomic) _Bool alertFlattened; // @synthesize alertFlattened=m_alertFlattened;
@property(nonatomic) _Bool isDotted; // @synthesize isDotted=m_isDotted;
- (id)fillColor;	// IMP=0x0000000000f49080
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000f48efd
- (void)updatePathForBoundsChangeIfNecessary;	// IMP=0x0000000000f48e13
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x0000000000f48dd2
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000f48d80
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000f48c3c
- (void)didMoveToSuperview;	// IMP=0x0000000000f48bb9
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000f48ac8
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000f489f4
- (_Bool)isPointedLeft;	// IMP=0x0000000000f489df
- (_Bool)isPointedRight;	// IMP=0x0000000000f489ca
- (_Bool)isPointedUp;	// IMP=0x0000000000f489b5
- (_Bool)isPointedDown;	// IMP=0x0000000000f489a0
- (_Bool)isVertical;	// IMP=0x0000000000f4898b
- (void)transitionDot:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f48926
- (void)animateGrabberOutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f47cba
- (void)animateGrabberInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f47614
- (void)redrawDotForScale:(double)arg1;	// IMP=0x0000000000f475cc
- (void)updateDot;	// IMP=0x0000000000f460a9
- (double)_defaultDotWidth;	// IMP=0x0000000000f4607a
- (_Bool)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect)arg2;	// IMP=0x0000000000f45eee
- (_Bool)dotIsVisibleInDocument:(struct CGRect)arg1;	// IMP=0x0000000000f45cab
- (_Bool)clipDot:(struct CGRect)arg1;	// IMP=0x0000000000f45932
- (void)removeFromSuperview;	// IMP=0x0000000000f458e6
- (id)bezierPathFromCustomPath:(id)arg1;	// IMP=0x0000000000f457b9
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000f455f1
@property(readonly, nonatomic) CAShapeLayer *shapeLayer;
- (_Bool)autoscrolled;	// IMP=0x0000000000f4559b
- (_Bool)inputViewIsChanging;	// IMP=0x0000000000f45557
- (_Bool)isRotating;	// IMP=0x0000000000f45513
- (_Bool)isScaling;	// IMP=0x0000000000f454cf
- (_Bool)isScrolling;	// IMP=0x0000000000f4548b
- (void)canExpandAfterNavigationTransition:(id)arg1;	// IMP=0x0000000000f4545b
- (void)mustFlattenForNavigationTransition:(id)arg1;	// IMP=0x0000000000f45428
- (void)canExpandAfterBecomeActive:(id)arg1;	// IMP=0x0000000000f453f8
- (void)mustFlattenForResignActive:(id)arg1;	// IMP=0x0000000000f45393
- (void)saveDeactivationReason:(id)arg1;	// IMP=0x0000000000f4530f
- (void)canExpandAfterSheet:(id)arg1;	// IMP=0x0000000000f452df
- (void)mustFlattenForSheet:(id)arg1;	// IMP=0x0000000000f452ac
- (void)canExpandAfterAlert:(id)arg1;	// IMP=0x0000000000f4527c
- (void)mustFlattenForAlert:(id)arg1;	// IMP=0x0000000000f45192
@property(readonly, nonatomic) UITextRangeView *hostView;
- (void)dealloc;	// IMP=0x0000000000f450e5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f44ee1
- (id)_dotView;	// IMP=0x0000000000f49266

@end

