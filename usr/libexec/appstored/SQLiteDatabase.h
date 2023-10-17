//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SQLiteConnection;
@protocol OS_dispatch_queue;

@interface SQLiteDatabase : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    NSHashTable *_migratedStores;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000005bafb
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;	// IMP=0x001000000005b90e
- (_Bool)connectionNeedsResetForReopen:(id)arg1;	// IMP=0x001000000005b7de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

