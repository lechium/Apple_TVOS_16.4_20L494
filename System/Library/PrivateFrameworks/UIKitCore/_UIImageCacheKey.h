//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, UIImageConfiguration;

__attribute__((visibility("hidden")))
@interface _UIImageCacheKey : NSObject
{
    NSString *_name;	// 8 = 0x8
    UIImageConfiguration *_configuration;	// 16 = 0x10
    NSBundle *_bundle;	// 24 = 0x18
    struct {
        unsigned int system:1;
        unsigned int private:1;
    } _flags;	// 32 = 0x20
}

+ (id)keyWithSystemName:(id)arg1 private:(_Bool)arg2 configuration:(id)arg3;	// IMP=0x0010000000794791
+ (id)keyWithName:(id)arg1 configuration:(id)arg2;	// IMP=0x00100000007946e7
+ (id)keyWithName:(id)arg1 configuration:(id)arg2 bundle:(id)arg3;	// IMP=0x0010000000794631
- (void).cxx_destruct;	// IMP=0x0000000000794baf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000794ba4
- (id)description;	// IMP=0x0000000000794b28
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007948b3
- (unsigned long long)hash;	// IMP=0x000000000079484f

@end

