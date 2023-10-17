//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSVoiceTriggerFirstPassMetrics, NSDictionary, NSString, NSUUID;

@interface CSVoiceTriggerSecondPassRequestOption : NSObject
{
    _Bool _isSecondChanceRun;	// 8 = 0x8
    unsigned long long _firstPassSource;	// 16 = 0x10
    NSString *_deviceId;	// 24 = 0x18
    NSString *_audioProviderUUID;	// 32 = 0x20
    NSDictionary *_firstPassTriggerInfo;	// 40 = 0x28
    NSUUID *_rejectionMHUUID;	// 48 = 0x30
    CSVoiceTriggerFirstPassMetrics *_firstpassMetrics;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000a1d9a
@property(readonly, nonatomic) CSVoiceTriggerFirstPassMetrics *firstpassMetrics; // @synthesize firstpassMetrics=_firstpassMetrics;
@property(readonly, nonatomic) _Bool isSecondChanceRun; // @synthesize isSecondChanceRun=_isSecondChanceRun;
@property(readonly, nonatomic) NSUUID *rejectionMHUUID; // @synthesize rejectionMHUUID=_rejectionMHUUID;
@property(readonly, nonatomic) NSDictionary *firstPassTriggerInfo; // @synthesize firstPassTriggerInfo=_firstPassTriggerInfo;
@property(readonly, nonatomic) NSString *audioProviderUUID; // @synthesize audioProviderUUID=_audioProviderUUID;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) unsigned long long firstPassSource; // @synthesize firstPassSource=_firstPassSource;
- (id)initWithFirstPassSource:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4 rejectionMHUUID:(id)arg5 isSecondChanceRun:(_Bool)arg6 firstpassMetrics:(id)arg7;	// IMP=0x00100000000a1c2a

@end

