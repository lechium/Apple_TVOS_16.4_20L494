//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ICCloudContentTasteResponseCacheManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSString *_mediaContentTasteCacheDirectoryPath;	// 16 = 0x10
}

+ (id)sharedCloudContentTasteResponseCacheManager;	// IMP=0x00400000000ad098
- (void).cxx_destruct;	// IMP=0x00200000000ac80a
- (id)_prepareCachedResponseFromArchiveAtPath:(id)arg1;	// IMP=0x00100000000ac568
- (id)_prepareArchiveWithContentTasteReponse:(id)arg1;	// IMP=0x00100000000ac41e
- (id)_mediaContentTasteCacheFilePathForAccount:(id)arg1;	// IMP=0x00100000000ac232
- (void)removeCachedContentTasteResponseForConnectionConfiguration:(id)arg1;	// IMP=0x00100000000ac1a5
- (void)removeAllCachedContentTasteResponses;	// IMP=0x00100000000ac15a
- (_Bool)setCachedContentTasteUpdateResponse:(id)arg1 forConnectionConfiguration:(id)arg2;	// IMP=0x00100000000ac055
- (id)getCachedContentTasteResponseForConnectionConfiguration:(id)arg1;	// IMP=0x00100000000abf5a
- (id)_init;	// IMP=0x00100000000abecb
- (id)init;	// IMP=0x00100000000abe89

@end

