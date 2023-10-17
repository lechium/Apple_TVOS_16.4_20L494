//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPrefsCloudSource
{
    const char *_configPath;	// 120 = 0x78
    const char *_storeName;	// 128 = 0x80
    _Bool _enabled;	// 136 = 0x88
}

- (void)dealloc;	// IMP=0x000000000012be37
- (void)setStoreName:(struct __CFString *)arg1;	// IMP=0x000000000012bd75
- (void)setConfigurationPath:(struct __CFString *)arg1;	// IMP=0x000000000012bcb3
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000012ba41
- (_Bool)enabled;	// IMP=0x000000000012ba36
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1 sourceDictionary:(struct __CFDictionary *)arg2 cloudKeyEvaluator:(CDUnknownBlockType)arg3;	// IMP=0x000000000012b8f6
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000012b6be
- (int)alreadylocked_updateObservingRemoteChanges;	// IMP=0x000000000012b658
- (id)createSynchronizeMessage;	// IMP=0x000000000012b5bc
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;	// IMP=0x000000000012b548

@end
