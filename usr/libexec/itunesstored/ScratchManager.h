//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ScratchManager : NSObject
{
}

+ (id)_directoryPathForDownloadID:(long long)arg1 createIfNeeded:(_Bool)arg2 atBasePath:(id)arg3;	// IMP=0x004000000010eade
+ (id)_containerDirectoryPath;	// IMP=0x001000000010e4eb
+ (id)_baseDirectoryPath;	// IMP=0x001000000010e433
+ (id)directoryPathForDownloadID:(long long)arg1 kind:(id)arg2 createIfNeeded:(_Bool)arg3;	// IMP=0x001000000010e314
+ (id)directoryPathForDownloadID:(long long)arg1 assetID:(long long)arg2 kind:(id)arg3 createIfNeeded:(_Bool)arg4;	// IMP=0x001000000010e27e
+ (id)directoryPathForDownloadID:(long long)arg1 assetID:(long long)arg2 createIfNeeded:(_Bool)arg3;	// IMP=0x001000000010e266
+ (id)containerDirectoryPath;	// IMP=0x001000000010e1fb
+ (id)baseDirectoryPath;	// IMP=0x001000000010e190

@end
