//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMFNetAddressHostname
{
    NSString *_hostname;	// 24 = 0x18
}

+ (id)normalizedHostname:(id)arg1;	// IMP=0x006000000004150a
- (void).cxx_destruct;	// IMP=0x000000000004185e
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (id)addressString;	// IMP=0x000000000004183b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041767
- (unsigned long long)hash;	// IMP=0x0000000000041723
- (id)initWithHostname:(id)arg1;	// IMP=0x00000000000415be
- (id)init;	// IMP=0x0000000000041462

@end

