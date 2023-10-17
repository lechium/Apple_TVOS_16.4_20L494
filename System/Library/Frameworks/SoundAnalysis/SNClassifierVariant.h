//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SNMLModel;

__attribute__((visibility("hidden")))
@interface SNClassifierVariant : NSObject
{
    long long _type;	// 8 = 0x8
    id <SNMLModel> _mlModel;	// 16 = 0x10
    NSString *_classifierIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000005e7d7
- (void).cxx_destruct;	// IMP=0x000000000005eb96
- (unsigned long long)hash;	// IMP=0x000000000005eb0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005e991
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005e92a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005e887
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005e7df
- (id)init;	// IMP=0x000000000005e696

@end
