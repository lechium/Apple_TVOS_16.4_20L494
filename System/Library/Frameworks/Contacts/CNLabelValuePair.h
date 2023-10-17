//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNLabelValuePair : NSObject
{
    NSString *_label;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;	// IMP=0x00100000000bc4e0
- (void).cxx_destruct;	// IMP=0x00000000000bc8ac
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSString *label; // @synthesize label=_label;
- (unsigned long long)hash;	// IMP=0x00000000000bc72b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bc69e
- (id)description;	// IMP=0x00000000000bc603
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bc5f8
- (id)initWithLabel:(id)arg1 value:(id)arg2;	// IMP=0x00000000000bc550

@end

