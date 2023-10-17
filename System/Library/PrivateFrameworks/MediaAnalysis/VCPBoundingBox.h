//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPBoundingBox : NSObject
{
    float _minX;	// 8 = 0x8
    float _maxX;	// 12 = 0xc
    float _minY;	// 16 = 0x10
    float _maxY;	// 20 = 0x14
    float _confidence;	// 24 = 0x18
    float _flag;	// 28 = 0x1c
    int _classIndex;	// 32 = 0x20
}

@property int classIndex; // @synthesize classIndex=_classIndex;
@property float flag; // @synthesize flag=_flag;
@property float confidence; // @synthesize confidence=_confidence;
@property float maxY; // @synthesize maxY=_maxY;
@property float minY; // @synthesize minY=_minY;
@property float maxX; // @synthesize maxX=_maxX;
@property float minX; // @synthesize minX=_minX;
- (struct CGRect)getCGRectWithClipWidth:(float)arg1 height:(float)arg2;	// IMP=0x000000000019a876
- (float)computeIntersectionOverUnion:(id)arg1;	// IMP=0x000000000019a76e
- (id)union:(id)arg1;	// IMP=0x000000000019a61d
- (id)intersect:(id)arg1;	// IMP=0x000000000019a4a2
- (float)area;	// IMP=0x000000000019a42a
- (id)initWithCenterAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;	// IMP=0x000000000019a2b8
- (id)initWithXYAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;	// IMP=0x000000000019a1b0

@end

