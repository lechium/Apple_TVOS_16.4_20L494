//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXAuditToken : NSObject
{
    CDStruct_4c969caf _auditToken;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002c45d
@property(readonly) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (unsigned long long)hash;	// IMP=0x000000000002c5f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c592
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c52a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002c48d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002c465
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x000000000002c416

@end

