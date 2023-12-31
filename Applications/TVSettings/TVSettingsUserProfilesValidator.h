//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface TVSettingsUserProfilesValidator : NSObject
{
    long long _userActionType;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ef829
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) long long userActionType; // @synthesize userActionType=_userActionType;
- (_Bool)canSignInUserWithGameCenterAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ef10c
- (_Bool)canSignInUserWithiCloudAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ef0fd
- (_Bool)canAddUserWithiCloudAltDSID:(id)arg1 gameCenterAltDSID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ef0f3
- (_Bool)canAddUserWithAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ee922
- (id)init;	// IMP=0x00100000000ee8bc

@end

