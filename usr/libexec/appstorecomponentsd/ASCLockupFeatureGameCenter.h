//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCLockupFeatureGameCenter : NSObject
{
    NSString *_shortName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000eb09
- (void).cxx_destruct;	// IMP=0x002000000000ee50
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000ec9d
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000ec17
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000eb9e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000eb11
- (id)initWithShortName:(id)arg1;	// IMP=0x001000000000ea96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

