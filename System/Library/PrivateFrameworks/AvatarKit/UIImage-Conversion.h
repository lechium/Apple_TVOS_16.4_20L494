//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (Conversion)
+ (id)avt_animatedImageWithDataRepresentation:(id)arg1 ofType:(struct __CFString *)arg2;	// IMP=0x006000000001a5ef
+ (id)animatedImageWithAPNGRepresentation:(id)arg1;	// IMP=0x006000000001a5d3
+ (id)animatedImageWithHEICSRepresentation:(id)arg1;	// IMP=0x006000000001a5ba
+ (id)animatedImageWithHEICRepresentation:(id)arg1;	// IMP=0x006000000001a59e
- (id)copyByReorderingImagesWithFirstImageAtTime:(double)arg1;	// IMP=0x001000000001b16c
- (id)avt_dataRepresentationForType:(struct __CFString *)arg1;	// IMP=0x001000000001a931
- (id)APNGRepresentation;	// IMP=0x001000000001a915
- (id)HEICSRepresentation;	// IMP=0x001000000001a8fc
- (id)HEICRepresentation;	// IMP=0x001000000001a8e0
- (float)frameDelayInSeconds;	// IMP=0x001000000001a849
@end

