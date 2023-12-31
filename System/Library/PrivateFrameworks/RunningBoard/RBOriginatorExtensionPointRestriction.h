//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBOriginatorExtensionPointRestriction : RBDomainRestriction
{
    NSString *_extensionPoint;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000072e74
- (void).cxx_destruct;	// IMP=0x000000000007341c
- (id)description;	// IMP=0x0000000000073398
- (unsigned long long)hash;	// IMP=0x000000000007337b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000732f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000732eb
- (id)allEntitlements;	// IMP=0x00000000000732d2
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000073034
- (id)_initWithExtensionPoint:(id)arg1;	// IMP=0x0000000000072de3

@end

