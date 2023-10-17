//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (EKAdditions)
+ (_Bool)_cal_serializedEntryForKey:(id)arg1 value:(id)arg2 outKey:(id *)arg3 outValue:(id *)arg4;	// IMP=0x0080000000042bb4
+ (id)errorWithDomain:(id)arg1 code:(unsigned long long)arg2 description:(id)arg3 underlyingError:(id)arg4 reason:(id)arg5;	// IMP=0x008000000006aeed
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;	// IMP=0x008000000006aebb
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;	// IMP=0x008000000006aea3
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;	// IMP=0x008000000006ae8b
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x008000000006adf9
+ (id)errorWithEKErrorCode:(long long)arg1;	// IMP=0x008000000006ad95
+ (id)errorWithCADErrorCode:(int)arg1 description:(id)arg2;	// IMP=0x008000000006ad63
+ (id)errorWithCADErrorCode:(int)arg1;	// IMP=0x008000000006acff
+ (id)errorWithCADResult:(int)arg1;	// IMP=0x008000000006aca8
+ (id)_defaultDescriptionForEKErrorCode:(long long)arg1;	// IMP=0x008000000006a7bf
+ (id)_defaultDescriptionForCADErrorCode:(int)arg1;	// IMP=0x008000000006a710
- (id)cal_serializableError;	// IMP=0x001000000004325f
- (id)cal_serializableUserInfo;	// IMP=0x0010000000042e3c
- (struct __SecTrust *)cal_trustInfoCopy;	// IMP=0x0010000000042a9f
- (_Bool)cal_isCertificateError;	// IMP=0x0010000000042971
@end
