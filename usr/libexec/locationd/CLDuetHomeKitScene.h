//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CLDuetHomeKitScene : NSObject
{
    NSString *_homeUUID;	// 8 = 0x8
    NSString *_actionSetUUID;	// 16 = 0x10
    NSString *_actionSetName;	// 24 = 0x18
    NSString *_actionSetType;	// 32 = 0x20
    NSString *_clientName;	// 40 = 0x28
    NSString *_source;	// 48 = 0x30
    NSNumber *_triggerLocalizationScan;	// 56 = 0x38
    NSNumber *_triggerRecordingScan;	// 64 = 0x40
}

@property(retain, nonatomic) NSNumber *triggerRecordingScan; // @synthesize triggerRecordingScan=_triggerRecordingScan;
@property(retain, nonatomic) NSNumber *triggerLocalizationScan; // @synthesize triggerLocalizationScan=_triggerLocalizationScan;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property(retain, nonatomic) NSString *actionSetName; // @synthesize actionSetName=_actionSetName;
@property(retain, nonatomic) NSString *actionSetUUID; // @synthesize actionSetUUID=_actionSetUUID;
@property(retain, nonatomic) NSString *homeUUID; // @synthesize homeUUID=_homeUUID;
- (void)dealloc;	// IMP=0x001000000015c63f
- (id)initWithHomeUUID:(id)arg1 actionSetUUID:(id)arg2 actionSetName:(id)arg3 actionSetType:(id)arg4 clientName:(id)arg5 source:(id)arg6 triggerLocalizationScan:(id)arg7 triggerRecordingScan:(id)arg8;	// IMP=0x001000000015c553

@end

