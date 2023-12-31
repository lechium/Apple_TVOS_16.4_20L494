//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (HKUUID)
+ (id)hk_dataWithHexString:(id)arg1;	// IMP=0x001000000012a7b7
+ (id)hk_randomDataOfLength:(long long)arg1;	// IMP=0x001000000012a65d
+ (id)hk_nilDataMD5;	// IMP=0x001000000012a4af
+ (id)hk_dataWithSHA256Fingerprint:(id)arg1 error:(out id *)arg2;	// IMP=0x001000000012a240
- (id)hk_dataForAllUUIDs;	// IMP=0x001000000006c9bc
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c6ac
- (unsigned long long)hk_countOfUUIDs;	// IMP=0x001000000006c687
- (void)hk_enumerateUUIDBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006c5f3
- (void)hk_enumerateUUIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015703
- (id)hk_hexString;	// IMP=0x001000000012a900
- (id)hk_SHA256;	// IMP=0x001000000012a5bd
- (id)hk_MD5;	// IMP=0x001000000012a51d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

