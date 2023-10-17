//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEspressoDetectedObject : NSObject
{
    struct CGRect _bounds;	// 8 = 0x8
    float _confidence;	// 40 = 0x28
    long long _objectType;	// 48 = 0x30
}

@property float confidence; // @synthesize confidence=_confidence;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property long long objectType; // @synthesize objectType=_objectType;
- (id)description;	// IMP=0x00000000000a6703
@property(readonly) struct CGPoint center;
- (id)initWithObjectType:(long long)arg1 boundingBox:(struct CGRect)arg2 confidence:(float)arg3;	// IMP=0x00000000000a6649

@end

