//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoDelegateInfo : PBCodable
{
    unsigned long long _accountID;	// 8 = 0x8
    long long _delegateInfoID;	// 16 = 0x10
    NSString *_deviceGUID;	// 24 = 0x18
    NSString *_deviceName;	// 32 = 0x20
    NSString *_requestUserAgent;	// 40 = 0x28
    int _systemReleaseType;	// 48 = 0x30
    NSString *_timeZoneName;	// 56 = 0x38
    NSString *_uuid;	// 64 = 0x40
    _Bool _privateListeningEnabled;	// 72 = 0x48
    struct {
        unsigned int accountID:1;
        unsigned int delegateInfoID:1;
        unsigned int systemReleaseType:1;
        unsigned int privateListeningEnabled:1;
    } _has;	// 76 = 0x4c
}

+ (id)currentDeviceDelegateInfo;	// IMP=0x001000000028f0c8
- (void).cxx_destruct;	// IMP=0x0000000000274028
- (unsigned long long)hash;	// IMP=0x0000000000273ee9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000273cb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000273b15
- (void)writeTo:(id)arg1;	// IMP=0x00000000002739d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002739c7
- (id)dictionaryRepresentation;	// IMP=0x0000000000273762
- (id)description;	// IMP=0x00000000002736b3
- (id)playbackRequestEnvironmentWithBaseEnvironment:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002d8348

@end

