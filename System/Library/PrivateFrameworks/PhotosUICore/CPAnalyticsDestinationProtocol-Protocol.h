//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PHPhotoLibrary;
@protocol CPAnalyticsEventProtocol;

@protocol CPAnalyticsDestinationProtocol <NSObject>
- (void)processEvent:(id <CPAnalyticsEventProtocol>)arg1;

@optional
- (void)setPhotoLibrary:(PHPhotoLibrary *)arg1;
@end

