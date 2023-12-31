//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface INFVariantsDescriptor : NSObject
{
    unsigned long long _plurality;	// 8 = 0x8
    unsigned long long _gender;	// 16 = 0x10
}

+ (id)variant;	// IMP=0x0010000000002409
+ (id)variantWithVariants:(unsigned long long)arg1;	// IMP=0x00100000000023da
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned long long plurality; // @synthesize plurality=_plurality;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000232d
- (id)variantByRemovingOneAttribute;	// IMP=0x00000000000022c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002250
- (id)initWithVariants:(unsigned long long)arg1;	// IMP=0x00000000000021fa
- (id)init;	// IMP=0x00000000000021bf
- (id)append:(id)arg1 toString:(id)arg2;	// IMP=0x0000000000002127
@property(readonly, nonatomic) NSString *dictionaryKey;

@end

