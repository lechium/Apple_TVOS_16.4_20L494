//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADVIDocumentRecognitionRequest, NSString, VCPMADServiceImageAsset, VNImageBasedRequest;
@protocol MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADVIDocumentRecognitionTask : NSObject
{
    MADVIDocumentRecognitionRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    id <MTLDevice> _preferredMetalDevice;	// 24 = 0x18
    NSString *_signpostPayload;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_cancelQueue;	// 40 = 0x28
    struct atomic<bool> _canceled;	// 48 = 0x30
    VNImageBasedRequest *_weakRequest;	// 56 = 0x38
}

+ (id)dependencies;	// IMP=0x001000000012a844
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x001000000012a65b
- (void).cxx_destruct;	// IMP=0x000000000012b6b4
- (int)run;	// IMP=0x000000000012a96a
- (_Bool)canReuseResultsForRequest;	// IMP=0x000000000012a92a
- (void)cancel;	// IMP=0x000000000012a878
- (_Bool)autoCancellable;	// IMP=0x000000000012a870
- (float)resourceRequirement;	// IMP=0x000000000012a862
- (void)setPreferredMetalDevice:(id)arg1;	// IMP=0x000000000012a851
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x000000000012a561

@end
