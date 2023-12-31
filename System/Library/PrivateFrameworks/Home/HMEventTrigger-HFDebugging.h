//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMEventTrigger.h>

@class HMDurationEvent, NSArray, NSString;

@interface HMEventTrigger (HFDebugging)
+ (id)_hf_naturalLanguageDetailsSentenceElementsWithRecurrences:(id)arg1 conditions:(id)arg2 endEvents:(id)arg3 withOptions:(id)arg4;	// IMP=0x00100000000e0ee0
+ (id)hf_naturalLanguageDetailsWithRecurrences:(id)arg1 conditions:(id)arg2 endEvents:(id)arg3 withOptions:(id)arg4;	// IMP=0x00100000000e0da3
+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)arg1;	// IMP=0x00100000000e0b30
+ (unsigned long long)hf_triggerRangeTypeWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00100000000e0708
+ (id)_hf_triggerRangeKeyComponentForRangeType:(unsigned long long)arg1;	// IMP=0x00100000000e06e4
+ (id)hf_naturalLanguageTurnOffAfterDuration:(id)arg1 style:(unsigned long long)arg2;	// IMP=0x00100000000e055e
+ (id)hf_localizedStringForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00100000000e0501
+ (id)hf_localizationKeyForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00100000000e0468
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00100000000e01f8
+ (id)hf_triggerRangeValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00100000000dff98
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValue:(id)arg2;	// IMP=0x00100000000df939
+ (id)hf_triggerValueNaturalLanguageDescriptionFormatterWithCharacteristics:(id)arg1;	// IMP=0x00100000000df6d4
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 nonSensorCharacteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00100000000df0cb
+ (id)_hf_alarmNaturalLanguageNameWithNameStringKey:(id)arg1 nameType:(unsigned long long)arg2 thresholdKey:(id)arg3 thresholdValueDescription:(id)arg4 roomName:(id)arg5 actionsDescription:(id)arg6;	// IMP=0x00100000000dee24
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 sensorCharacteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00100000000de423
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 characteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00100000000de1ec
+ (id)hf_naturalLanguageDescriptionForCharacteristic:(id)arg1;	// IMP=0x00100000000de0e6
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 presenceEvent:(id)arg2;	// IMP=0x00100000000ddee6
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 region:(id)arg2 forUser:(id)arg3;	// IMP=0x00100000000dd7bb
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 recurrences:(id)arg3 forUser:(id)arg4;	// IMP=0x00100000000dd169
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 recurrences:(id)arg3;	// IMP=0x00100000000dd154
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 forUser:(id)arg3;	// IMP=0x00100000000dd138
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2;	// IMP=0x00100000000dd11c
+ (id)hf_representativeTriggerValueForCharacteristic:(id)arg1 similarToValue:(id)arg2;	// IMP=0x00100000002032d0
+ (_Bool)_hf_valueIsValidForCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x001000000020310d
+ (id)hf_allTriggerValuesForCharacteristic:(id)arg1 similarToValue:(id)arg2;	// IMP=0x0010000000202ce1
+ (id)hf_newTriggerWithBuilder:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000030e4a7
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000a8979
- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;	// IMP=0x00100000000e0bbd
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x00100000000dd022
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00100000000dcf92
- (_Bool)hf_affectsCharacteristics:(id)arg1;	// IMP=0x00100000002019d3
- (_Bool)hf_requiresConfirmationToRun;	// IMP=0x00100000002018da
- (id)hf_characteristicsInEvents;	// IMP=0x0010000000202bbb
- (id)hf_designateTrigger:(_Bool)arg1;	// IMP=0x0010000000202631
- (id)hf_unmarkTriggerAsHomeAppCreated;	// IMP=0x001000000020261d
- (id)hf_markTriggerAsHomeAppCreated;	// IMP=0x0010000000202606
- (_Bool)hf_isHomeAppCreatedTrigger;	// IMP=0x001000000020219b
- (unsigned long long)hf_triggerType;	// IMP=0x0010000000201dbc
@property(readonly, nonatomic) NSArray *hf_effectiveRecurrences;
@property(readonly, nonatomic) HMDurationEvent *hf_durationEndEvent;
- (id)hf_updateWithBuilder:(id)arg1;	// IMP=0x001000000030e274
- (id)hf_copyAsBuilder;	// IMP=0x001000000030e24c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

