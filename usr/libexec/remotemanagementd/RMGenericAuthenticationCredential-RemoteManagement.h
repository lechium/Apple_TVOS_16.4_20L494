//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagement/RMGenericAuthenticationCredential.h>

@class NSString;

@interface RMGenericAuthenticationCredential (RemoteManagement)
- (id)_createAuthenticationParameters;	// IMP=0x002000000000baf2
- (id)_updateMAIDPropertiesAccountIdentifier:(id)arg1 afterFailure:(_Bool)arg2;	// IMP=0x001000000000b5af
- (id)_updateBearerPropertiesAccountIdentifier:(id)arg1 afterFailure:(_Bool)arg2;	// IMP=0x001000000000b391
- (id)_updateTestPropertiesAccountIdentifier:(id)arg1 afterFailure:(_Bool)arg2;	// IMP=0x001000000000b22a
- (id)updatePropertiesForAccountIdentifier:(id)arg1 afterFailure:(_Bool)arg2;	// IMP=0x001000000000b0db
- (id)_appleIDContext;	// IMP=0x001000000000aff0
- (_Bool)_prepareSchemeMAIDTask:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000af78
- (_Bool)prepareTask:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000aedd
- (_Bool)_prepareSchemeMAIDURLRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000a8ec
- (_Bool)prepareURLRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000a7ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

