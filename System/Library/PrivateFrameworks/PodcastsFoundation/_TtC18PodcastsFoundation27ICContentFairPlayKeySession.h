//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString, PFFairPlayAsset;

@interface _TtC18PodcastsFoundation27ICContentFairPlayKeySession : _TtCs12_SwiftObject
{
    MISSING_TYPE *id;	// 16 = 0x10
    MISSING_TYPE *asset;	// 32 = 0x20
    MISSING_TYPE *bypassCache;	// 40 = 0x28
    MISSING_TYPE *keyStore;	// 48 = 0x30
    MISSING_TYPE *requestContext;	// 56 = 0x38
    MISSING_TYPE *keyCertificateURL;	// 0 = 0x0
    MISSING_TYPE *urlConfiguration;	// 0 = 0x0
    MISSING_TYPE *pendingProcessCompletion;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_delegateWrapper;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_logPrefix;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_session;	// 0 = 0x0
}

- (void)stopAndInvalidateKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000224b20
- (void)processKeyWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000224a20
- (void)registerWithAsset:(id)arg1;	// IMP=0x00000000002249b0
@property(nonatomic, readonly) NSString *keyStoreFilePath;
@property(nonatomic) _Bool bypassCache; // @synthesize bypassCache;
@property(nonatomic, readonly) PFFairPlayAsset *asset; // @synthesize asset;
@property(nonatomic, readonly) NSString *id;

@end

