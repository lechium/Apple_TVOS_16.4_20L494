//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBEntitlementPredicate.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBAnyEntitlementPredicate : RBEntitlementPredicate
{
    NSArray *_predicate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004dee5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004deda
- (id)description;	// IMP=0x000000000004de59
- (id)allEntitlements;	// IMP=0x000000000004dcf9
- (unsigned long long)count;	// IMP=0x000000000004dbed
- (_Bool)matchesEntitlements:(id)arg1;	// IMP=0x000000000004da76
- (id)initWithArray:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4;	// IMP=0x000000000004d69c

@end

