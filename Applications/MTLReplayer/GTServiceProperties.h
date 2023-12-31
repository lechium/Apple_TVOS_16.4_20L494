//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface GTServiceProperties : NSObject
{
    int _platform;	// 8 = 0x8
    NSString *_protocolName;	// 16 = 0x10
    NSArray *_protocolMethods;	// 24 = 0x18
    NSUUID *_bootSessionUUID;	// 32 = 0x20
    NSString *_deviceUDID;	// 40 = 0x28
    unsigned long long _servicePort;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000005222e
+ (id)protocolMethods:(id)arg1;	// IMP=0x0010000000052158
- (void).cxx_destruct;	// IMP=0x002000000005211a
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long servicePort; // @synthesize servicePort=_servicePort;
@property(copy, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(copy, nonatomic) NSUUID *bootSessionUUID; // @synthesize bootSessionUUID=_bootSessionUUID;
@property(readonly, nonatomic) NSArray *protocolMethods; // @synthesize protocolMethods=_protocolMethods;
@property(readonly, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000051fea
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000051e76
- (id)initWithProtocol:(id)arg1;	// IMP=0x0010000000051d67

@end

