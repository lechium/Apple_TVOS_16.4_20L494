//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (LibAppStoreDaemon)
+ (id)lib_shortLogKeyWithAPIVersion:(long long)arg1;	// IMP=0x002000000006591e
+ (id)lib_shortLogKey;	// IMP=0x001000000006586f
+ (id)lib_UUIDWithLegacyJobID:(long long)arg1;	// IMP=0x0010000000065747
- (void)_lib_getBytes:(void *)arg1 count:(unsigned long long)arg2;	// IMP=0x002000000006598f
@property(readonly) unsigned long long lib_signpostId;
@property(readonly) NSString *lib_logUUID;
@property(readonly) long long lib_legacyJobID;
@end

