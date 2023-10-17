//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol MTLDevice;

@interface DYMTLDeviceProfile : NSObject
{
    NSArray *_supportedFeatureSets;	// 8 = 0x8
    NSArray *_supportedGPUFamilies;	// 16 = 0x10
    NSDictionary *_defaultSamplePositions;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    id <MTLDevice> _device;	// 40 = 0x28
    unsigned long long _streamRef;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000005102a
- (void).cxx_destruct;	// IMP=0x0020000000050fec
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
@property(nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *defaultSamplePositions; // @synthesize defaultSamplePositions=_defaultSamplePositions;
@property(copy, nonatomic) NSArray *supportedGPUFamilies; // @synthesize supportedGPUFamilies=_supportedGPUFamilies;
@property(copy, nonatomic) NSArray *supportedFeatureSets; // @synthesize supportedFeatureSets=_supportedFeatureSets;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000050eb3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000050cd0

@end

