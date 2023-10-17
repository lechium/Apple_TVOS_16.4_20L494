//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString, PKDAnnotationStore, PKDPersonaCache;
@protocol PKApplicationWorkspaceProxy, PKDatabaseDelegate, PKProxyFactory;

@interface PKDatabase : NSObject
{
    struct os_unfair_lock_s _cacheLock;	// 8 = 0x8
    id <PKDatabaseDelegate> _delegate;	// 16 = 0x10
    id <PKProxyFactory> _proxyFactory;	// 24 = 0x18
    id <PKApplicationWorkspaceProxy> _workspace;	// 32 = 0x20
    PKDAnnotationStore *_annotations;	// 40 = 0x28
    NSCache *_cache;	// 48 = 0x30
    unsigned long long _cacheHits;	// 56 = 0x38
    unsigned long long _cacheMisses;	// 64 = 0x40
    id _regionObserver;	// 72 = 0x48
    PKDPersonaCache *_personaCache;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000159e1
@property(retain, nonatomic) PKDPersonaCache *personaCache; // @synthesize personaCache=_personaCache;
@property(retain, nonatomic) id regionObserver; // @synthesize regionObserver=_regionObserver;
@property(nonatomic) unsigned long long cacheMisses; // @synthesize cacheMisses=_cacheMisses;
@property(nonatomic) unsigned long long cacheHits; // @synthesize cacheHits=_cacheHits;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) struct os_unfair_lock_s cacheLock; // @synthesize cacheLock=_cacheLock;
@property(retain, nonatomic) PKDAnnotationStore *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) id <PKApplicationWorkspaceProxy> workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) id <PKProxyFactory> proxyFactory; // @synthesize proxyFactory=_proxyFactory;
@property __weak id <PKDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x0010000000015192
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x0010000000014df8
- (void)_locked_autoElect:(id)arg1;	// IMP=0x0010000000014cb3
- (void)notifyAnnotationChange;	// IMP=0x0010000000014c4d
- (id)setAnnotation:(id)arg1 forPlugIn:(id)arg2;	// IMP=0x0010000000014bb0
- (id)annotationForIdentifier:(id)arg1;	// IMP=0x0010000000014b1c
- (id)annotationForPlugIn:(id)arg1;	// IMP=0x0010000000014a88
- (id)removePlugIn:(id)arg1;	// IMP=0x001000000001490c
- (id)addPlugIn:(id)arg1;	// IMP=0x0010000000014790
- (id)plugInsWithExtensionPointName:(id)arg1 platforms:(id)arg2;	// IMP=0x0010000000014459
- (id)plugInsWithinApplication:(id)arg1;	// IMP=0x00100000000141a9
- (id)findPlugInAtPath:(id)arg1;	// IMP=0x00100000000140a0
- (id)findPlugInWithUUID:(id)arg1 discoveryUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x0010000000013f12
- (id)findPlugInWithUUID:(id)arg1;	// IMP=0x0010000000013e83
- (id)findPlugInsForQuery:(id)arg1 discoveryInstanceUUID:(id)arg2 allVersions:(_Bool)arg3;	// IMP=0x0010000000013531
- (id)createPlugInForProxy:(id)arg1 uuid:(id)arg2 discoveryInstanceUUID:(id)arg3 extensionPointCache:(id)arg4;	// IMP=0x0010000000013313
- (id)plugInForExtensionRecord:(id)arg1 discoveryInstanceUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x001000000001317e
- (id)plugInForProxy:(id)arg1 discoveryInstanceUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x0010000000013025
- (id)cachedPlugInWithUUID:(id)arg1;	// IMP=0x0010000000012fbf
- (id)_locked_cachedPlugInWithUUID:(id)arg1;	// IMP=0x0010000000012e94
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x0010000000012e8e
- (id)initWithDatabase:(id)arg1 proxyFactory:(id)arg2;	// IMP=0x0010000000012b5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
