//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol LibraryOpen, LibraryProgress, LibraryUninstall, OS_dispatch_queue;

@interface LibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSArray *_libraryCatalogs;	// 16 = 0x10
    id <LibraryOpen> _libraryOpen;	// 24 = 0x18
    id <LibraryProgress> _libraryProgress;	// 32 = 0x20
    id <LibraryUninstall> _libraryUninstall;	// 40 = 0x28
    NSMutableDictionary *_remoteCatalogs;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000018fd2c
- (void)catalogUnregisteredBundleIDs:(id)arg1;	// IMP=0x001000000018fb6c
- (void)catalogRefreshedBundleIDs:(id)arg1;	// IMP=0x001000000018fb0a
- (void)catalogRegisteredApps:(id)arg1;	// IMP=0x001000000018faa8
- (void)uninstallApp:(id)arg1 requestUserConfirmation:(_Bool)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018f78f
- (void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f72b
- (void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f6c7
- (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f663
- (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f5ff
- (void)launchApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f47e
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018f2ed
- (void)openableStatusForExecutableAtPath:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f2d8
- (void)resumeApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f2c2
- (void)pauseApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f2ac
- (void)cancelApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f296
- (void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018f22d
- (void)executeQueryWithPredicate:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018e84f
- (id)init;	// IMP=0x001000000018e64c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

