//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSUserProperties : NSObject
{
    _Bool _disableRegistration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000f520
@property(readonly, nonatomic) _Bool disableRegistration; // @synthesize disableRegistration=_disableRegistration;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000f5b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000f540
- (id)description;	// IMP=0x001000000000f4a0
- (unsigned long long)hash;	// IMP=0x001000000000f450
- (_Bool)isEqualToUserProperties:(id)arg1;	// IMP=0x001000000000f3a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000f300
- (id)propsByupdatingDisableRegistration:(_Bool)arg1;	// IMP=0x001000000000f280
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000f210

@end

