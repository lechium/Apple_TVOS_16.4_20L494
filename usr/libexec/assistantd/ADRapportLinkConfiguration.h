//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions;

@interface ADRapportLinkConfiguration : NSObject
{
    ADRapportLinkDiscoveryOptions *_discoveryOptions;	// 8 = 0x8
    ADRapportLinkTransportOptions *_transportOptions;	// 16 = 0x10
    long long _enablesProximityTracking;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001497b2
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001493b6
- (void).cxx_destruct;	// IMP=0x0010000000149997
@property(readonly, nonatomic) long long enablesProximityTracking; // @synthesize enablesProximityTracking=_enablesProximityTracking;
@property(readonly, copy, nonatomic) ADRapportLinkTransportOptions *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(readonly, copy, nonatomic) ADRapportLinkDiscoveryOptions *discoveryOptions; // @synthesize discoveryOptions=_discoveryOptions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001498cd
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001497ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001497a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000149682
- (unsigned long long)hash;	// IMP=0x00100000001495fc
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000014956a
- (id)description;	// IMP=0x0010000000149556
- (id)initWithDiscoveryOptions:(id)arg1 transportOptions:(id)arg2 enablesProximityTracking:(long long)arg3;	// IMP=0x0010000000149417
- (id)init;	// IMP=0x0010000000149403
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000149264
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000149b48

@end

