//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TFApplication : PBCodable
{
    unsigned long long _applicationAdamId;	// 8 = 0x8
    unsigned long long _uptimeMillis;	// 16 = 0x10
    NSString *_bundleId;	// 24 = 0x18
    NSString *_cfBundleShortVersionString;	// 32 = 0x20
    NSString *_cfBundleVersion;	// 40 = 0x28
    NSString *_ciBuildGroup;	// 48 = 0x30
    NSString *_gitBranch;	// 56 = 0x38
    int _platform;	// 64 = 0x40
    _Bool _isAppClip;	// 68 = 0x44
    struct {
        unsigned int applicationAdamId:1;
        unsigned int uptimeMillis:1;
        unsigned int platform:1;
        unsigned int isAppClip:1;
    } _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001e6594
- (unsigned long long)hash;	// IMP=0x00100000001e643a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e620c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001e607c
- (void)writeTo:(id)arg1;	// IMP=0x00100000001e5ed5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001e5ec8
- (id)dictionaryRepresentation;	// IMP=0x00100000001e57e1
- (id)description;	// IMP=0x00100000001e5732

@end

