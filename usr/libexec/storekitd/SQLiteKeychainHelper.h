//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLiteKeychainHelper : NSObject
{
}

+ (id)_valueFromKeychainForKey:(id)arg1 error:(id *)arg2;	// IMP=0x004000000007d57b
+ (_Bool)_saveValueToKeychain:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x001000000007d41f
+ (id)_copyErrorForOSStatus:(int)arg1;	// IMP=0x001000000007d2c7
+ (_Bool)storeKey:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000007d22b
+ (id)fetchKeyWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007d1ad

@end

