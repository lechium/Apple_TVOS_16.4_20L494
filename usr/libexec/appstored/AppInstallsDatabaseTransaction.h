//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AppInstallsDatabaseChangeset, NSString, SQLiteConnection;

@interface AppInstallsDatabaseTransaction
{
    AppInstallsDatabaseChangeset *_changeset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000600bd
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000005c8f8

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

