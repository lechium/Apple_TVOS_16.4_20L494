//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol PLAssetsdCloudServiceProtocol <NSObject>
- (void)computeFingerPrintsOfAssetWithObjectURI:(NSURL *)arg1 synchronously:(_Bool)arg2 reply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(NSArray *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(NSArray *)arg1 doneTokens:(NSArray *)arg2 format:(unsigned long long)arg3 reply:(void (^)(_Bool, NSArray *, NSError *))arg4;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(NSURL *)arg1 taskIdentifier:(NSString *)arg2 resourceType:(unsigned long long)arg3 HighPriority:(_Bool)arg4 trackCPLDownload:(_Bool)arg5 downloadIsTransient:(_Bool)arg6 reply:(void (^)(_Bool, NSString *, NSString *, NSError *))arg7;
- (void)cancelCPLDownloadTaskWithIdentifier:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(NSURL *)arg1 mediaAssetType:(unsigned long long)arg2 reply:(void (^)(_Bool, NSURL *, NSError *))arg3;
@end

