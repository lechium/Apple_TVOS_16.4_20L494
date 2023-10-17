//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISLoadURLBagOperation, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UpdateMigrator : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned long long _updateType;	// 16 = 0x10
    ISLoadURLBagOperation *_loadURLBagOperation;	// 24 = 0x18
    NSMutableArray *_migrations;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000000b45ae
- (void).cxx_destruct;	// IMP=0x00200000000b5ff6
- (void)_queueMigration:(id)arg1;	// IMP=0x00100000000b59c4
- (void)_performMigration;	// IMP=0x00100000000b581e
- (void)_loadBagAndPerformMigration;	// IMP=0x00100000000b52dc
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x00100000000b506e
- (void)restoreDemotedBundleIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x00100000000b4dfe
- (_Bool)performMigration:(unsigned long long)arg1;	// IMP=0x00100000000b4776
- (void)destroyInstance;	// IMP=0x00100000000b473e
- (void)dealloc;	// IMP=0x00100000000b468b
- (id)init;	// IMP=0x00100000000b4633

@end
