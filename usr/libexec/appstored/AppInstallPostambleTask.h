//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AppInstall, AppPackage;

@interface AppInstallPostambleTask
{
    long long _automaticType;	// 8 = 0x8
    AppInstall *_install;	// 16 = 0x10
    long long _restoreType;	// 24 = 0x18
    long long _sourceType;	// 32 = 0x20
    long long _updateType;	// 40 = 0x28
    AppPackage *_package;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001c63b9
- (void)main;	// IMP=0x00100000001c594b

@end

