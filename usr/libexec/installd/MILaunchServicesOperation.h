//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface MILaunchServicesOperation : NSObject
{
    NSUUID *_operationUUID;	// 8 = 0x8
    unsigned long long _serialNumber;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000a490
- (void).cxx_destruct;	// IMP=0x002000000000a8f5
@property(readonly, nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
- (id)description;	// IMP=0x001000000000a832
- (unsigned long long)hash;	// IMP=0x001000000000a7d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000a6c6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000a601
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000a498
- (id)initWithOperationUUID:(id)arg1 serialNumber:(unsigned long long)arg2;	// IMP=0x001000000000a41a

@end

