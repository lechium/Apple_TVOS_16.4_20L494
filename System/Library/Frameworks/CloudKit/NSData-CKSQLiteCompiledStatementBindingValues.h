//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (CKSQLiteCompiledStatementBindingValues)
+ (id)CKDataFromBase64URLSafeString:(id)arg1;	// IMP=0x00100000000ab997
+ (id)CKDataWithHexString:(id)arg1;	// IMP=0x00100000000ab87a
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(_Bool)arg2;	// IMP=0x00100000000ab66a
- (const void *)cksqlcs_blobBindingValue:(unsigned long long *)arg1 destructor:(CDUnknownFunctionPointerType *)arg2 error:(id *)arg3;	// IMP=0x00100000000a1f74
- (id)CKSHA256;	// IMP=0x00100000000ababa
- (id)CKBase64URLSafeString;	// IMP=0x00100000000ab88e
- (id)CKUppercaseHexStringWithoutSpaces;	// IMP=0x00100000000ab5cf
- (id)CKLowercaseHexStringWithoutSpaces;	// IMP=0x00100000000ab534
- (id)CKHexString;	// IMP=0x00100000000ab49c
- (id)CKHashedDescription;	// IMP=0x00100000000ad492
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00100000000adefa
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000001b05a3
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x0010000000210144

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

