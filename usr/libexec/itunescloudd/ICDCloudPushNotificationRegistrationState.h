//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDCloudPushNotificationRegistrationState : NSObject
{
    NSMutableDictionary *_accountRegistrationStates;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ecc4c
- (void)setRegistrationState:(id)arg1 forAccountDSID:(id)arg2;	// IMP=0x00100000000ecc36
- (id)registrationStateForAccountDSID:(id)arg1;	// IMP=0x00100000000ecc20
- (id)dictionaryRepresentation;	// IMP=0x00100000000ecb1e
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000eca0c

@end

