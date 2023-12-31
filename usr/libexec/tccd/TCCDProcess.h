//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TCCDProcess : NSObject
{
    _Bool _haveIsPlatformBinary;	// 8 = 0x8
    _Bool _isPlatformBinary;	// 9 = 0x9
    int _pid;	// 12 = 0xc
    unsigned int _auid;	// 16 = 0x10
    unsigned int _euid;	// 20 = 0x14
    unsigned int _codesignStatus;	// 24 = 0x18
    NSString *_responsiblePath;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSDictionary *_entitlements;	// 48 = 0x30
    NSString *_binaryPath;	// 56 = 0x38
    CDStruct_4c969caf _auditToken;	// 64 = 0x40
}

+ (id)identifierForInvalidCode;	// IMP=0x004000000003815d
- (void).cxx_destruct;	// IMP=0x00200000000392db
@property(retain) NSString *binaryPath; // @synthesize binaryPath=_binaryPath;
- (void)setCodesignStatus:(unsigned int)arg1;	// IMP=0x00100000000392af
- (unsigned int)codesignStatus;	// IMP=0x00100000000392a6
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned int euid; // @synthesize euid=_euid;
@property unsigned int auid; // @synthesize auid=_auid;
@property int pid; // @synthesize pid=_pid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000390e9
- (unsigned long long)hash;	// IMP=0x00100000000390bb
- (_Bool)_initializeUsingResponsibleIdentity:(id)arg1;	// IMP=0x00100000000390b3
- (_Bool)_initializeUsingTaskForAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000038e33
@property(readonly) _Bool isSystemPreferencesApp;
@property(readonly) _Bool isPlatformBinary;
@property(readonly) _Bool hasRuntimeValidationEnabled;
- (_Bool)hasEntitlement:(id)arg1 containsServiceAllOrService:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0010000000038cf6
- (_Bool)hasEntitlement:(id)arg1 containsService:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00100000000389e9
- (id)description;	// IMP=0x00100000000388c8
- (id)dictionaryValueForEntitlement:(id)arg1;	// IMP=0x00100000000387b7
- (id)arrayValueForEntitlement:(id)arg1;	// IMP=0x0010000000038681
- (_Bool)boolValueForEntitlement:(id)arg1;	// IMP=0x001000000003854e
@property(readonly) NSString *responsiblePath; // @synthesize responsiblePath=_responsiblePath;
- (void)dealloc;	// IMP=0x00100000000384e9
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 responsibleIdentity:(id)arg2;	// IMP=0x00100000000381eb
- (id)logHandle;	// IMP=0x001000000003816a

@end

