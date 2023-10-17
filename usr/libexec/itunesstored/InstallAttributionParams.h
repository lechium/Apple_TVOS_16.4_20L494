//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface InstallAttributionParams : NSObject
{
    NSNumber *_appAdamId;	// 8 = 0x8
    NSString *_adNetworkId;	// 16 = 0x10
    NSNumber *_campaignId;	// 24 = 0x18
    NSString *_impressionId;	// 32 = 0x20
    NSNumber *_timestamp;	// 40 = 0x28
    NSString *_attributionSignature;	// 48 = 0x30
    NSNumber *_localTimestamp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000010be4e
@property(retain, nonatomic) NSNumber *localTimestamp; // @synthesize localTimestamp=_localTimestamp;
@property(retain, nonatomic) NSString *attributionSignature; // @synthesize attributionSignature=_attributionSignature;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *impressionId; // @synthesize impressionId=_impressionId;
@property(retain, nonatomic) NSNumber *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property(retain, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000010b9c7

@end

