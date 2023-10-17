//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CHHapticParameterAttributesImpl : NSObject
{
    float _minValue;	// 8 = 0x8
    float _maxValue;	// 12 = 0xc
    float _defaultValue;	// 16 = 0x10
}

@property(readonly) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly) float maxValue; // @synthesize maxValue=_maxValue;
@property(readonly) float minValue; // @synthesize minValue=_minValue;
- (id)initWithMinValue:(float)arg1 maxValue:(float)arg2 defaultValue:(float)arg3;	// IMP=0x0000000000004386
- (id)init;	// IMP=0x0000000000004378

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

