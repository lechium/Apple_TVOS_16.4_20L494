//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BackupConfigurationService
{
}

+ (_Bool)hasLocalContactsWithError:(id *)arg1;	// IMP=0x00400000000096ce
+ (_Bool)checkBackupConfigurationWithFileManager:(id)arg1 url:(id)arg2 tccServices:(id)arg3;	// IMP=0x001000000000915e
+ (_Bool)checkBackupConfiguration;	// IMP=0x00100000000090a7
+ (void)run;	// IMP=0x0010000000008ff0
+ (const char *)activityIdentifier;	// IMP=0x0010000000008fe3

@end

