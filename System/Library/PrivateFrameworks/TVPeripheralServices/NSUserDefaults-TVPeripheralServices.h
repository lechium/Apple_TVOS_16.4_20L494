//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (TVPeripheralServices)
+ (unsigned long long)_tvps_clickpadModeFromRawValue:(unsigned long long)arg1;	// IMP=0x0020000000002e00
+ (id)_tvps_legacyUserDefaults;	// IMP=0x0020000000002d30
+ (id)tvps_userDefaults;	// IMP=0x0020000000002bd0
+ (_Bool)tvps_migrate;	// IMP=0x0020000000002e40
@property(nonatomic, setter=tvps_setRemoteClickpadMode:) unsigned long long tvps_remoteClickpadMode;
@end
