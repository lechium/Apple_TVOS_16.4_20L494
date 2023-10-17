//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SCNPrecomputedLightingEnvironment : NSObject
{
    NSData *_radianceData;	// 8 = 0x8
    NSData *_irradianceData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000017c674
@property(retain, nonatomic) NSData *irradianceData; // @synthesize irradianceData=_irradianceData;
@property(retain, nonatomic) NSData *radianceData; // @synthesize radianceData=_radianceData;
- (void)dealloc;	// IMP=0x000000000017c783
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017c732
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017c67c

@end
