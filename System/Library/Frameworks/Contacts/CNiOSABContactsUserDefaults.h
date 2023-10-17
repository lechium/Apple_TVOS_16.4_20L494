//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactsUserDefaults.h"

@class CNiOSABContactsUserDefaultsABWrapper, NSCache, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults
{
    NSMutableDictionary *_observerCountPerKey;	// 8 = 0x8
    NSCache *_valueCache;	// 16 = 0x10
    CNiOSABContactsUserDefaultsABWrapper *_abWrapper;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000508e0
@property(readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper; // @synthesize abWrapper=_abWrapper;
@property(retain, nonatomic) NSCache *valueCache; // @synthesize valueCache=_valueCache;
@property(retain, nonatomic) NSMutableDictionary *observerCountPerKey; // @synthesize observerCountPerKey=_observerCountPerKey;
- (void)setLastIgnoredNewDuplicatesCount:(long long)arg1;	// IMP=0x0000000000050817
- (long long)lastIgnoredNewDuplicatesCount;	// IMP=0x00000000000506df
- (void)setFilteredGroupAndContainerIDs:(id)arg1;	// IMP=0x000000000005064e
- (id)filteredGroupAndContainerIDs;	// IMP=0x0000000000050548
- (id)countryCode;	// IMP=0x0000000000050442
- (_Bool)shortNameFormatPrefersNicknames;	// IMP=0x0000000000050308
- (void)setShortNameFormatPrefersNicknames:(_Bool)arg1;	// IMP=0x000000000005029a
- (_Bool)isShortNameFormatEnabled;	// IMP=0x0000000000050160
- (void)setShortNameFormatEnabled:(_Bool)arg1;	// IMP=0x00000000000500f2
- (long long)shortNameFormat;	// IMP=0x000000000004ff2d
- (void)setShortNameFormat:(long long)arg1;	// IMP=0x000000000004fe0c
- (long long)sortOrder;	// IMP=0x000000000004fc47
- (void)setDisplayNameOrder:(long long)arg1;	// IMP=0x000000000004fb4e
- (long long)newContactDisplayNameOrder;	// IMP=0x000000000004f9b6
- (long long)displayNameOrder;	// IMP=0x000000000004f7ef
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000004f763
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x000000000004f6ce
- (void)_unregisterObserverForKey:(id)arg1;	// IMP=0x000000000004f5c6
- (void)_registerObserverForKey:(id)arg1;	// IMP=0x000000000004f4ce
- (void)flushCache;	// IMP=0x000000000004f491
- (void)dealloc;	// IMP=0x000000000004f447
- (id)initWithABWrapper:(id)arg1;	// IMP=0x000000000004f061
- (id)init;	// IMP=0x000000000004f021

@end

