//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOCoordinatePath : NSObject
{
    struct vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> _basicCoordinates;	// 8 = 0x8
    struct vector<zilch::ControlPoint, std::allocator<zilch::ControlPoint>> _zilchPoints;	// 32 = 0x20
    unsigned long long _count;	// 56 = 0x38
    NSArray *_supportPoints;	// 64 = 0x40
    struct vector<double, std::allocator<double>> _pointLengths;	// 72 = 0x48
    unsigned long long _pathStartIndex;	// 96 = 0x60
    double _pathStartOffset;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000ea79e8
- (id).cxx_construct;	// IMP=0x0000000000ea80de
- (void).cxx_destruct;	// IMP=0x0000000000ea8087
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ea7f7b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ea79f0

@end

