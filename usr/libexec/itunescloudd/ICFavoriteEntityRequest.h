//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface ICFavoriteEntityRequest
{
    long long _adamID;	// 8 = 0x8
    long long _sagaID;	// 16 = 0x10
    NSString *_globalPlaylistID;	// 24 = 0x18
    NSString *_albumCloudLibraryID;	// 32 = 0x20
    NSString *_artistCloudLibraryID;	// 40 = 0x28
    long long _entityType;	// 48 = 0x30
    NSDate *_timeStamp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000011a46e
- (id)description;	// IMP=0x001000000011a3dd
- (double)timeoutInterval;	// IMP=0x001000000011a3cf
- (id)_bodyDataWithStoreID:(long long)arg1 sagaID:(long long)arg2 globalPlaylistID:(id)arg3 albumCloudLibraryID:(id)arg4 artistCloudLibraryID:(id)arg5 time:(id)arg6 serverDatabaseRevision:(unsigned int)arg7;	// IMP=0x001000000011a291
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x001000000011a0f9
- (id)initWithStoreID:(long long)arg1 sagaID:(long long)arg2 globalPlaylistID:(id)arg3 albumCloudLibraryID:(id)arg4 artistCloudLibraryID:(id)arg5 entityType:(long long)arg6 time:(id)arg7 databaseID:(unsigned int)arg8 databaseRevision:(unsigned int)arg9;	// IMP=0x0010000000119f0a

@end

