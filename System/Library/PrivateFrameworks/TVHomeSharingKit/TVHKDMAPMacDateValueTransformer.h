//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface TVHKDMAPMacDateValueTransformer : NSValueTransformer
{
}

+ (id)_date1904;	// IMP=0x0080000000032c55
+ (id)_dateWithSecondsSince1904:(double)arg1;	// IMP=0x0080000000032c20
+ (_Bool)allowsReverseTransformation;	// IMP=0x0080000000032b2e
+ (Class)transformedValueClass;	// IMP=0x0080000000032b1d
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x0000000000032b80
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000032b36

@end

