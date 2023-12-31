//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSURL;

@interface MILaunchServicesRegisterOperation
{
    NSString *_bundleID;	// 8 = 0x8
    unsigned long long _domain;	// 16 = 0x10
    NSSet *_personaUniqueStrings;	// 24 = 0x18
    NSURL *_mountPoint;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000422e3
- (void).cxx_destruct;	// IMP=0x0020000000042d11
@property(readonly, nonatomic) NSURL *mountPoint; // @synthesize mountPoint=_mountPoint;
@property(readonly, nonatomic) NSSet *personaUniqueStrings; // @synthesize personaUniqueStrings=_personaUniqueStrings;
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x0010000000042a9d
- (void)updatePersonaUniqueStrings:(id)arg1;	// IMP=0x0010000000042a69
- (unsigned long long)hash;	// IMP=0x0010000000042970
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000042786
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000042629
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000422eb
- (id)initWithBundleID:(id)arg1 domain:(unsigned long long)arg2 personas:(id)arg3 mountPoint:(id)arg4 operationUUID:(id)arg5 serialNumber:(unsigned long long)arg6;	// IMP=0x00100000000421d3

@end

