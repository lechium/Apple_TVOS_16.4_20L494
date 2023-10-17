//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class DirectUploadRequest;

@interface PrepareDirectUploadOperation : ISOperation
{
    CDUnknownBlockType _outputBlock;	// 96 = 0x60
    DirectUploadRequest *_request;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000b7dcc
- (id)_uploadURL;	// IMP=0x00100000000b7990
- (id)_newURLRequestWithURL:(id)arg1;	// IMP=0x00100000000b75d5
- (void)run;	// IMP=0x00100000000b6be4
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithRequest:(id)arg1;	// IMP=0x00100000000b6a96

@end
