//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol IMDaemonFileProviderProtocol <NSObject>
- (void)downloadFileTransferWithLocalURL:(NSURL *)arg1;
- (void)retrieveLocalFileURLForFileTransferWithGUIDs:(NSArray *)arg1 options:(long long)arg2;
- (void)retrieveLocalFileURLForFileTransferWithGUID:(NSString *)arg1 options:(long long)arg2;
@end

