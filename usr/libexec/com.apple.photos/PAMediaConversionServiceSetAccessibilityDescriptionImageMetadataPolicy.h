//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy
{
    NSString *_accessibilityDescription;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004b75
+ (id)policyWithAccessibilityDescription:(id)arg1;	// IMP=0x0010000000004b23
- (void).cxx_destruct;	// IMP=0x0020000000004f84
@property(copy) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
- (id)processMetadata:(id)arg1;	// IMP=0x0010000000004da1
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0010000000004c8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004c15
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000004b7d

@end

