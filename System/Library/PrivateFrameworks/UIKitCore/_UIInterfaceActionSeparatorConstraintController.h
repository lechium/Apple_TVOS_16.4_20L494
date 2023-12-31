//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, UIView;
@protocol UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatorConstraintController : NSObject
{
    double _constantAxisDimension;	// 8 = 0x8
    UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *_separatorView;	// 16 = 0x10
    NSLayoutConstraint *_fixedHeightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_fixedWidthConstraint;	// 32 = 0x20
    long long _constantSizedAxis;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000049942
@property(nonatomic) long long constantSizedAxis; // @synthesize constantSizedAxis=_constantSizedAxis;
@property(readonly, nonatomic) NSLayoutConstraint *fixedWidthConstraint; // @synthesize fixedWidthConstraint=_fixedWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *fixedHeightConstraint; // @synthesize fixedHeightConstraint=_fixedHeightConstraint;
@property(readonly, nonatomic) __weak UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView; // @synthesize separatorView=_separatorView;
- (_Bool)_isFixedWidth;	// IMP=0x0000000000049900
- (void)_updateConstantSizedConstraints;	// IMP=0x0000000000049844
- (void)separatorViewDidUpdateConstraints;	// IMP=0x0000000000049832
@property(nonatomic) double constantAxisDimension; // @synthesize constantAxisDimension=_constantAxisDimension;
- (id)initWithSeparatorView:(id)arg1;	// IMP=0x0000000000049501

@end

