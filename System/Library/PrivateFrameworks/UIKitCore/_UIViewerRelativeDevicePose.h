//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIMotionEffectAcceleratedOutputRange;

__attribute__((visibility("hidden")))
@interface _UIViewerRelativeDevicePose : NSObject
{
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;	// 8 = 0x8
    double _planarRotationAngle;	// 16 = 0x10
    struct UIOffset _viewerOffset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000baaf1b
@property(nonatomic) double planarRotationAngle; // @synthesize planarRotationAngle=_planarRotationAngle;
@property(nonatomic) struct UIOffset viewerOffset; // @synthesize viewerOffset=_viewerOffset;
- (struct UIOffset)_acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;	// IMP=0x0000000000baae63
- (void)_setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;	// IMP=0x0000000000baadf6
- (void)_reset;	// IMP=0x0000000000baada3
- (id)_acceleratedOutputRange;	// IMP=0x0000000000baad68
- (id)description;	// IMP=0x0000000000baaccc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000baac78
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000baabab
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000baaaa5
- (unsigned long long)hash;	// IMP=0x0000000000baa979
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000baa8b3

@end
