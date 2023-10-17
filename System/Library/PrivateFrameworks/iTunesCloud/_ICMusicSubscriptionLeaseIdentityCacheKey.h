//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject
{
    NSNumber *_delegatedDSID;	// 8 = 0x8
    NSNumber *_DSID;	// 16 = 0x10
    NSString *_carrierBundleDeviceIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a0bfc
@property(readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier; // @synthesize carrierBundleDeviceIdentifier=_carrierBundleDeviceIdentifier;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(readonly, copy, nonatomic) NSNumber *delegatedDSID; // @synthesize delegatedDSID=_delegatedDSID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a0b2d
- (unsigned long long)hash;	// IMP=0x00000000001a0ad3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a0ac8
- (id)initWithDSID:(id)arg1 carrierBundleDeviceIdentifier:(id)arg2 delegatedDSID:(id)arg3;	// IMP=0x00000000001a09e2

@end

