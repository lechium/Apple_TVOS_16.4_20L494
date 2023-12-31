//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebClientContext, NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSUIWebPluginLoader : NSObject
{
    AMSUIWebClientContext *_context;	// 8 = 0x8
    NSDictionary *_installedPluginURLs;	// 16 = 0x10
    NSMutableDictionary *_loadedPluginsMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008fb22
@property(retain, nonatomic) NSMutableDictionary *loadedPluginsMap; // @synthesize loadedPluginsMap=_loadedPluginsMap;
@property(readonly, nonatomic) NSDictionary *installedPluginURLs; // @synthesize installedPluginURLs=_installedPluginURLs;
@property(readonly, nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
- (id)_loadInstalledPlugins;	// IMP=0x000000000008f792
- (id)pluginForBundleIdentifier:(id)arg1;	// IMP=0x000000000008eed8
@property(readonly, nonatomic) NSArray *loadedPlugins;
- (id)initWithContext:(id)arg1;	// IMP=0x000000000008eddf

@end

