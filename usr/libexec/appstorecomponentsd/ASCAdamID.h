//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ASCAdamID : NSObject
{
    NSString *_stringValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000001b6a
+ (id)invalidAdamID;	// IMP=0x0010000000001b3e
- (void).cxx_destruct;	// IMP=0x0020000000001f60
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) long long int64value;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
- (id)description;	// IMP=0x0010000000001dfe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000001cf8
- (unsigned long long)hash;	// IMP=0x0010000000001cb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000001ca7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000001c2e
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000001b72
- (id)initWithInt64:(long long)arg1;	// IMP=0x0010000000001ad5
- (id)initWithNumberValue:(id)arg1;	// IMP=0x0010000000001a7f
- (id)initWithStringValue:(id)arg1;	// IMP=0x0010000000001a00

@end
