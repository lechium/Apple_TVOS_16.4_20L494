//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface MILaunchServicesUnregisterMountPointOperation
{
    NSURL *_mountPoint;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000007ae1
- (void).cxx_destruct;	// IMP=0x0020000000007f1f
@property(readonly, nonatomic) NSURL *mountPoint; // @synthesize mountPoint=_mountPoint;
- (id)description;	// IMP=0x0010000000007e0f
- (unsigned long long)hash;	// IMP=0x0010000000007d8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000007ca3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000007c08
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000007ae9
- (id)initWithMountPoint:(id)arg1 operationUUID:(id)arg2 serialNumber:(unsigned long long)arg3;	// IMP=0x0010000000007a5f

@end
