//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface CPLStreamingContentItem : NSObject
{
    NSURL *_streamingURL;	// 8 = 0x8
    NSData *_mediaItemMakerData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001239da
@property(retain, nonatomic) NSData *mediaItemMakerData; // @synthesize mediaItemMakerData=_mediaItemMakerData;
@property(retain, nonatomic) NSURL *streamingURL; // @synthesize streamingURL=_streamingURL;

@end
