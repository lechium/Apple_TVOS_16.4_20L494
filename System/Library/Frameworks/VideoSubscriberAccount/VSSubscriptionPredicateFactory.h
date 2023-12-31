//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSAppInstallationInfoCenter;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPredicateFactory : NSObject
{
    VSAppInstallationInfoCenter *_appInstallationInfoCenter;	// 8 = 0x8
}

+ (id)_subscriptionPredicateTemplateValues;	// IMP=0x0060000000001d37
+ (id)_subscriptionSourcePredicateTemplateValues;	// IMP=0x0060000000001c04
+ (id)_subscriptionSourceKindPredicateTemplateValues;	// IMP=0x0060000000001b20
- (void).cxx_destruct;	// IMP=0x0000000000004364
@property(retain, nonatomic) VSAppInstallationInfoCenter *appInstallationInfoCenter; // @synthesize appInstallationInfoCenter=_appInstallationInfoCenter;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2;	// IMP=0x0000000000003d6e
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2;	// IMP=0x00000000000036e2
- (id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000002ab0
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x00000000000029b3
- (id)allowedSubscriptionsPredicateForTask:(id)arg1;	// IMP=0x00000000000028b6
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x00000000000027b9
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x0000000000002648
- (id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x0000000000002565
- (id)_predicateTemplateForSourceOfTask:(id)arg1;	// IMP=0x0000000000002411
- (id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2;	// IMP=0x000000000000228b
- (id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x00000000000021f1
- (id)_predicateTemplateForSourceIdentifier:(id)arg1;	// IMP=0x0000000000002126
- (id)_predicateTemplateForSourceKind:(long long)arg1;	// IMP=0x0000000000002048

@end

