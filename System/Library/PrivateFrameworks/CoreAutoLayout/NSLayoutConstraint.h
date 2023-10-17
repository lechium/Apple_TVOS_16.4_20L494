//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutAnchor, NSSet, NSString, _NSConstraintDescriptionLayoutRuleNode;

@interface NSLayoutConstraint : NSObject
{
    id _container;	// 8 = 0x8
    id _firstAnchor;	// 16 = 0x10
    id _secondAnchor;	// 24 = 0x18
    double _constant;	// 32 = 0x20
    double _loweredConstant;	// 40 = 0x28
    id _markerAndPositiveExtraVar;	// 48 = 0x30
    id _negativeExtraVar;	// 56 = 0x38
    unsigned long long _layoutConstraintFlags;	// 64 = 0x40
    float _coefficient;	// 72 = 0x48
    float _priority;	// 76 = 0x4c
}

+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;	// IMP=0x001000000002998b
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5;	// IMP=0x001000000002976f
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;	// IMP=0x0010000000029743
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;	// IMP=0x0010000000029723
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;	// IMP=0x0010000000029703
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;	// IMP=0x00100000000296eb
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;	// IMP=0x00100000000295eb
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 symbolicConstantMultiplier:(double)arg8;	// IMP=0x0010000000029172
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;	// IMP=0x0010000000029155
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;	// IMP=0x0010000000029140
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x0010000000029127
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;	// IMP=0x001000000002907b
+ (void)deactivateConstraints:(id)arg1;	// IMP=0x0010000000028ed4
+ (void)activateConstraints:(id)arg1;	// IMP=0x0010000000028c8d
+ (void)_setLegacyDecodingOnly:(_Bool)arg1;	// IMP=0x0010000000025eeb
+ (double)_constraintConstantLimit;	// IMP=0x0010000000024728
@property(copy, setter=_setSecondAnchor:) NSLayoutAnchor *secondAnchor; // @synthesize secondAnchor=_secondAnchor;
@property(copy, setter=_setFirstAnchor:) NSLayoutAnchor *firstAnchor; // @synthesize firstAnchor=_firstAnchor;
@property(getter=isActive) _Bool active;
- (void)_setActive:(_Bool)arg1 mutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000028b33
- (_Bool)_nsib_isRedundant;	// IMP=0x0000000000028ae7
- (_Bool)_nsib_isRedundantInEngine:(id)arg1;	// IMP=0x0000000000028547
- (int)nsis_orientationHintForVariable:(id)arg1;	// IMP=0x00000000000284e6
- (id)nsis_descriptionOfVariable:(id)arg1;	// IMP=0x0000000000028399
- (id)_explainUnsatisfaction;	// IMP=0x0000000000028324
- (void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000028234
- (void)_tryToActivateMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000027d0a
- (id)_loweredExpression;	// IMP=0x0000000000027c78
- (_Bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(_Bool *)arg2;	// IMP=0x0000000000027b74
- (struct CGSize)_engineToContainerScalingCoefficients;	// IMP=0x0000000000027b40
- (void)_removeFromEngine:(id)arg1;	// IMP=0x0000000000027a06
- (void)_addToEngine:(id)arg1;	// IMP=0x00000000000279f2
- (_Bool)_addToEngine:(id)arg1 mutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x00000000000278c8
- (_Bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id *)arg3;	// IMP=0x00000000000278b6
- (double)priorityForVariable:(id)arg1;	// IMP=0x00000000000278ab
- (id)_constraintValueCopy;	// IMP=0x0000000000027773
- (void)_setMutablePropertiesFromConstraint:(id)arg1;	// IMP=0x00000000000274a3
- (_Bool)_isEqualToConstraintValue:(id)arg1 includingConstant:(_Bool)arg2 includeOtherMutableProperties:(_Bool)arg3;	// IMP=0x0000000000026dbe
- (unsigned long long)_constraintValueHashIncludingConstant:(_Bool)arg1 includeOtherMutableProperties:(_Bool)arg2;	// IMP=0x0000000000026c62
- (_Bool)_describesSameRestrictionAsConstraint:(id)arg1;	// IMP=0x0000000000026c45
@property(readonly, copy) NSSet *_referencedLayoutItems;
- (_Bool)_referencesLayoutItem:(id)arg1;	// IMP=0x0000000000026ae0
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;	// IMP=0x0000000000026ace
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000000268c5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026379
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025ef7
@property(readonly, copy) NSString *description;
- (id)descriptionAccessory;	// IMP=0x000000000002587c
- (id)_priorityDescription;	// IMP=0x0000000000025808
- (int)_constraintType;	// IMP=0x000000000002510e
- (void)dealloc;	// IMP=0x000000000002506f
- (id)init;	// IMP=0x0000000000025027
@property double symbolicConstantMultiplier;
@property(copy) NSString *symbolicConstant;
- (void)_setSymbolicConstant:(id)arg1;	// IMP=0x0000000000024dc4
- (id)_symbolicConstant;	// IMP=0x0000000000024d1d
@property double constant;
- (id)_constantDescriptionForDTrace;	// IMP=0x0000000000024ba4
- (id)_descriptionforSymbolicConstant;	// IMP=0x0000000000024b21
- (_Bool)_effectiveConstant:(double *)arg1 error:(id *)arg2;	// IMP=0x0000000000024614
- (void)_containerGeometryDidChange;	// IMP=0x00000000000244cb
@property(setter=_setContainerDeclaredConstraint:) _Bool _containerDeclaredConstraint;
- (void)_clearWeakContainerReference;	// IMP=0x0000000000023fbf
@property id container;
- (_Bool)_loweredConstantIsRounded;	// IMP=0x0000000000023f90
- (id)_markerAndPositiveExtraVar;	// IMP=0x0000000000023f7b
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;	// IMP=0x0000000000023f73
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;	// IMP=0x0000000000023f6d
- (double)_allowedMagnitudeForIntegralizationAdjustment;	// IMP=0x0000000000023f64
- (double)_fudgeIncrement;	// IMP=0x0000000000023f5b
- (_Bool)_isFudgeable;	// IMP=0x0000000000023f53
- (void)setAnimations:(id)arg1;	// IMP=0x0000000000023f3d
- (id)animations;	// IMP=0x0000000000023f2c
@property(copy) NSString *identifier;
- (id)_identifier;	// IMP=0x0000000000023d61
@property(readonly) _Bool hasBeenLowered;
- (_Bool)_existsInEngine:(id)arg1;	// IMP=0x0000000000023d2b
@property float priority;
- (_Bool)_isIBPrototypingLayoutConstraint;	// IMP=0x00000000000236ff
@property _Bool shouldBeArchived;
- (void)_setSecondItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x000000000002368c
@property(readonly) long long secondAttribute;
@property(readonly) id secondItem;
@property(setter=_setMultiplier:) double multiplier;
@property(setter=_setRelation:) long long relation;
- (void)_setFirstItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x00000000000233fe
@property(readonly) long long firstAttribute;
@property(readonly) id firstItem;
@property(nonatomic, getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:) _Bool loweredConstantNeedsUpdate;
@property(readonly) double unsatisfaction;
@property(setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode *_associatedRuleNode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
