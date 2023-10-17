//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKInheritanceContext;

@interface AKInheritanceRequestProvider
{
    _Bool _signWithIdentityToken;	// 8 = 0x8
    AKInheritanceContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002228f
@property(nonatomic) _Bool signWithIdentityToken; // @synthesize signWithIdentityToken=_signWithIdentityToken;
@property(retain, nonatomic) AKInheritanceContext *inheritanceContext; // @synthesize inheritanceContext=_context;
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000022020
- (id)_bodyForBeneficiaryAliasEndpoint;	// IMP=0x0010000000021dbd
- (id)_bodyForBeneficiaryEndpoint;	// IMP=0x0010000000021a7f
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000021752
- (id)authKitBody;	// IMP=0x00100000000215ee
- (unsigned long long)requestBodyType;	// IMP=0x00100000000215e3
- (unsigned long long)expectedResponseType;	// IMP=0x00100000000215d8
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2;	// IMP=0x00100000000215a6
- (id)initWithContext:(id)arg1;	// IMP=0x001000000002153b

@end

