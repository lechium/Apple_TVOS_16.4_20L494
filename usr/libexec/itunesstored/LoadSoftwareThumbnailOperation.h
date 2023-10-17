//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class ApplicationHandle, MISSING_TYPE, NSURL;

@interface LoadSoftwareThumbnailOperation : ISOperation
{
    _Bool _storeDownload;	// 91 = 0x5b
    NSURL *_thumbnailURL;	// 96 = 0x60
    MISSING_TYPE *_applicationHandle;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000191030
@property(copy, nonatomic) ApplicationHandle *applicationHandle; // @synthesize applicationHandle=_applicationHandle;
- (id)_artworkDataWithError:(id *)arg1;	// IMP=0x0010000000190f04
- (void)run;	// IMP=0x001000000019079b
@property(getter=isStoreDownload) _Bool storeDownload;
- (id)initWithApplicationHandle:(id)arg1 thumbnailURL:(id)arg2;	// IMP=0x001000000019064b

@end
