//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (SafariCoreExtras)
+ (id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;	// IMP=0x002000000000f0a2
- (_Bool)safari_matchesErrorDomainsAndCodes:(id)arg1;	// IMP=0x001000000000f424
- (_Bool)safari_matchesErrorDomain:(id)arg1 andCode:(long long)arg2;	// IMP=0x001000000000f38d
@property(readonly, nonatomic) _Bool safari_isSQLiteCorruptionError;
@property(readonly, nonatomic) _Bool safari_isSQLiteError;
@property(readonly, copy, nonatomic) NSString *safari_privacyPreservingDescription;
- (id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;	// IMP=0x001000000000efc2
@property(readonly, nonatomic) _Bool safari_isClientSideNetworkError;
@end
