//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/NSObject-Protocol.h>

@class SHMediaItem, SHMediaItemPresentationSettings;

@protocol SHMediaItemPresentation <NSObject>
- (void)presentMediaItem:(SHMediaItem *)arg1 presentationSettings:(SHMediaItemPresentationSettings *)arg2 completionHandler:(void (^)(long long, NSURL *, NSError *))arg3;
- (void)presentMediaItem:(SHMediaItem *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

