//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SNComposedDetector;

__attribute__((visibility("hidden")))
@interface SNDetectorVariant : NSObject
{
    long long _type;	// 8 = 0x8
    SNComposedDetector *_composedDetector;	// 16 = 0x10
    NSString *_detectorIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000225d
- (void).cxx_destruct;	// IMP=0x0000000000002644
- (unsigned long long)hash;	// IMP=0x00000000000025bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002472
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000023f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000235a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002265
- (id)init;	// IMP=0x000000000000211c

@end

