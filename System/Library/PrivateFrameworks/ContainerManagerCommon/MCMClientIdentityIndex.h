//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface MCMClientIdentityIndex : NSObject
{
    NSData *_auditToken;	// 8 = 0x8
    NSString *_personaUniqueString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000772a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007720d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077180
- (_Bool)isEqualToClientIdentityIndex:(id)arg1;	// IMP=0x00000000000770e4
- (unsigned long long)hash;	// IMP=0x0000000000077079
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 personaUniqueString:(id)arg2;	// IMP=0x0000000000076fb8

@end

