//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBShapeOperator : NSObject
{
    double _scale;	// 8 = 0x8
}

+ (id)operatorWithScale:(double)arg1;	// IMP=0x00600000008a0b8b
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)shapesByInsettingShapes:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000008a45d6
- (id)shapesByResizingShapes:(id)arg1 withOffset:(struct CGPoint)arg2;	// IMP=0x00000000008a4194
- (id)shapesByRepositioningShapes:(id)arg1 withOffset:(struct CGPoint)arg2;	// IMP=0x00000000008a3daf
- (id)shapesByCenteringShapesPreservingLayout:(id)arg1 insideRect:(struct CGRect)arg2 horizontal:(_Bool)arg3 vertical:(_Bool)arg4;	// IMP=0x00000000008a3675
- (id)shapesByVerticallyCenteringShapesPreservingLayout:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000008a365b
- (id)shapesByHorizontallyCenteringShapesPreservingLayout:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000008a3641
- (id)shapesByCenteringShapesPreservingLayout:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000008a3624
- (struct CGPoint)offsetForCenteringShapes:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000008a327a
- (id)shapesByCenteringShapes:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000008a2d14
- (id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(long long)arg3;	// IMP=0x00000000008a1eb3
- (id)shapesByScalingShapes:(id)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000008a144b
- (id)geometryByScalingShapeGeometry:(id)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000008a10b8
- (id)shapeByScalingShape:(id)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000008a0e82
- (struct CGRect)rectByScalingRect:(struct CGRect)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000008a0e4f
- (struct CGRect)_scaleRect:(struct CGRect)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000008a0d46
- (CDStruct_c3b9c2ee)_scaleRange:(CDStruct_c3b9c2ee)arg1 factor:(double)arg2;	// IMP=0x00000000008a0bc8

@end

