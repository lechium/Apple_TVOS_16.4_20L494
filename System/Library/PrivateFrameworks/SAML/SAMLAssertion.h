//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, SAMLAdvice, SAMLAuthNStatement, SAMLConditions, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAssertion
{
}

+ (id)createElement:(id *)arg1;	// IMP=0x006000000000b80b
- (id)authorizationForResource:(id)arg1;	// IMP=0x000000000000c15e
- (_Bool)isValidForRequestor:(id)arg1;	// IMP=0x000000000000bfb7
- (_Bool)meetsConditions:(id *)arg1;	// IMP=0x000000000000bf64
- (_Bool)isValid:(id *)arg1;	// IMP=0x000000000000be47
@property(readonly, nonatomic) NSArray *authorizations;
@property(readonly, nonatomic) SAMLAuthNStatement *authentication;
@property(readonly, nonatomic) NSArray *samlAttributes;
@property(readonly, nonatomic) SAMLAdvice *advice;
@property(readonly, nonatomic) SAMLConditions *conditions;
@property(readonly, nonatomic) SAMLSubject *subject;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(readonly, nonatomic) NSString *issuer;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(readonly, nonatomic) NSString *identifier;

@end

