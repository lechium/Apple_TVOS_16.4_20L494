//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (NSValueUIGeometryExtensions)
+ (id)valueWithUIOffset:(struct UIOffset)arg1;	// IMP=0x002000000078a911
+ (id)valueWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x002000000078a8dd
+ (id)valueWithNSDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x002000000078a8c4
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets)arg1;	// IMP=0x002000000078a890
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x002000000078a85c
+ (id)valueWithCGRect:(struct CGRect)arg1;	// IMP=0x002000000078a828
+ (id)valueWithCGSize:(struct CGSize)arg1;	// IMP=0x002000000078a7e3
+ (id)valueWithCGVector:(struct CGVector)arg1;	// IMP=0x002000000078a79e
+ (id)valueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x002000000078a759
+ (id)valueWithUIKBHandwritingPoint:(struct)arg1;	// IMP=0x00200000008cd14a
+ (id)ui_valueWithPlatformPoint:(struct CGPoint)arg1;	// IMP=0x0020000000b4585e
+ (id)ui_valueWithPlatformSize:(struct CGSize)arg1;	// IMP=0x0020000000efb81e
@property(readonly, nonatomic) struct UIOffset UIOffsetValue;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets directionalEdgeInsetsValue;
@property(readonly, nonatomic) struct UIEdgeInsets UIEdgeInsetsValue;
@property(readonly, nonatomic) struct CGAffineTransform CGAffineTransformValue;
@property(readonly, nonatomic) struct CGRect CGRectValue;
@property(readonly, nonatomic) struct CGSize CGSizeValue;
@property(readonly, nonatomic) struct CGVector CGVectorValue;
@property(readonly, nonatomic) struct CGPoint CGPointValue;
@property(readonly) CDStruct_19cde01f UIKBHandwritingPointValue;
- (struct CGPoint)ui_platformPointValue;	// IMP=0x0010000000b4584c
- (struct _UIPressTrigger)_UIPressTriggerValue;	// IMP=0x0010000000e05231
- (struct CGSize)ui_platformSizeValue;	// IMP=0x0010000000efb80c
@end
