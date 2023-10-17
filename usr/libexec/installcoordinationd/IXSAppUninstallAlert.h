//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IXSAppUninstallAlert
{
    _Bool _appManagedByManagedSettings;	// 8 = 0x8
    struct __CFBundle *_appStringsBundle;	// 16 = 0x10
    NSString *_appStringsTableName;	// 24 = 0x18
}

+ (id)_loadHBMCloudSyncUtilityClass;	// IMP=0x004000000002e6ea
- (void).cxx_destruct;	// IMP=0x002000000002f3a3
@property(readonly, nonatomic) NSString *appStringsTableName; // @synthesize appStringsTableName=_appStringsTableName;
@property(readonly, nonatomic) struct __CFBundle *appStringsBundle; // @synthesize appStringsBundle=_appStringsBundle;
@property(readonly, nonatomic) _Bool appManagedByManagedSettings; // @synthesize appManagedByManagedSettings=_appManagedByManagedSettings;
- (void)dealloc;	// IMP=0x001000000002f31f
- (void)otherButtonActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f289
- (id)optionalButtonForNotRemovableAppActionURL;	// IMP=0x001000000002f0f9
- (id)optionalButtonForNotRemovableAppLabel;	// IMP=0x001000000002eff0
- (id)otherButtonLabel;	// IMP=0x001000000002ef9e
- (id)cancelButtonLabel;	// IMP=0x001000000002ef7e
- (id)defaultButtonLabel;	// IMP=0x001000000002ef5e
- (id)message;	// IMP=0x001000000002eca1
- (id)title;	// IMP=0x001000000002eb98
- (id)appInstalledFonts;	// IMP=0x001000000002eb90
- (id)localizedStringForKey:(id)arg1 withFormatHint:(id)arg2;	// IMP=0x001000000002eae9
- (id)customizedLocalizedStringForKey:(id)arg1;	// IMP=0x001000000002e96b
@property(readonly, nonatomic) _Bool deviceHasOneHomeEnabled; // @dynamic deviceHasOneHomeEnabled;
@property(readonly, nonatomic) _Bool appHasiCloudDataOrDocuments; // @dynamic appHasiCloudDataOrDocuments;
- (id)initWithAppRecord:(id)arg1 bundleIdentifier:(id)arg2 isRemovable:(_Bool)arg3 isManagedByManagedSettings:(_Bool)arg4;	// IMP=0x001000000002e1fa

@end

