//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSDAccountMetrics : NSObject
{
}

+ (id)registrationAccountStatusMetricForNonexistentAccountWithType:(int)arg1 serviceIdentifier:(id)arg2;	// IMP=0x004000000018e230
+ (id)registrationAccountStatusMetricForAccount:(id)arg1;	// IMP=0x001000000018d6d0
+ (_Bool)isProductionEnvironment;	// IMP=0x001000000018d670
+ (_Bool)areAllSelectedAliasesRegisteredOnAccount:(id)arg1;	// IMP=0x001000000018d400
+ (_Bool)areAllAliasesSelectedOnAccount:(id)arg1;	// IMP=0x001000000018d1a0
+ (double)timeSinceLastRegistrationSuccessOnAccount:(id)arg1;	// IMP=0x001000000018d110
+ (double)timeSinceLastRegistrationFailureOnAccount:(id)arg1;	// IMP=0x001000000018d080
+ (double)timeSinceDateOnAccount:(id)arg1;	// IMP=0x001000000018cfd0
+ (long long)accountSecurityLevelForAccount:(id)arg1;	// IMP=0x001000000018cda0
+ (_Bool)isiCloudAccountMatchingAccount:(id)arg1;	// IMP=0x001000000018ca30
+ (_Bool)isiTunesSignedIn;	// IMP=0x001000000018c9a0
+ (_Bool)isiCloudSignedIn;	// IMP=0x001000000018c910
+ (_Bool)isAccountsFrameworkAvailable;	// IMP=0x001000000018c850

@end
