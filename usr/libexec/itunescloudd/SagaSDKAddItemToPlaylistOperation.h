//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SagaSDKAddItemToPlaylistOperation
{
    unsigned long long _itemSagaID;	// 24 = 0x18
    long long _playlistPersistentID;	// 32 = 0x20
    NSString *_requestingBundleID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000117a42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001179c5
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000011792a
- (void)main;	// IMP=0x0010000000116e09
- (id)initWithConfiguration:(id)arg1 itemSagaID:(unsigned long long)arg2 playlistPersistentID:(long long)arg3 clientIdentity:(id)arg4 requestingBundleID:(id)arg5;	// IMP=0x0010000000116d54

@end

