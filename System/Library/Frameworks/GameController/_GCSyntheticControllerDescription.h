//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCSyntheticControllerDescription : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    id <NSCopying><NSObject><NSSecureCoding> _controllerIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b2d15
@property(readonly) id <NSCopying><NSObject><NSSecureCoding> controllerIdentifier; // @synthesize controllerIdentifier=_controllerIdentifier;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b2ba6
- (_Bool)isEqualToDescription:(id)arg1;	// IMP=0x00000000000b2b49
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b2b28
- (id)init;	// IMP=0x00000000000b2afd
- (id)initWithIdentifier:(id)arg1 controllerIdentifier:(id)arg2;	// IMP=0x00000000000b2a46

// Remaining properties
@property(readonly) Class superclass;

@end

