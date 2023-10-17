//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSourceBuilder : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    NSDictionary *_data;	// 16 = 0x10
    NSDictionary *_defaultValues;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    NSString *_profile;	// 40 = 0x28
    NSString *_profileVersion;	// 48 = 0x30
    AMSProcessInfo *_processInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000188adc
@property(retain, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(retain, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)createFrozenDataSource;	// IMP=0x0000000000188744
- (id)createFrozenBag;	// IMP=0x0000000000187dd7
- (id)initWithFrozenDataSource:(id)arg1;	// IMP=0x0000000000187b88

@end

