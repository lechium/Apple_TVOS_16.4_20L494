//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSQueryKeyTransparencyContext, NSArray;

@interface IDSPeerIDValue : NSObject
{
    NSArray *_endpoints;	// 8 = 0x8
    IDSQueryKeyTransparencyContext *_keyTransparencyContext;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000030edd0
+ (id)peerIDValueWithEndpoints:(id)arg1 keyTransparencyContext:(id)arg2;	// IMP=0x001000000030e6c0
- (void).cxx_destruct;	// IMP=0x002000000030f090
@property(readonly, nonatomic) IDSQueryKeyTransparencyContext *keyTransparencyContext; // @synthesize keyTransparencyContext=_keyTransparencyContext;
@property(readonly, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000030ef70
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030edf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000030edb0
- (id)description;	// IMP=0x001000000030ecc0
- (unsigned long long)hash;	// IMP=0x001000000030ec60
- (_Bool)isEqualToPeerIDValue:(id)arg1;	// IMP=0x001000000030e950
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000030e890
- (id)initWithEndpoints:(id)arg1 keyTransparencyContext:(id)arg2;	// IMP=0x001000000030e770

@end

