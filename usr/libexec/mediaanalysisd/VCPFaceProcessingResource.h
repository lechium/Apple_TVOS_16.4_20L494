//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, PHAssetResource;

@interface VCPFaceProcessingResource : NSObject
{
    _Bool _isBestResource;	// 8 = 0x8
    _Bool _requestDownload;	// 9 = 0x9
    int _downloadStatus;	// 12 = 0xc
    PHAssetResource *_resource;	// 16 = 0x10
    NSURL *_resourceURL;	// 24 = 0x18
}

+ (id)resourceWithResource:(id)arg1 resourceURL:(id)arg2 isBestResource:(_Bool)arg3 requestDownload:(_Bool)arg4 downloadStatus:(int)arg5;	// IMP=0x004000000007b665
- (void).cxx_destruct;	// IMP=0x002000000007b745
@property(readonly, nonatomic) int downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(readonly, nonatomic) _Bool requestDownload; // @synthesize requestDownload=_requestDownload;
@property(readonly, nonatomic) _Bool isBestResource; // @synthesize isBestResource=_isBestResource;
@property(readonly, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(readonly, nonatomic) PHAssetResource *resource; // @synthesize resource=_resource;
- (id)initWithResource:(id)arg1 resourceURL:(id)arg2 isBestResource:(_Bool)arg3 requestDownload:(_Bool)arg4 downloadStatus:(int)arg5;	// IMP=0x001000000007b590

@end

