//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/NSCopying-Protocol.h>
#import <ContainerManagerCommon/NSObject-Protocol.h>

@class NSString;
@protocol MCMEntitlements;

@protocol MCMClientCodeSignInfo <NSObject, NSCopying>
@property(readonly, nonatomic) _Bool isPlatformBinary;
@property(readonly, nonatomic) _Bool isSignatureValid;
@property(readonly, nonatomic) _Bool isSigned;
@property(readonly, nonatomic) _Bool cached;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id <MCMEntitlements> entitlements;
- (id)clientCodeSignInfoByChangingCached:(_Bool)arg1;
@end

