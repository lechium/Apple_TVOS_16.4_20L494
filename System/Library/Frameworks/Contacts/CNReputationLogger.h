//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNReputationLogger : NSObject
{
}

+ (id)obfuscate:(id)arg1;	// IMP=0x00400000000bd8d1
+ (id)obfuscateHandle:(id)arg1;	// IMP=0x00400000000bd86f
+ (id)describeScore:(long long)arg1;	// IMP=0x00400000000bd7e9
+ (id)performanceLog;	// IMP=0x00400000000bd78d
+ (id)queryLog;	// IMP=0x00400000000bd731
- (void)reputationUnestablished;	// IMP=0x00000000000bd6e0
- (void)couldNotQueryContactsForPhoneNumberWithError:(id)arg1;	// IMP=0x00000000000bd668
- (void)contactsCouldNotConfirmTrustOfPhoneNumber;	// IMP=0x00000000000bd617
- (void)contactsConfirmedTrustOfPhoneNumber;	// IMP=0x00000000000bd5c6
- (void)couldNotQueryContactsForEmailAddressWithError:(id)arg1;	// IMP=0x00000000000bd54e
- (void)contactsCouldNotConfirmTrustOfEmailAddress;	// IMP=0x00000000000bd4fd
- (void)contactsConfirmedTrustOfEmailAddress;	// IMP=0x00000000000bd4ac
- (void)couldNotQueryCoreRecentsWithError:(id)arg1;	// IMP=0x00000000000bd434
- (void)coreRecentsCouldNotConfirmTrust;	// IMP=0x00000000000bd3e3
- (void)coreRecentsConfirmedTrust;	// IMP=0x00000000000bd392
- (void)timeToResolve:(double)arg1;	// IMP=0x00000000000bd337
- (void)queryForHandle:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000bd1ea
- (void)queryForHandle:(id)arg1 didFinishWithReputation:(id)arg2;	// IMP=0x00000000000bd087
- (void)beginQueryForHandle:(id)arg1;	// IMP=0x00000000000bcf9b

@end
