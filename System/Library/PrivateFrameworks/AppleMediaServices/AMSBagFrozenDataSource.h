//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSource : NSObject
{
    NSDate *_expirationDate;	// 8 = 0x8
    AMSProcessInfo *_processInfo;	// 16 = 0x10
    NSString *_profile;	// 24 = 0x18
    NSString *_profileVersion;	// 32 = 0x20
    ACAccount *_account;	// 40 = 0x28
    NSDictionary *_data;	// 48 = 0x30
    NSDictionary *_defaultValues;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000187adb
- (void).cxx_destruct;	// IMP=0x0000000000187b29
@property(readonly, nonatomic) NSDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001877c7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001875ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001874b5
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001874af
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;	// IMP=0x00000000001873e3
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018735d
- (id)defaultValueForKey:(id)arg1;	// IMP=0x000000000018722e
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 account:(id)arg5 processInfo:(id)arg6 defaultValues:(id)arg7;	// IMP=0x0000000000186fd2

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType dataSourceDataInvalidatedHandler;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSString *descriptionExtended;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
