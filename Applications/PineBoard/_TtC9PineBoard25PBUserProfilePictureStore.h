//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9PineBoard25PBUserProfilePictureStore : NSObject
{
    MISSING_TYPE *downloader;	// 8 = 0x8
    MISSING_TYPE *cache;	// 16 = 0x10
    MISSING_TYPE *identifierMapper;	// 24 = 0x18
    MISSING_TYPE *stateDumpToken;	// 32 = 0x20
    MISSING_TYPE *observersQueue;	// 40 = 0x28
    MISSING_TYPE *observers;	// 48 = 0x30
    MISSING_TYPE *profileManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x004000000020f7b0
- (id)init;	// IMP=0x0010000000212e30
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000211f40
- (void)addObserver:(id)arg1;	// IMP=0x0010000000211c90
- (void)prefetchProfilePictureForUserProfile:(id)arg1;	// IMP=0x0010000000211c20
- (void)profilePictureFileForAltDSID:(id)arg1 loadOnlyFromCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000210bd0
- (void)profilePictureFileForAltDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020fc90
- (void)profilePictureFileForUserProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020faf0
- (void)dealloc;	// IMP=0x001000000020f740
- (id)initWithProfileManager:(id)arg1;	// IMP=0x001000000020f6c0

@end

