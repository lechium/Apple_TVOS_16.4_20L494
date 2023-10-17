//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionViewTrackedValue : NSObject
{
    NSArray *_values;	// 8 = 0x8
    long long _valuesCount;	// 16 = 0x10
    long long _currentIndex;	// 24 = 0x18
    _Bool _isAccumulating;	// 32 = 0x20
    double _trackedValue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000368fbf
@property(nonatomic) double trackedValue; // @synthesize trackedValue=_trackedValue;
@property(nonatomic) _Bool isAccumulating; // @synthesize isAccumulating=_isAccumulating;
- (double)speed;	// IMP=0x0000000000368e83
- (void)addValue:(double)arg1;	// IMP=0x0000000000368dbf
- (id)init;	// IMP=0x0000000000368c62

@end

