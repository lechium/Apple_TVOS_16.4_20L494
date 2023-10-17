//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

@protocol AMSBagAccountProvider
@property(readonly, nonatomic) NSString *identity;
@property(readonly, nonatomic) _Bool bagLoadShouldUpdateAccountProperties;
- (NSString *)bagStorefrontForAccountMediaType:(NSString *)arg1;
- (ACAccount *)bagAccountForAccountMediaType:(NSString *)arg1;
- (_Bool)associatedAccountIsEqualToAccount:(ACAccount *)arg1 forMediaType:(NSString *)arg2;
@end

