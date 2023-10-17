//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCLockup, NSDictionary, NSString;

@interface ASCLockupProductDetails : NSObject
{
    ASCLockup *_lockup;	// 8 = 0x8
    NSString *_storeSheetHostBundleID;	// 16 = 0x10
    NSString *_storeSheetUsageContext;	// 24 = 0x18
    NSDictionary *_parameters;	// 32 = 0x20
}

+ (id)queryParametersForLockup:(id)arg1;	// IMP=0x0040000000012007
+ (id)URLForLockupID:(id)arg1 ofKind:(id)arg2 offerFlags:(long long)arg3 queryParameters:(id)arg4;	// IMP=0x0010000000011c20
+ (id)URLForLockupID:(id)arg1 ofKind:(id)arg2 withOfferFlags:(long long)arg3;	// IMP=0x0010000000011b91
- (void).cxx_destruct;	// IMP=0x0020000000012948
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *storeSheetUsageContext; // @synthesize storeSheetUsageContext=_storeSheetUsageContext;
@property(readonly, copy, nonatomic) NSString *storeSheetHostBundleID; // @synthesize storeSheetHostBundleID=_storeSheetHostBundleID;
@property(readonly, copy, nonatomic) ASCLockup *lockup; // @synthesize lockup=_lockup;
- (id)description;	// IMP=0x0010000000012882
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000012791
- (unsigned long long)hash;	// IMP=0x001000000001274b
- (void)present:(CDUnknownBlockType)arg1;	// IMP=0x001000000001224a
- (id)initWithLockup:(id)arg1 storeSheetHostBundleID:(id)arg2 storeSheetUsageContext:(id)arg3 parameters:(id)arg4;	// IMP=0x0010000000012131
- (id)initWithLockup:(id)arg1 storeSheetHostBundleID:(id)arg2 storeSheetUsageContext:(id)arg3;	// IMP=0x001000000001211c
- (id)initWithLockup:(id)arg1;	// IMP=0x0010000000012102

@end

