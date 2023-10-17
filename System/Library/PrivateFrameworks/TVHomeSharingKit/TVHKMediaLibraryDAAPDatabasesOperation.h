//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryDAAPDatabasesOperation
{
    unsigned int _databaseID;	// 8 = 0x8
    NSString *_databaseName;	// 16 = 0x10
    unsigned long long _databasePersistentID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000090b93
@property(nonatomic) unsigned long long databasePersistentID; // @synthesize databasePersistentID=_databasePersistentID;
@property(nonatomic) unsigned int databaseID; // @synthesize databaseID=_databaseID;
@property(copy, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000009065e
- (id)initWithSessionState:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000009058a
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000009051b

@end

