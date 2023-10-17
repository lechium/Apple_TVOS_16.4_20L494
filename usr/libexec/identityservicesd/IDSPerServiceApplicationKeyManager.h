//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSRegistrationKeyManagerIdentityDataSource, NSMutableDictionary;

@interface IDSPerServiceApplicationKeyManager : NSObject
{
    NSMutableDictionary *_serviceIndexToKeyConfigs;	// 8 = 0x8
    IDSRegistrationKeyManagerIdentityDataSource *_identityDataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005b890
@property(retain, nonatomic) IDSRegistrationKeyManagerIdentityDataSource *identityDataSource; // @synthesize identityDataSource=_identityDataSource;
@property(retain, nonatomic) NSMutableDictionary *serviceIndexToKeyConfigs; // @synthesize serviceIndexToKeyConfigs=_serviceIndexToKeyConfigs;
- (void)_deleteIdentityAtKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x001000000005b510
- (_Bool)serializeAndPersistIdentitiesDeleteIfNull:(_Bool)arg1;	// IMP=0x001000000005b110
- (void)clearIdentities;	// IMP=0x001000000005b0c0
- (void)loadIdentitiesWithSerializationDidChange:(_Bool *)arg1 deserializationDidFail:(_Bool *)arg2 identityGenerated:(_Bool *)arg3;	// IMP=0x001000000005ab90
- (_Bool)hasUnregisteredIdentity;	// IMP=0x001000000005a7f0
- (_Bool)notePublicIdentityDidRegisterKeyData:(id)arg1 forKeyIndex:(unsigned short)arg2;	// IMP=0x0010000000059e40
- (struct __SecKey *)copyPublicIdentityDataToRegisterForKeyIndex:(unsigned short)arg1 withError:(id *)arg2;	// IMP=0x0010000000059ae0
- (struct __SecKey *)fullIdentityForKeyIndex:(unsigned short)arg1;	// IMP=0x0010000000059770
- (_Bool)needsPublicDataUpdatedForKeyIndex:(unsigned short)arg1;	// IMP=0x0010000000059510
- (id)initWithIdentityDataSource:(id)arg1;	// IMP=0x0010000000059430

@end

