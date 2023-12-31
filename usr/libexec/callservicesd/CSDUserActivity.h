//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserActivity;

@interface CSDUserActivity : NSObject
{
    NSUserActivity *_userActivity;	// 8 = 0x8
    NSString *_dynamicIdentifier;	// 16 = 0x10
}

+ (id)_userActivityTypeStringForActivityType:(unsigned int)arg1;	// IMP=0x004000000016b4d3
+ (unsigned int)activityTypeForUserActivityTypeString:(id)arg1;	// IMP=0x001000000016b293
+ (_Bool)activityTypeRequiresBestAppSuggestionListener:(unsigned int)arg1;	// IMP=0x001000000016b281
+ (_Bool)activityTypeSupportsDynamicIdentifierRegistration:(unsigned int)arg1;	// IMP=0x001000000016b25f
+ (void)unregisterActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x001000000016b0fe
+ (void)registerActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x001000000016af9d
+ (id)activityWithType:(unsigned int)arg1 dynamicIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x001000000016ad05
+ (id)appHistoryActivityWithTitle:(id)arg1 subtitle:(id)arg2 keywords:(id)arg3 userInfo:(id)arg4;	// IMP=0x001000000016aadc
- (void).cxx_destruct;	// IMP=0x002000000016b901
@property(retain, nonatomic) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void)invalidate;	// IMP=0x001000000016b7d8
- (void)resignCurrent;	// IMP=0x001000000016b6e5
- (void)becomeCurrent;	// IMP=0x001000000016b5f2
- (void)addUserInfoEntriesFromDictionary:(id)arg1;	// IMP=0x001000000016b550
- (id)description;	// IMP=0x001000000016b34e

@end

