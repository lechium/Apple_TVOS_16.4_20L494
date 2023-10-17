//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADServiceCommandType : NSObject
{
    NSString *_domainName;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
}

+ (id)domainObjectCommitTypeForDomainNamed:(id)arg1;	// IMP=0x0040000000104db4
+ (id)domainObjectCancelTypeForDomainNamed:(id)arg1;	// IMP=0x0010000000104d98
+ (id)domainObjectDeleteTypeForDomainNamed:(id)arg1;	// IMP=0x0010000000104d7c
+ (id)domainObjectUpdateTypeForDomainNamed:(id)arg1;	// IMP=0x0010000000104d60
+ (id)domainObjectRetrieveTypeForDomainNamed:(id)arg1;	// IMP=0x0010000000104d44
+ (id)domainObjectCreateTypeForDomainNamed:(id)arg1;	// IMP=0x0010000000104d28
+ (id)_serviceCommandTypeWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x0010000000104cbc
- (void).cxx_destruct;	// IMP=0x00200000001050f1
- (unsigned long long)hash;	// IMP=0x00100000001050b2
- (_Bool)isEqualToServiceCommandType:(id)arg1;	// IMP=0x0010000000104ff3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000104f96
- (id)description;	// IMP=0x0010000000104f0e
- (id)qualifiedCommandName;	// IMP=0x0010000000104ea5
- (id)className;	// IMP=0x0010000000104e97
- (id)domainName;	// IMP=0x0010000000104e89
- (id)initWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x0010000000104dd0

@end

